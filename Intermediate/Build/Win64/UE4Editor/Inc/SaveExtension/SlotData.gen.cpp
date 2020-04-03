// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveExtension/Public/SlotData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlotData() {}
// Cross Module References
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FStreamingLevelRecord();
	UPackage* Z_Construct_UPackage__Script_SaveExtension();
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FLevelRecord();
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FPersistentLevelRecord();
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FBaseRecord();
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FControllerRecord();
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FActorRecord();
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FObjectRecord();
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FComponentRecord();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotData_NoRegister();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotData();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
// End Cross Module References
class UScriptStruct* FStreamingLevelRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SAVEEXTENSION_API uint32 Get_Z_Construct_UScriptStruct_FStreamingLevelRecord_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreamingLevelRecord, Z_Construct_UPackage__Script_SaveExtension(), TEXT("StreamingLevelRecord"), sizeof(FStreamingLevelRecord), Get_Z_Construct_UScriptStruct_FStreamingLevelRecord_Hash());
	}
	return Singleton;
}
template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<FStreamingLevelRecord>()
{
	return FStreamingLevelRecord::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStreamingLevelRecord(FStreamingLevelRecord::StaticStruct, TEXT("/Script/SaveExtension"), TEXT("StreamingLevelRecord"), false, nullptr, nullptr);
static struct FScriptStruct_SaveExtension_StaticRegisterNativesFStreamingLevelRecord
{
	FScriptStruct_SaveExtension_StaticRegisterNativesFStreamingLevelRecord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StreamingLevelRecord")),new UScriptStruct::TCppStructOps<FStreamingLevelRecord>);
	}
} ScriptStruct_SaveExtension_StaticRegisterNativesFStreamingLevelRecord;
	struct Z_Construct_UScriptStruct_FStreamingLevelRecord_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamingLevelRecord_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Represents a serialized streaming level in the world */" },
		{ "ModuleRelativePath", "Public/SlotData.h" },
		{ "ToolTip", "Represents a serialized streaming level in the world" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStreamingLevelRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreamingLevelRecord>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreamingLevelRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
		Z_Construct_UScriptStruct_FLevelRecord,
		&NewStructOps,
		"StreamingLevelRecord",
		sizeof(FStreamingLevelRecord),
		alignof(FStreamingLevelRecord),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamingLevelRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingLevelRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStreamingLevelRecord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStreamingLevelRecord_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SaveExtension();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StreamingLevelRecord"), sizeof(FStreamingLevelRecord), Get_Z_Construct_UScriptStruct_FStreamingLevelRecord_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStreamingLevelRecord_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStreamingLevelRecord_Hash() { return 2460691386U; }
class UScriptStruct* FPersistentLevelRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SAVEEXTENSION_API uint32 Get_Z_Construct_UScriptStruct_FPersistentLevelRecord_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPersistentLevelRecord, Z_Construct_UPackage__Script_SaveExtension(), TEXT("PersistentLevelRecord"), sizeof(FPersistentLevelRecord), Get_Z_Construct_UScriptStruct_FPersistentLevelRecord_Hash());
	}
	return Singleton;
}
template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<FPersistentLevelRecord>()
{
	return FPersistentLevelRecord::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPersistentLevelRecord(FPersistentLevelRecord::StaticStruct, TEXT("/Script/SaveExtension"), TEXT("PersistentLevelRecord"), false, nullptr, nullptr);
static struct FScriptStruct_SaveExtension_StaticRegisterNativesFPersistentLevelRecord
{
	FScriptStruct_SaveExtension_StaticRegisterNativesFPersistentLevelRecord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PersistentLevelRecord")),new UScriptStruct::TCppStructOps<FPersistentLevelRecord>);
	}
} ScriptStruct_SaveExtension_StaticRegisterNativesFPersistentLevelRecord;
	struct Z_Construct_UScriptStruct_FPersistentLevelRecord_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPersistentLevelRecord_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Represents a persistent level in the world */" },
		{ "ModuleRelativePath", "Public/SlotData.h" },
		{ "ToolTip", "Represents a persistent level in the world" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPersistentLevelRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPersistentLevelRecord>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPersistentLevelRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
		Z_Construct_UScriptStruct_FLevelRecord,
		&NewStructOps,
		"PersistentLevelRecord",
		sizeof(FPersistentLevelRecord),
		alignof(FPersistentLevelRecord),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPersistentLevelRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersistentLevelRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPersistentLevelRecord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPersistentLevelRecord_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SaveExtension();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PersistentLevelRecord"), sizeof(FPersistentLevelRecord), Get_Z_Construct_UScriptStruct_FPersistentLevelRecord_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPersistentLevelRecord_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPersistentLevelRecord_Hash() { return 1139503620U; }
class UScriptStruct* FLevelRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SAVEEXTENSION_API uint32 Get_Z_Construct_UScriptStruct_FLevelRecord_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelRecord, Z_Construct_UPackage__Script_SaveExtension(), TEXT("LevelRecord"), sizeof(FLevelRecord), Get_Z_Construct_UScriptStruct_FLevelRecord_Hash());
	}
	return Singleton;
}
template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<FLevelRecord>()
{
	return FLevelRecord::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelRecord(FLevelRecord::StaticStruct, TEXT("/Script/SaveExtension"), TEXT("LevelRecord"), false, nullptr, nullptr);
static struct FScriptStruct_SaveExtension_StaticRegisterNativesFLevelRecord
{
	FScriptStruct_SaveExtension_StaticRegisterNativesFLevelRecord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelRecord")),new UScriptStruct::TCppStructOps<FLevelRecord>);
	}
} ScriptStruct_SaveExtension_StaticRegisterNativesFLevelRecord;
	struct Z_Construct_UScriptStruct_FLevelRecord_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelRecord_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Represents a level in the world (streaming or persistent) */" },
		{ "ModuleRelativePath", "Public/SlotData.h" },
		{ "ToolTip", "Represents a level in the world (streaming or persistent)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelRecord>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
		Z_Construct_UScriptStruct_FBaseRecord,
		&NewStructOps,
		"LevelRecord",
		sizeof(FLevelRecord),
		alignof(FLevelRecord),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelRecord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelRecord_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SaveExtension();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelRecord"), sizeof(FLevelRecord), Get_Z_Construct_UScriptStruct_FLevelRecord_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelRecord_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelRecord_Hash() { return 3387629034U; }
class UScriptStruct* FControllerRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SAVEEXTENSION_API uint32 Get_Z_Construct_UScriptStruct_FControllerRecord_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FControllerRecord, Z_Construct_UPackage__Script_SaveExtension(), TEXT("ControllerRecord"), sizeof(FControllerRecord), Get_Z_Construct_UScriptStruct_FControllerRecord_Hash());
	}
	return Singleton;
}
template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<FControllerRecord>()
{
	return FControllerRecord::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FControllerRecord(FControllerRecord::StaticStruct, TEXT("/Script/SaveExtension"), TEXT("ControllerRecord"), false, nullptr, nullptr);
static struct FScriptStruct_SaveExtension_StaticRegisterNativesFControllerRecord
{
	FScriptStruct_SaveExtension_StaticRegisterNativesFControllerRecord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ControllerRecord")),new UScriptStruct::TCppStructOps<FControllerRecord>);
	}
} ScriptStruct_SaveExtension_StaticRegisterNativesFControllerRecord;
	struct Z_Construct_UScriptStruct_FControllerRecord_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControllerRecord_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Represents a serialized Controller */" },
		{ "ModuleRelativePath", "Public/SlotData.h" },
		{ "ToolTip", "Represents a serialized Controller" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControllerRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControllerRecord>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControllerRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
		Z_Construct_UScriptStruct_FActorRecord,
		&NewStructOps,
		"ControllerRecord",
		sizeof(FControllerRecord),
		alignof(FControllerRecord),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FControllerRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControllerRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FControllerRecord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FControllerRecord_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SaveExtension();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ControllerRecord"), sizeof(FControllerRecord), Get_Z_Construct_UScriptStruct_FControllerRecord_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FControllerRecord_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FControllerRecord_Hash() { return 2706253286U; }
class UScriptStruct* FActorRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SAVEEXTENSION_API uint32 Get_Z_Construct_UScriptStruct_FActorRecord_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorRecord, Z_Construct_UPackage__Script_SaveExtension(), TEXT("ActorRecord"), sizeof(FActorRecord), Get_Z_Construct_UScriptStruct_FActorRecord_Hash());
	}
	return Singleton;
}
template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<FActorRecord>()
{
	return FActorRecord::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorRecord(FActorRecord::StaticStruct, TEXT("/Script/SaveExtension"), TEXT("ActorRecord"), false, nullptr, nullptr);
static struct FScriptStruct_SaveExtension_StaticRegisterNativesFActorRecord
{
	FScriptStruct_SaveExtension_StaticRegisterNativesFActorRecord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActorRecord")),new UScriptStruct::TCppStructOps<FActorRecord>);
	}
} ScriptStruct_SaveExtension_StaticRegisterNativesFActorRecord;
	struct Z_Construct_UScriptStruct_FActorRecord_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorRecord_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Represents a serialized Actor */" },
		{ "ModuleRelativePath", "Public/SlotData.h" },
		{ "ToolTip", "Represents a serialized Actor" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorRecord>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
		Z_Construct_UScriptStruct_FObjectRecord,
		&NewStructOps,
		"ActorRecord",
		sizeof(FActorRecord),
		alignof(FActorRecord),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorRecord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActorRecord_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SaveExtension();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorRecord"), sizeof(FActorRecord), Get_Z_Construct_UScriptStruct_FActorRecord_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActorRecord_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorRecord_Hash() { return 3654932381U; }
class UScriptStruct* FComponentRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SAVEEXTENSION_API uint32 Get_Z_Construct_UScriptStruct_FComponentRecord_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponentRecord, Z_Construct_UPackage__Script_SaveExtension(), TEXT("ComponentRecord"), sizeof(FComponentRecord), Get_Z_Construct_UScriptStruct_FComponentRecord_Hash());
	}
	return Singleton;
}
template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<FComponentRecord>()
{
	return FComponentRecord::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FComponentRecord(FComponentRecord::StaticStruct, TEXT("/Script/SaveExtension"), TEXT("ComponentRecord"), false, nullptr, nullptr);
static struct FScriptStruct_SaveExtension_StaticRegisterNativesFComponentRecord
{
	FScriptStruct_SaveExtension_StaticRegisterNativesFComponentRecord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ComponentRecord")),new UScriptStruct::TCppStructOps<FComponentRecord>);
	}
} ScriptStruct_SaveExtension_StaticRegisterNativesFComponentRecord;
	struct Z_Construct_UScriptStruct_FComponentRecord_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentRecord_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Represents a serialized Component */" },
		{ "ModuleRelativePath", "Public/SlotData.h" },
		{ "ToolTip", "Represents a serialized Component" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComponentRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponentRecord>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComponentRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
		Z_Construct_UScriptStruct_FObjectRecord,
		&NewStructOps,
		"ComponentRecord",
		sizeof(FComponentRecord),
		alignof(FComponentRecord),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComponentRecord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FComponentRecord_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SaveExtension();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ComponentRecord"), sizeof(FComponentRecord), Get_Z_Construct_UScriptStruct_FComponentRecord_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FComponentRecord_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FComponentRecord_Hash() { return 2286976692U; }
class UScriptStruct* FObjectRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SAVEEXTENSION_API uint32 Get_Z_Construct_UScriptStruct_FObjectRecord_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectRecord, Z_Construct_UPackage__Script_SaveExtension(), TEXT("ObjectRecord"), sizeof(FObjectRecord), Get_Z_Construct_UScriptStruct_FObjectRecord_Hash());
	}
	return Singleton;
}
template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<FObjectRecord>()
{
	return FObjectRecord::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FObjectRecord(FObjectRecord::StaticStruct, TEXT("/Script/SaveExtension"), TEXT("ObjectRecord"), false, nullptr, nullptr);
static struct FScriptStruct_SaveExtension_StaticRegisterNativesFObjectRecord
{
	FScriptStruct_SaveExtension_StaticRegisterNativesFObjectRecord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ObjectRecord")),new UScriptStruct::TCppStructOps<FObjectRecord>);
	}
} ScriptStruct_SaveExtension_StaticRegisterNativesFObjectRecord;
	struct Z_Construct_UScriptStruct_FObjectRecord_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectRecord_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Represents a serialized Object */" },
		{ "ModuleRelativePath", "Public/SlotData.h" },
		{ "ToolTip", "Represents a serialized Object" },
	};
