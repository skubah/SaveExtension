// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveExtension/Public/SaveExtensionInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveExtensionInterface() {}
// Cross Module References
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USaveExtensionInterface_NoRegister();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USaveExtensionInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_SaveExtension();
	SAVEEXTENSION_API UFunction* Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadBegan();
	SAVEEXTENSION_API UFunction* Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadFinished();
	SAVEEXTENSION_API UFunction* Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveBegan();
	SAVEEXTENSION_API UFunction* Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveFinished();
// End Cross Module References
	void ISaveExtensionInterface::ReceiveOnLoadBegan()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ReceiveOnLoadBegan instead.");
	}
	void ISaveExtensionInterface::ReceiveOnLoadFinished(bool bError)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ReceiveOnLoadFinished instead.");
	}
	void ISaveExtensionInterface::ReceiveOnSaveBegan()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ReceiveOnSaveBegan instead.");
	}
	void ISaveExtensionInterface::ReceiveOnSaveFinished(bool bError)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ReceiveOnSaveFinished instead.");
	}
	void USaveExtensionInterface::StaticRegisterNativesUSaveExtensionInterface()
	{
	}
	struct Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadBegan_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadBegan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "Comment", "// Event called when Load process starts\n" },
		{ "DisplayName", "On Load Began" },
		{ "ModuleRelativePath", "Public/SaveExtensionInterface.h" },
		{ "ToolTip", "Event called when Load process starts" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadBegan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveExtensionInterface, nullptr, "ReceiveOnLoadBegan", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadBegan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadBegan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadBegan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadBegan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadFinished_Statics
	{
		static void NewProp_bError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadFinished_Statics::NewProp_bError_SetBit(void* Obj)
	{
		((SaveExtensionInterface_eventReceiveOnLoadFinished_Parms*)Obj)->bError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadFinished_Statics::NewProp_bError = { "bError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveExtensionInterface_eventReceiveOnLoadFinished_Parms), &Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadFinished_Statics::NewProp_bError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadFinished_Statics::NewProp_bError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "Comment", "// Event called when Load process ends\n" },
		{ "DisplayName", "On Load Finished" },
		{ "ModuleRelativePath", "Public/SaveExtensionInterface.h" },
		{ "ToolTip", "Event called when Load process ends" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveExtensionInterface, nullptr, "ReceiveOnLoadFinished", nullptr, nullptr, sizeof(SaveExtensionInterface_eventReceiveOnLoadFinished_Parms), Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveBegan_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveBegan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "Comment", "/** BP API **/// Event called when Save process starts\n" },
		{ "DisplayName", "On Save Began" },
		{ "ModuleRelativePath", "Public/SaveExtensionInterface.h" },
		{ "ToolTip", "BP API *// Event called when Save process starts" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveBegan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveExtensionInterface, nullptr, "ReceiveOnSaveBegan", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveBegan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveBegan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveBegan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveBegan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveFinished_Statics
	{
		static void NewProp_bError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveFinished_Statics::NewProp_bError_SetBit(void* Obj)
	{
		((SaveExtensionInterface_eventReceiveOnSaveFinished_Parms*)Obj)->bError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveFinished_Statics::NewProp_bError = { "bError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveExtensionInterface_eventReceiveOnSaveFinished_Parms), &Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveFinished_Statics::NewProp_bError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveFinished_Statics::NewProp_bError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "Comment", "// Event called when Save process ends\n" },
		{ "DisplayName", "On Save Finished" },
		{ "ModuleRelativePath", "Public/SaveExtensionInterface.h" },
		{ "ToolTip", "Event called when Save process ends" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveExtensionInterface, nullptr, "ReceiveOnSaveFinished", nullptr, nullptr, sizeof(SaveExtensionInterface_eventReceiveOnSaveFinished_Parms), Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USaveExtensionInterface_NoRegister()
	{
		return USaveExtensionInterface::StaticClass();
	}
	struct Z_Construct_UClass_USaveExtensionInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveExtensionInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveExtensionInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadBegan, "ReceiveOnLoadBegan" }, // 3128946334
		{ &Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadFinished, "ReceiveOnLoadFinished" }, // 1634913951
		{ &Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveBegan, "ReceiveOnSaveBegan" }, // 2282318519
		{ &Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveFinished, "ReceiveOnSaveFinished" }, // 1740440589
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveExtensionInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "SaveExtension" },
		{ "ModuleRelativePath", "Public/SaveExtensionInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveExtensionInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISaveExtensionInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveExtensionInterface_Statics::ClassParams = {
		&USaveExtensionInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_USaveExtensionInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveExtensionInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveExtensionInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveExtensionInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveExtensionInterface, 4141164558);
	template<> SAVEEXTENSION_API UClass* StaticClass<USaveExtensionInterface>()
	{
		return USaveExtensionInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveExtensionInterface(Z_Construct_UClass_USaveExtensionInterface, &USaveExtensionInterface::StaticClass, TEXT("/Script/SaveExtension"), TEXT("USaveExtensionInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveExtensionInterface);
	static FName NAME_USaveExtensionInterface_ReceiveOnLoadBegan = FName(TEXT("ReceiveOnLoadBegan"));
	void ISaveExtensionInterface::Execute_ReceiveOnLoadBegan(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USaveExtensionInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_USaveExtensionInterface_ReceiveOnLoadBegan);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
	static FName NAME_USaveExtensionInterface_ReceiveOnLoadFinished = FName(TEXT("ReceiveOnLoadFinished"));
	void ISaveExtensionInterface::Execute_ReceiveOnLoadFinished(UObject* O, bool bError)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USaveExtensionInterface::StaticClass()));
		SaveExtensionInterface_eventReceiveOnLoadFinished_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USaveExtensionInterface_ReceiveOnLoadFinished);
		if (Func)
		{
			Parms.bError=bError;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_USaveExtensionInterface_ReceiveOnSaveBegan = FName(TEXT("ReceiveOnSaveBegan"));
	void ISaveExtensionInterface::Execute_ReceiveOnSaveBegan(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USaveExtensionInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_USaveExtensionInterface_ReceiveOnSaveBegan);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
	static FName NAME_USaveExtensionInterface_ReceiveOnSaveFinished = FName(TEXT("ReceiveOnSaveFinished"));
	void ISaveExtensionInterface::Execute_ReceiveOnSaveFinished(UObject* O, bool bError)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USaveExtensionInterface::StaticClass()));
		SaveExtensionInterface_eventReceiveOnSaveFinished_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USaveExtensionInterface_ReceiveOnSaveFinished);
		if (Func)
		{
			Parms.bError=bError;
			O->ProcessEvent(Func, &Parms);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
