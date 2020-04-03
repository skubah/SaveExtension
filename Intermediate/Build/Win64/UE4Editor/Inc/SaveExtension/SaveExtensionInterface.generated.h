// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAVEEXTENSION_SaveExtensionInterface_generated_h
#error "SaveExtensionInterface.generated.h already included, missing '#pragma once' in SaveExtensionInterface.h"
#endif
#define SAVEEXTENSION_SaveExtensionInterface_generated_h

#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_10_SPARSE_DATA
#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_10_RPC_WRAPPERS
#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_10_EVENT_PARMS \
	struct SaveExtensionInterface_eventReceiveOnLoadFinished_Parms \
	{ \
		bool bError; \
	}; \
	struct SaveExtensionInterface_eventReceiveOnSaveFinished_Parms \
	{ \
		bool bError; \
	};


#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_10_CALLBACK_WRAPPERS
#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveExtensionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveExtensionInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveExtensionInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveExtensionInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveExtensionInterface(USaveExtensionInterface&&); \
	NO_API USaveExtensionInterface(const USaveExtensionInterface&); \
public:


#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveExtensionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveExtensionInterface(USaveExtensionInterface&&); \
	NO_API USaveExtensionInterface(const USaveExtensionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveExtensionInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveExtensionInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveExtensionInterface)


#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSaveExtensionInterface(); \
	friend struct Z_Construct_UClass_USaveExtensionInterface_Statics; \
public: \
	DECLARE_CLASS(USaveExtensionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SaveExtension"), NO_API) \
	DECLARE_SERIALIZER(USaveExtensionInterface)


#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_10_GENERATED_UINTERFACE_BODY() \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_10_GENERATED_UINTERFACE_BODY() \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISaveExtensionInterface() {} \
public: \
	typedef USaveExtensionInterface UClassType; \
	typedef ISaveExtensionInterface ThisClass; \
	static void Execute_ReceiveOnLoadBegan(UObject* O); \
	static void Execute_ReceiveOnLoadFinished(UObject* O, bool bError); \
	static void Execute_ReceiveOnSaveBegan(UObject* O); \
	static void Execute_ReceiveOnSaveFinished(UObject* O, bool bError); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~ISaveExtensionInterface() {} \
public: \
	typedef USaveExtensionInterface UClassType; \
	typedef ISaveExtensionInterface ThisClass; \
	static void Execute_ReceiveOnLoadBegan(UObject* O); \
	static void Execute_ReceiveOnLoadFinished(UObject* O, bool bError); \
	static void Execute_ReceiveOnSaveBegan(UObject* O); \
	static void Execute_ReceiveOnSaveFinished(UObject* O, bool bError); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_8_PROLOG \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_10_EVENT_PARMS


#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_10_SPARSE_DATA \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_10_RPC_WRAPPERS \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_10_CALLBACK_WRAPPERS \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_10_SPARSE_DATA \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_10_CALLBACK_WRAPPERS \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAVEEXTENSION_API UClass* StaticClass<class USaveExtensionInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
