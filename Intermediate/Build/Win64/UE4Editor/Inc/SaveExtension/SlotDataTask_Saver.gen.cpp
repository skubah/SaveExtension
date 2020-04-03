// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveExtension/Public/SlotDataTask_Saver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlotDataTask_Saver() {}
// Cross Module References
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotDataTask_Saver_NoRegister();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotDataTask_Saver();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotDataTask();
	UPackage* Z_Construct_UPackage__Script_SaveExtension();
// End Cross Module References
	void USlotDataTask_Saver::StaticRegisterNativesUSlotDataTask_Saver()
	{
	}
	UClass* Z_Construct_UClass_USlotDataTask_Saver_NoRegister()
	{
		return USlotDataTask_Saver::StaticClass();
	}
	struct Z_Construct_UClass_USlotDataTask_Saver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlotDataTask_Saver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlotDataTask,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotDataTask_Saver_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Manages the saving process of a SaveData file\n*/" },
		{ "IncludePath", "SlotDataTask_Saver.h" },
		{ "ModuleRelativePath", "Public/SlotDataTask_Saver.h" },
		{ "ToolTip", "Manages the saving process of a SaveData file" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlotDataTask_Saver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlotDataTask_Saver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USlotDataTask_Saver_Statics::ClassParams = {
		&USlotDataTask_Saver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USlotDataTask_Saver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlotDataTask_Saver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlotDataTask_Saver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USlotDataTask_Saver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USlotDataTask_Saver, 3315100398);
	template<> SAVEEXTENSION_API UClass* StaticClass<USlotDataTask_Saver>()
	{
		return USlotDataTask_Saver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlotDataTask_Saver(Z_Construct_UClass_USlotDataTask_Saver, &USlotDataTask_Saver::StaticClass, TEXT("/Script/SaveExtension"), TEXT("USlotDataTask_Saver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlotDataTask_Saver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
