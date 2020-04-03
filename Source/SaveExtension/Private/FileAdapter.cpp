// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "FileAdapter.h"

#include <UObject/UObjectGlobals.h>
#include <UObject/Package.h>
#include <Serialization/MemoryReader.h>
#include <Serialization/MemoryWriter.h>
#include <Serialization/ArchiveSaveCompressedProxy.h>
#include <Serialization/ArchiveLoadCompressedProxy.h>
#include <SaveGameSystem.h>

#include "SavePreset.h"
#include "Multithreading/SaveFileTask.h"


static const int SE_SAVEGAME_FILE_TYPE_TAG = 0x0001;		// "sAvG"

struct FSaveGameFileVersion
{
	enum Type
	{
		InitialVersion = 1,
		// serializing custom versions into the savegame data to handle that type of versioning
		AddedCustomVersions = 2,

		// -----<new versions can be added above this line>-------------------------------------------------
		VersionPlusOne,
		LatestVersion = VersionPlusOne - 1
	};
};


/*********************
 * FSaveFileHeader
 */

FSaveFileHeader::FSaveFileHeader()
	: FileTypeTag(0)
	, SaveGameFileVersion(0)
	, PackageFileUE4Version(0)
	, CustomVersionFormat(static_cast<int32>(ECustomVersionSerializationFormat::Unknown))
{}

FSaveFileHeader::FSaveFileHeader(TSubclassOf<USaveGame> ObjectType, bool bIsCompressed)
	: FileTypeTag(SE_SAVEGAME_FILE_TYPE_TAG)
	, SaveGameFileVersion(FSaveGameFileVersion::LatestVersion)
	, PackageFileUE4Version(GPackageFileUE4Version)
	, SavedEngineVersion(FEngineVersion::Current())
	, CustomVersionFormat(static_cast<int32>(ECustomVersionSerializationFormat::Latest))
	, CustomVersions(FCurrentCustomVersions::GetAll())
	, SaveGameClassName(ObjectType->GetPathName())
	, bIsCompressed(bIsCompressed)
{}

void FSaveFileHeader::Empty()
{
	FileTypeTag = 0;
	SaveGameFileVersion = 0;
	PackageFileUE4Version = 0;
	SavedEngineVersion.Empty();
	CustomVersionFormat = (int32)ECustomVersionSerializationFormat::Unknown;
	CustomVersions.Empty();
	SaveGameClassName.Empty();
	bIsCompressed = false;
}

bool FSaveFileHeader::IsEmpty() const
{
	return (FileTypeTag == 0);
}

void FSaveFileHeader::Read(FMemoryReader& MemoryReader)
{
	Empty();

	MemoryReader << FileTypeTag;

	if (FileTypeTag != SE_SAVEGAME_FILE_TYPE_TAG)
	{
		// this is an old saved game, back up the file pointer to the beginning and assume version 1
		MemoryReader.Seek(0);
		SaveGameFileVersion = FSaveGameFileVersion::InitialVersion;
	}
	else
	{
		// Read version for this file format
		MemoryReader << SaveGameFileVersion;

		// Read engine and UE4 version information
		MemoryReader << PackageFileUE4Version;

		MemoryReader << SavedEngineVersion;

		MemoryReader.SetUE4Ver(PackageFileUE4Version);
		MemoryReader.SetEngineVer(SavedEngineVersion);

		if (SaveGameFileVersion >= FSaveGameFileVersion::AddedCustomVersions)
		{
			MemoryReader << CustomVersionFormat;

			CustomVersions.Serialize(MemoryReader, static_cast<ECustomVersionSerializationFormat::Type>(CustomVersionFormat));
			MemoryReader.SetCustomVersions(CustomVersions);
		}
	}

	// Get the class name
	MemoryReader << SaveGameClassName;

	MemoryReader << bIsCompressed;
}

void FSaveFileHeader::Write(FMemoryWriter& MemoryWriter)
{
	// write file type tag. identifies this file type and indicates it's using proper versioning
	// since older UE4 versions did not version this data.
	MemoryWriter << FileTypeTag;

	// Write version for this file format
	MemoryWriter << SaveGameFileVersion;

	// Write out engine and UE4 version information
	MemoryWriter << PackageFileUE4Version;
	MemoryWriter << SavedEngineVersion;

	// Write out custom version data
	MemoryWriter << CustomVersionFormat;
	CustomVersions.Serialize(MemoryWriter, static_cast<ECustomVersionSerializationFormat::Type>(CustomVersionFormat));

	// Write the class name so we know what class to load to
	MemoryWriter << SaveGameClassName;

	MemoryWriter << bIsCompressed;
}


/*********************
* FSaveFileHeader
*/

