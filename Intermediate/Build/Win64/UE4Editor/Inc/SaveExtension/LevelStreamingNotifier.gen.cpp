// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveExtension/Public/LevelStreamingNotifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelStreamingNotifier() {}
// Cross Module References
	SAVEEXTENSION_API UClass* Z_Construct_UClass_ULevelStreamingNotifier_NoRegister();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_ULevelStreamingNotifier();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SaveExtension();
	SAVEEXTENSION_API UFunction* Z_Construct_UFunction_ULevelStreamingNotifier_OnHidden();
	SAVEEXTENSION_API UFunction* Z_Construct_UFunction_ULevelStreamingNotifier_OnLoaded();
	SAVEEXTENSION_API UFunction* Z_Construct_UFunction_ULevelStreamingNotifier_OnShown();
	SAVEEXTENSION_API UFunction* Z_Construct_UFunction_ULevelStreamingNotifier_OnUnloaded();
// End Cross Module References
	void ULevelStreamingNotifier::StaticRegisterNativesULevelStreamingNotifier()
	{
		UClass* Class = ULevelStreamingNotifier::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHidden", &ULevelStreamingNotifier::execOnHidden },
			{ "OnLoaded", &ULevelStreamingNotifier::execOnLoaded },
			{ "OnShown", &ULevelStreamingNotifier::execOnShown },
			{ "OnUnloaded", &ULevelStreamingNotifier::execOnUnloaded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelStreamingNotifier_OnHidden_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreamingNotifier_OnHidden_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelStreamingNotifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreamingNotifier_OnHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreamingNotifier, nullptr, "OnHidden", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreamingNotifier_OnHidden_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreamingNotifier_OnHidden_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreamingNotifier_OnHidden()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelStreamingNotifier_OnHidden_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelStreamingNotifier_OnLoaded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreamingNotifier_OnLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelStreamingNotifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreamingNotifier_OnLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreamingNotifier, nullptr, "OnLoaded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreamingNotifier_OnLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreamingNotifier_OnLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreamingNotifier_OnLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelStreamingNotifier_OnLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelStreamingNotifier_OnShown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreamingNotifier_OnShown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelStreamingNotifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreamingNotifier_OnShown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreamingNotifier, nullptr, "OnShown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreamingNotifier_OnShown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreamingNotifier_OnShown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreamingNotifier_OnShown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelStreamingNotifier_OnShown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelStreamingNotifier_OnUnloaded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreamingNotifier_OnUnloaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelStreamingNotifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreamingNotifier_OnUnloaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreamingNotifier, nullptr, "OnUnloaded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreamingNotifier_OnUnloaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreamingNotifier_OnUnloaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreamingNotifier_OnUnloaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelStreamingNotifier_OnUnloaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULevelStreamingNotifier_NoRegister()
	{
		return ULevelStreamingNotifier::StaticClass();
	}
	struct Z_Construct_UClass_ULevelStreamingNotifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelStreamingNotifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelStreamingNotifier_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelStreamingNotifier_OnHidden, "OnHidden" }, // 3096627000
		{ &Z_Construct_UFunction_ULevelStreamingNotifier_OnLoaded, "OnLoaded" }, // 2271502920
		{ &Z_Construct_UFunction_ULevelStreamingNotifier_OnShown, "OnShown" }, // 1205375250
		{ &Z_Construct_UFunction_ULevelStreamingNotifier_OnUnloaded, "OnUnloaded" }, // 4181265541
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreamingNotifier_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "SaveExtension" },
		{ "Comment", "/** ULevelStreamingNotifier is an adapter that expands UE4's native\n * level streaming delegates adding a ptr to the level to each delegate\n */" },
		{ "IncludePath", "LevelStreamingNotifier.h" },
		{ "ModuleRelativePath", "Public/LevelStreamingNotifier.h" },
		{ "ToolTip", "ULevelStreamingNotifier is an adapter that expands UE4's native\nlevel streaming delegates adding a ptr to the level to each delegate" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelStreamingNotifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelStreamingNotifier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelStreamingNotifier_Statics::ClassParams = {
		&ULevelStreamingNotifier::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelStreamingNotifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingNotifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelStreamingNotifier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelStreamingNotifier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelStreamingNotifier, 4261137973);
	template<> SAVEEXTENSION_API UClass* StaticClass<ULevelStreamingNotifier>()
	{
		return ULevelStreamingNotifier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelStreamingNotifier(Z_Construct_UClass_ULevelStreamingNotifier, &ULevelStreamingNotifier::StaticClass, TEXT("/Script/SaveExtension"), TEXT("ULevelStreamingNotifier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelStreamingNotifier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