#endif
	void* Z_Construct_UScriptStruct_FObjectRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectRecord>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Class_MetaData[] = {
		{ "ModuleRelativePath", "Public/SlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectRecord, Class), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Class_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjectRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Class,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
		Z_Construct_UScriptStruct_FBaseRecord,
		&NewStructOps,
		"ObjectRecord",
		sizeof(FObjectRecord),
		alignof(FObjectRecord),
		Z_Construct_UScriptStruct_FObjectRecord_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectRecord_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FObjectRecord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FObjectRecord_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SaveExtension();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ObjectRecord"), sizeof(FObjectRecord), Get_Z_Construct_UScriptStruct_FObjectRecord_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FObjectRecord_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FObjectRecord_Hash() { return 3960412396U; }
class UScriptStruct* FBaseRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SAVEEXTENSION_API uint32 Get_Z_Construct_UScriptStruct_FBaseRecord_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBaseRecord, Z_Construct_UPackage__Script_SaveExtension(), TEXT("BaseRecord"), sizeof(FBaseRecord), Get_Z_Construct_UScriptStruct_FBaseRecord_Hash());
	}
	return Singleton;
}
template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<FBaseRecord>()
{
	return FBaseRecord::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBaseRecord(FBaseRecord::StaticStruct, TEXT("/Script/SaveExtension"), TEXT("BaseRecord"), false, nullptr, nullptr);
static struct FScriptStruct_SaveExtension_StaticRegisterNativesFBaseRecord
{
	FScriptStruct_SaveExtension_StaticRegisterNativesFBaseRecord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BaseRecord")),new UScriptStruct::TCppStructOps<FBaseRecord>);
	}
} ScriptStruct_SaveExtension_StaticRegisterNativesFBaseRecord;
	struct Z_Construct_UScriptStruct_FBaseRecord_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseRecord_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SlotData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBaseRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBaseRecord>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBaseRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
		nullptr,
		&NewStructOps,
		"BaseRecord",
		sizeof(FBaseRecord),
		alignof(FBaseRecord),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBaseRecord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBaseRecord_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SaveExtension();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BaseRecord"), sizeof(FBaseRecord), Get_Z_Construct_UScriptStruct_FBaseRecord_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBaseRecord_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBaseRecord_Hash() { return 2452554449U; }
	void USlotData::StaticRegisterNativesUSlotData()
	{
	}
	UClass* Z_Construct_UClass_USlotData_NoRegister()
	{
		return USlotData::StaticClass();
	}
	struct Z_Construct_UClass_USlotData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Map;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlotData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotData_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "SaveExtension" },
		{ "Comment", "/**\n * USaveData stores all information that can be accessible only while the game is loaded.\n * Works like a common SaveGame object\n * E.g: Items, Quests, Enemies, World Actors, AI, Physics\n */" },
		{ "HideCategories", "Activation Actor Tick Actor Input Rendering Replication Socket Thumbnail" },
		{ "IncludePath", "SlotData.h" },
		{ "ModuleRelativePath", "Public/SlotData.h" },
		{ "ToolTip", "USaveData stores all information that can be accessible only while the game is loaded.\nWorks like a common SaveGame object\nE.g: Items, Quests, Enemies, World Actors, AI, Physics" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotData_Statics::NewProp_TimeSeconds_MetaData[] = {
		{ "Category", "SaveData" },
		{ "Comment", "/** Game world time since game started in seconds */" },
		{ "ModuleRelativePath", "Public/SlotData.h" },
		{ "ToolTip", "Game world time since game started in seconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USlotData_Statics::NewProp_TimeSeconds = { "TimeSeconds", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlotData, TimeSeconds), METADATA_PARAMS(Z_Construct_UClass_USlotData_Statics::NewProp_TimeSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlotData_Statics::NewProp_TimeSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotData_Statics::NewProp_Map_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SaveData" },
		{ "Comment", "/** Full Name of the Map where this SlotData was saved */" },
		{ "ModuleRelativePath", "Public/SlotData.h" },
		{ "ToolTip", "Full Name of the Map where this SlotData was saved" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USlotData_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlotData, Map), METADATA_PARAMS(Z_Construct_UClass_USlotData_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlotData_Statics::NewProp_Map_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlotData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotData_Statics::NewProp_TimeSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotData_Statics::NewProp_Map,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlotData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlotData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USlotData_Statics::ClassParams = {
		&USlotData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USlotData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USlotData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USlotData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlotData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlotData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USlotData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USlotData, 2459096375);
	template<> SAVEEXTENSION_API UClass* StaticClass<USlotData>()
	{
		return USlotData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlotData(Z_Construct_UClass_USlotData, &USlotData::StaticClass, TEXT("/Script/SaveExtension"), TEXT("USlotData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlotData);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USlotData)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