bool FFileAdapter::SaveFile(USaveGame* SaveGameObject, const FString& SlotName, const bool bUseCompression)
{
	QUICK_SCOPE_CYCLE_COUNTER(STAT_FileAdapter_SaveFile);

	ISaveGameSystem* SaveSystem = IPlatformFeaturesModule::Get().GetSaveGameSystem();
	// If we have a system and an object to save and a save name...
	if (SaveSystem && SaveGameObject && !SlotName.IsEmpty())
	{
		TArray<uint8> SaveGameBytes{};
		TArray<uint8> CompressedBytes{};
		{
			QUICK_SCOPE_CYCLE_COUNTER(STAT_FileAdapter_SaveFile_Serialize);

			// Serialize SaveGame Object
			FMemoryWriter MemoryWriter(SaveGameBytes, true);
			FObjectAndNameAsStringProxyArchive Ar(MemoryWriter, false);
			SaveGameObject->Serialize(Ar);

			if (bUseCompression)
			{
				// Compress SaveGame Object
				FArchiveSaveCompressedProxy Compressor(CompressedBytes, NAME_Zlib);
				Compressor << SaveGameBytes;
				Compressor.Close();
			}
		}

		// Should use compressed bytes?
		TArray<uint8>& DataBytesPtr = bUseCompression ? CompressedBytes : SaveGameBytes;


		// Write header before data
		TArray<uint8> FileBytes{};
		FMemoryWriter HeaderWriter(FileBytes, true);

		FSaveFileHeader SaveHeader(SaveGameObject->GetClass(), bUseCompression);
		SaveHeader.Write(HeaderWriter);
		HeaderWriter << DataBytesPtr;

		// Store that data into the save system with the desired file name
		return SaveSystem->SaveGame(false, *SlotName, 0, FileBytes);
	}
	return false;
}

USaveGame* FFileAdapter::LoadFile(const FString& SlotName)
{
	QUICK_SCOPE_CYCLE_COUNTER(STAT_FileAdapter_LoadFile);

	// Load splitted into 2 steps for multi-threading purposes
	FSaveFileHeader FileHeader{};
	TArray<uint8> DataBytes{};
	if (LoadFileBytes(SlotName, FileHeader, DataBytes))
	{
		return CreateFromBytes(FileHeader, DataBytes);
	}
	return nullptr;
}

bool FFileAdapter::DeleteFile(const FString& SlotName)
{
	if (ISaveGameSystem* SaveSystem = IPlatformFeaturesModule::Get().GetSaveGameSystem())
	{
		return SaveSystem->DeleteGame(false, *SlotName, 0);
	}
	return false;
}

bool FFileAdapter::DoesFileExist(const FString& SlotName)
{
	if (ISaveGameSystem* SaveSystem = IPlatformFeaturesModule::Get().GetSaveGameSystem())
	{
		return SaveSystem->DoesSaveGameExist(*SlotName, 0);
	}
	return false;
}

bool FFileAdapter::LoadFileBytes(const FString& SlotName, FSaveFileHeader& FileHeader, TArray<uint8>& OutBytes)
{
	QUICK_SCOPE_CYCLE_COUNTER(STAT_FileAdapter_LoadFileBytes);

	ISaveGameSystem* SaveSystem = IPlatformFeaturesModule::Get().GetSaveGameSystem();
	// If we have a save system and a valid name..
	if (SaveSystem && !SlotName.IsEmpty())
	{
		TArray<uint8> ObjectBytes;
		bool bSuccess = SaveSystem->LoadGame(false, *SlotName, 0, ObjectBytes);
		if (bSuccess)
		{
			TArray<uint8> DataBytes {};

			{// Read header
				FMemoryReader MemoryReader(ObjectBytes, true);
				FileHeader.Read(MemoryReader);
				MemoryReader << DataBytes;
			}

			// Uncompress if header indicates so
			if (FileHeader.bIsCompressed)
			{
				FArchiveLoadCompressedProxy Decompressor(DataBytes, NAME_Zlib);
				if (Decompressor.GetError())
					return false;

				Decompressor << OutBytes;
				Decompressor.Close();
			}
			else
			{
				OutBytes = MoveTemp(DataBytes);
			}
			return true;
		}
	}
	return false;
}

USaveGame* FFileAdapter::CreateFromBytes(const FSaveFileHeader& FileHeader, const TArray<uint8>& Bytes)
{
	QUICK_SCOPE_CYCLE_COUNTER(STAT_FileAdapter_CreateFromBytes);

	if (Bytes.Num())
	{
		// Try and find it, and failing that, load it
		UClass* SaveGameClass = FindObject<UClass>(ANY_PACKAGE, *FileHeader.SaveGameClassName);
		if (SaveGameClass == nullptr)
			SaveGameClass = LoadObject<UClass>(nullptr, *FileHeader.SaveGameClassName);

		// If we have a class, try to load it.
		if (SaveGameClass != nullptr)
		{
			USaveGame* SaveGameObj = NewObject<USaveGame>(GetTransientPackage(), SaveGameClass);
			{
				// Serialize data into Object
				QUICK_SCOPE_CYCLE_COUNTER(STAT_FileAdapter_LoadFile_Deserialize);
				FMemoryReader MemoryReader(Bytes, true);
				FObjectAndNameAsStringProxyArchive Ar(MemoryReader, true);
				SaveGameObj->Serialize(Ar);
			}
			return SaveGameObj;
		}
	}
	return nullptr;
}
