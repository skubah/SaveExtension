// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/Private/Asset/SlotInfoFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlotInfoFactory() {}
// Cross Module References
	SAVEEXTENSIONEDITOR_API UClass* Z_Construct_UClass_USlotInfoFactory_NoRegister();
	SAVEEXTENSIONEDITOR_API UClass* Z_Construct_UClass_USlotInfoFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_SaveExtensionEditor();
// End Cross Module References
	void USlotInfoFactory::StaticRegisterNativesUSlotInfoFactory()
	{
	}
	UClass* Z_Construct_UClass_USlotInfoFactory_NoRegister()
	{
		return USlotInfoFactory::StaticClass();
	}
	struct Z_Construct_UClass_USlotInfoFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlotInfoFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtensionEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotInfoFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Asset/SlotInfoFactory.h" },
		{ "ModuleRelativePath", "Private/Asset/SlotInfoFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlotInfoFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlotInfoFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USlotInfoFactory_Statics::ClassParams = {
		&USlotInfoFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USlotInfoFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlotInfoFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlotInfoFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USlotInfoFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USlotInfoFactory, 1413472914);
	template<> SAVEEXTENSIONEDITOR_API UClass* StaticClass<USlotInfoFactory>()
	{
		return USlotInfoFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlotInfoFactory(Z_Construct_UClass_USlotInfoFactory, &USlotInfoFactory::StaticClass, TEXT("/Script/SaveExtensionEditor"), TEXT("USlotInfoFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlotInfoFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
