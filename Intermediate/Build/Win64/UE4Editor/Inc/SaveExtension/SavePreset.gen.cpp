// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveExtension/Public/SavePreset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSavePreset() {}
// Cross Module References
	SAVEEXTENSION_API UEnum* Z_Construct_UEnum_SaveExtension_ESaveASyncMode();
	UPackage* Z_Construct_UPackage__Script_SaveExtension();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USavePreset_NoRegister();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USavePreset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotData_NoRegister();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotInfo_NoRegister();
// End Cross Module References
	static UEnum* ESaveASyncMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SaveExtension_ESaveASyncMode, Z_Construct_UPackage__Script_SaveExtension(), TEXT("ESaveASyncMode"));
		}
		return Singleton;
	}
	template<> SAVEEXTENSION_API UEnum* StaticEnum<ESaveASyncMode>()
	{
		return ESaveASyncMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESaveASyncMode(ESaveASyncMode_StaticEnum, TEXT("/Script/SaveExtension"), TEXT("ESaveASyncMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SaveExtension_ESaveASyncMode_Hash() { return 913224124U; }
	UEnum* Z_Construct_UEnum_SaveExtension_ESaveASyncMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SaveExtension();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESaveASyncMode"), 0, Get_Z_Construct_UEnum_SaveExtension_ESaveASyncMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESaveASyncMode::OnlySync", (int64)ESaveASyncMode::OnlySync },
				{ "ESaveASyncMode::LoadAsync", (int64)ESaveASyncMode::LoadAsync },
				{ "ESaveASyncMode::SaveAsync", (int64)ESaveASyncMode::SaveAsync },
				{ "ESaveASyncMode::SaveAndLoadAsync", (int64)ESaveASyncMode::SaveAndLoadAsync },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/**\n* Specifies the behavior while saving or loading\n*/" },
				{ "LoadAsync.Name", "ESaveASyncMode::LoadAsync" },
				{ "ModuleRelativePath", "Public/SavePreset.h" },
				{ "OnlySync.Name", "ESaveASyncMode::OnlySync" },
				{ "SaveAndLoadAsync.Name", "ESaveASyncMode::SaveAndLoadAsync" },
				{ "SaveAsync.Name", "ESaveASyncMode::SaveAsync" },
				{ "ToolTip", "Specifies the behavior while saving or loading" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SaveExtension,
				nullptr,
				"ESaveASyncMode",
				"ESaveASyncMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void USavePreset::StaticRegisterNativesUSavePreset()
	{
	}
	UClass* Z_Construct_UClass_USavePreset_NoRegister()
	{
		return USavePreset::StaticClass();
	}
	struct Z_Construct_UClass_USavePreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSaveAndLoadSublevels_MetaData[];
#endif
		static void NewProp_bSaveAndLoadSublevels_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSaveAndLoadSublevels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultithreadedFiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MultithreadedFiles;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MultithreadedFiles_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFrameMs_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxFrameMs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameSplittedSerialization_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FrameSplittedSerialization;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FrameSplittedSerialization_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultithreadedSerialization_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MultithreadedSerialization;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MultithreadedSerialization_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCompression_MetaData[];
#endif
		static void NewProp_bUseCompression_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCompression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStoreControlRotation_MetaData[];
#endif
		static void NewProp_bStoreControlRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStoreControlRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStoreComponents_MetaData[];
#endif
		static void NewProp_bStoreComponents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStoreComponents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStoreAIControllers_MetaData[];
#endif
		static void NewProp_bStoreAIControllers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStoreAIControllers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStoreLevelBlueprints_MetaData[];
#endif
		static void NewProp_bStoreLevelBlueprints_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStoreLevelBlueprints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStoreGameInstance_MetaData[];
#endif
		static void NewProp_bStoreGameInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStoreGameInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStoreGameMode_MetaData[];
#endif
		static void NewProp_bStoreGameMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStoreGameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoredActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IgnoredActors;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_IgnoredActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugInScreen_MetaData[];
#endif
		static void NewProp_bDebugInScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugInScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[];
#endif
		static void NewProp_bDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoLoad_MetaData[];
#endif
		static void NewProp_bAutoLoad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoLoad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSaveOnExit_MetaData[];
#endif
		static void NewProp_bSaveOnExit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSaveOnExit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoSaveInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AutoSaveInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoSave_MetaData[];
#endif
		static void NewProp_bAutoSave_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoSave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSlots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotDataTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SlotDataTemplate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotInfoTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SlotInfoTemplate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USavePreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "SaveExtension" },
		{ "Comment", "/**\n * What to save, how to save it, when, every x minutes, what info file, what data file, save by level streaming?\n */" },
		{ "IncludePath", "SavePreset.h" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "What to save, how to save it, when, every x minutes, what info file, what data file, save by level streaming?" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_bSaveAndLoadSublevels_MetaData[] = {
		{ "Category", "Level Streaming" },
		{ "Comment", "/** If true, will Save and Load levels when they are shown or hidden.\n\x09 * This includes level streaming and world composition.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "If true, will Save and Load levels when they are shown or hidden.\nThis includes level streaming and world composition." },
	};
#endif
	void Z_Construct_UClass_USavePreset_Statics::NewProp_bSaveAndLoadSublevels_SetBit(void* Obj)
	{
		((USavePreset*)Obj)->bSaveAndLoadSublevels = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_bSaveAndLoadSublevels = { "bSaveAndLoadSublevels", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USavePreset), &Z_Construct_UClass_USavePreset_Statics::NewProp_bSaveAndLoadSublevels_SetBit, METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_bSaveAndLoadSublevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_bSaveAndLoadSublevels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_MultithreadedFiles_MetaData[] = {
		{ "Category", "Asynchronous" },
		{ "Comment", "/** Files will be loaded or saved on a secondary thread while game continues */" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "Files will be loaded or saved on a secondary thread while game continues" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_MultithreadedFiles = { "MultithreadedFiles", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USavePreset, MultithreadedFiles), Z_Construct_UEnum_SaveExtension_ESaveASyncMode, METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_MultithreadedFiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_MultithreadedFiles_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_MultithreadedFiles_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_MaxFrameMs_MetaData[] = {
		{ "Category", "Asynchronous" },
		{ "Comment", "/** Max milliseconds to use every frame in an asynchronous operation.\n\x09 * If running at 60Fps (16.6ms), loading or saving asynchronously will add MaxFrameMS:\n\x09 * 16.6ms + 5MS = 21.6ms -> 46Fps\n\x09 * This means gameplay will not be stopped nor have frame drops while saving or loading. Works best for non multi-threaded platforms\n\x09 */" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "Max milliseconds to use every frame in an asynchronous operation.\nIf running at 60Fps (16.6ms), loading or saving asynchronously will add MaxFrameMS:\n16.6ms + 5MS = 21.6ms -> 46Fps\nThis means gameplay will not be stopped nor have frame drops while saving or loading. Works best for non multi-threaded platforms" },
		{ "UIMax", "10" },
		{ "UIMin", "3" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_MaxFrameMs = { "MaxFrameMs", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USavePreset, MaxFrameMs), METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_MaxFrameMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_MaxFrameMs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_FrameSplittedSerialization_MetaData[] = {
		{ "Category", "Asynchronous" },
		{ "Comment", "/** Split serialization between multiple frames. Ignored if MultithreadedSerialization is used\n\x09 * Currently only implemented on Loading\n\x09 */" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "Split serialization between multiple frames. Ignored if MultithreadedSerialization is used\nCurrently only implemented on Loading" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_FrameSplittedSerialization = { "FrameSplittedSerialization", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USavePreset, FrameSplittedSerialization), Z_Construct_UEnum_SaveExtension_ESaveASyncMode, METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_FrameSplittedSerialization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_FrameSplittedSerialization_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_FrameSplittedSerialization_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_MultithreadedSerialization_MetaData[] = {
		{ "Category", "Asynchronous" },
		{ "Comment", "/** Serialization will be multi-threaded between all available cores. */" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "Serialization will be multi-threaded between all available cores." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_MultithreadedSerialization = { "MultithreadedSerialization", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USavePreset, MultithreadedSerialization), Z_Construct_UEnum_SaveExtension_ESaveASyncMode, METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_MultithreadedSerialization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_MultithreadedSerialization_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_MultithreadedSerialization_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_bUseCompression_MetaData[] = {
		{ "Category", "Serialization" },
		{ "Comment", "/** If true save files will be compressed\n\x09 * Performance: Can add from 10ms to 20ms to loading and saving (estimate) but reduce file sizes making them up to 30x smaller\n\x09 */" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "If true save files will be compressed\nPerformance: Can add from 10ms to 20ms to loading and saving (estimate) but reduce file sizes making them up to 30x smaller" },
	};
#endif
	void Z_Construct_UClass_USavePreset_Statics::NewProp_bUseCompression_SetBit(void* Obj)
	{
		((USavePreset*)Obj)->bUseCompression = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_bUseCompression = { "bUseCompression", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USavePreset), &Z_Construct_UClass_USavePreset_Statics::NewProp_bUseCompression_SetBit, METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_bUseCompression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_bUseCompression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreControlRotation_MetaData[] = {
		{ "Category", "Serialization|Controllers" },
		{ "Comment", "/** If true will store player's control rotation */" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "If true will store player's control rotation" },
	};
#endif
	void Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreControlRotation_SetBit(void* Obj)
	{
		((USavePreset*)Obj)->bStoreControlRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreControlRotation = { "bStoreControlRotation", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USavePreset), &Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreControlRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreControlRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreControlRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreComponents_MetaData[] = {
		{ "Category", "Serialization" },
		{ "Comment", "/** If true will store Actor Components\n\x09 * NOTE: StaticMeshComponents and SkeletalMeshComponents are not serialized\n\x09 */" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "If true will store Actor Components\nNOTE: StaticMeshComponents and SkeletalMeshComponents are not serialized" },
	};
#endif
	void Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreComponents_SetBit(void* Obj)
	{
		((USavePreset*)Obj)->bStoreComponents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreComponents = { "bStoreComponents", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USavePreset), &Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreComponents_SetBit, METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreComponents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreAIControllers_MetaData[] = {
		{ "Category", "Serialization" },
		{ "Comment", "/** If true will store AI Controllers */" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "If true will store AI Controllers" },
	};
#endif
	void Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreAIControllers_SetBit(void* Obj)
	{
		((USavePreset*)Obj)->bStoreAIControllers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreAIControllers = { "bStoreAIControllers", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USavePreset), &Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreAIControllers_SetBit, METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreAIControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreAIControllers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreLevelBlueprints_MetaData[] = {
		{ "Category", "Serialization" },
		{ "Comment", "/** If true will store all Level Blueprints */" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "If true will store all Level Blueprints" },
	};
#endif
	void Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreLevelBlueprints_SetBit(void* Obj)
	{
		((USavePreset*)Obj)->bStoreLevelBlueprints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreLevelBlueprints = { "bStoreLevelBlueprints", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USavePreset), &Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreLevelBlueprints_SetBit, METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreLevelBlueprints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreLevelBlueprints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreGameInstance_MetaData[] = {
		{ "Category", "Serialization" },
		{ "Comment", "/** If true will store the game instance */" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "If true will store the game instance" },
	};
#endif
	void Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreGameInstance_SetBit(void* Obj)
	{
		((USavePreset*)Obj)->bStoreGameInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreGameInstance = { "bStoreGameInstance", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USavePreset), &Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreGameInstance_SetBit, METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreGameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreGameInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreGameMode_MetaData[] = {
		{ "Category", "Serialization" },
		{ "Comment", "/** If true will store the current gamemode  */" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "If true will store the current gamemode" },
	};
#endif
	void Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreGameMode_SetBit(void* Obj)
	{
		((USavePreset*)Obj)->bStoreGameMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreGameMode = { "bStoreGameMode", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USavePreset), &Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreGameMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreGameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreGameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_IgnoredActors_MetaData[] = {
		{ "Category", "Serialization" },
		{ "Comment", "/* This Actor classes and their childs will be ignored while saving or loading */" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "This Actor classes and their childs will be ignored while saving or loading" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_IgnoredActors = { "IgnoredActors", nullptr, (EPropertyFlags)0x0014040000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USavePreset, IgnoredActors), METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_IgnoredActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_IgnoredActors_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_IgnoredActors_Inner = { "IgnoredActors", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_bDebugInScreen_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/**\n\x09 * If checked and Debug is enabled, will print messages to Viewport.\n\x09 * Ignored in package or Shipping mode.\n\x09 */" },
		{ "EditCondition", "bDebug" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "If checked and Debug is enabled, will print messages to Viewport.\nIgnored in package or Shipping mode." },
	};
#endif
	void Z_Construct_UClass_USavePreset_Statics::NewProp_bDebugInScreen_SetBit(void* Obj)
	{
		((USavePreset*)Obj)->bDebugInScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_bDebugInScreen = { "bDebugInScreen", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USavePreset), &Z_Construct_UClass_USavePreset_Statics::NewProp_bDebugInScreen_SetBit, METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_bDebugInScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_bDebugInScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_bDebug_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/**\n\x09 * If checked, will print messages to Log, and Viewport if DebugInScreen is enabled.\n\x09 * Ignored in package or Shipping mode.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "If checked, will print messages to Log, and Viewport if DebugInScreen is enabled.\nIgnored in package or Shipping mode." },
	};
#endif
	void Z_Construct_UClass_USavePreset_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((USavePreset*)Obj)->bDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USavePreset), &Z_Construct_UClass_USavePreset_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_bDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_bDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_bAutoLoad_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** If checked, will attempt to Load Game from last Slot found, when game starts */" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "If checked, will attempt to Load Game from last Slot found, when game starts" },
	};
#endif
	void Z_Construct_UClass_USavePreset_Statics::NewProp_bAutoLoad_SetBit(void* Obj)
	{
		((USavePreset*)Obj)->bAutoLoad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_bAutoLoad = { "bAutoLoad", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USavePreset), &Z_Construct_UClass_USavePreset_Statics::NewProp_bAutoLoad_SetBit, METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_bAutoLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_bAutoLoad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_bSaveOnExit_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** If checked, will attempt to Save Game to first Slot found, timed event. */" },
		{ "EditCondition", "bAutoSave" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "If checked, will attempt to Save Game to first Slot found, timed event." },
	};
#endif
	void Z_Construct_UClass_USavePreset_Statics::NewProp_bSaveOnExit_SetBit(void* Obj)
	{
		((USavePreset*)Obj)->bSaveOnExit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_bSaveOnExit = { "bSaveOnExit", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USavePreset), &Z_Construct_UClass_USavePreset_Statics::NewProp_bSaveOnExit_SetBit, METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_bSaveOnExit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_bSaveOnExit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_AutoSaveInterval_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Interval in seconds for auto saving */" },
		{ "EditCondition", "bAutoSave" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "Interval in seconds for auto saving" },
		{ "UIMax", "3600" },
		{ "UIMin", "15" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_AutoSaveInterval = { "AutoSaveInterval", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USavePreset, AutoSaveInterval), METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_AutoSaveInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_AutoSaveInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_bAutoSave_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** If checked, will attempt to Save Game to first Slot found, timed event. */" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "If checked, will attempt to Save Game to first Slot found, timed event." },
	};
#endif
	void Z_Construct_UClass_USavePreset_Statics::NewProp_bAutoSave_SetBit(void* Obj)
	{
		((USavePreset*)Obj)->bAutoSave = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_bAutoSave = { "bAutoSave", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USavePreset), &Z_Construct_UClass_USavePreset_Statics::NewProp_bAutoSave_SetBit, METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_bAutoSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_bAutoSave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_MaxSlots_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum amount of saved slots at the same time */" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "Maximum amount of saved slots at the same time" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_MaxSlots = { "MaxSlots", nullptr, (EPropertyFlags)0x0010000000004015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USavePreset, MaxSlots), METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_MaxSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_MaxSlots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_SlotDataTemplate_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/**\n\x09* Specify the SaveData object to be used with this preset\n\x09*/" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "Specify the SaveData object to be used with this preset" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_SlotDataTemplate = { "SlotDataTemplate", nullptr, (EPropertyFlags)0x0014000000004005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USavePreset, SlotDataTemplate), Z_Construct_UClass_USlotData_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_SlotDataTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_SlotDataTemplate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_SlotInfoTemplate_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/**\n\x09* Specify the SaveInfo object to be used with this preset\n\x09*/" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "Specify the SaveInfo object to be used with this preset" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_SlotInfoTemplate = { "SlotInfoTemplate", nullptr, (EPropertyFlags)0x0014000000004005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USavePreset, SlotInfoTemplate), Z_Construct_UClass_USlotInfo_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_SlotInfoTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_SlotInfoTemplate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USavePreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_bSaveAndLoadSublevels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_MultithreadedFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_MultithreadedFiles_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_MaxFrameMs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_FrameSplittedSerialization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_FrameSplittedSerialization_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_MultithreadedSerialization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_MultithreadedSerialization_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_bUseCompression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreControlRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreAIControllers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreLevelBlueprints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreGameInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreGameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_IgnoredActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_IgnoredActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_bDebugInScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_bDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_bAutoLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_bSaveOnExit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_AutoSaveInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_bAutoSave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_MaxSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_SlotDataTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_SlotInfoTemplate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USavePreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USavePreset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USavePreset_Statics::ClassParams = {
		&USavePreset::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USavePreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USavePreset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USavePreset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USavePreset, 3537303875);
	template<> SAVEEXTENSION_API UClass* StaticClass<USavePreset>()
	{
		return USavePreset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USavePreset(Z_Construct_UClass_USavePreset, &USavePreset::StaticClass, TEXT("/Script/SaveExtension"), TEXT("USavePreset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USavePreset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
