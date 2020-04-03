// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAVEEXTENSION_LevelStreamingNotifier_generated_h
#error "LevelStreamingNotifier.generated.h already included, missing '#pragma once' in LevelStreamingNotifier.h"
#endif
#define SAVEEXTENSION_LevelStreamingNotifier_generated_h

#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_LevelStreamingNotifier_h_22_SPARSE_DATA
#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_LevelStreamingNotifier_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHidden) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHidden(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnShown) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnShown(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnUnloaded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnUnloaded(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLoaded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLoaded(); \
		P_NATIVE_END; \
	}


#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_LevelStreamingNotifier_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHidden) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHidden(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnShown) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnShown(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnUnloaded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnUnloaded(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLoaded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLoaded(); \
		P_NATIVE_END; \
	}


#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_LevelStreamingNotifier_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelStreamingNotifier(); \
	friend struct Z_Construct_UClass_ULevelStreamingNotifier_Statics; \
public: \
	DECLARE_CLASS(ULevelStreamingNotifier, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SaveExtension"), NO_API) \
	DECLARE_SERIALIZER(ULevelStreamingNotifier)


#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_LevelStreamingNotifier_h_22_INCLASS \
private: \
	static void StaticRegisterNativesULevelStreamingNotifier(); \
	friend struct Z_Construct_UClass_ULevelStreamingNotifier_Statics; \
public: \
	DECLARE_CLASS(ULevelStreamingNotifier, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SaveExtension"), NO_API) \
	DECLARE_SERIALIZER(ULevelStreamingNotifier)


#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_LevelStreamingNotifier_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelStreamingNotifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelStreamingNotifier) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelStreamingNotifier); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelStreamingNotifier); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelStreamingNotifier(ULevelStreamingNotifier&&); \
	NO_API ULevelStreamingNotifier(const ULevelStreamingNotifier&); \
public:


#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_LevelStreamingNotifier_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelStreamingNotifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelStreamingNotifier(ULevelStreamingNotifier&&); \
	NO_API ULevelStreamingNotifier(const ULevelStreamingNotifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelStreamingNotifier); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelStreamingNotifier); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelStreamingNotifier)


#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_LevelStreamingNotifier_h_22_PRIVATE_PROPERTY_OFFSET
#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_LevelStreamingNotifier_h_19_PROLOG
#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_LevelStreamingNotifier_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_LevelStreamingNotifier_h_22_PRIVATE_PROPERTY_OFFSET \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_LevelStreamingNotifier_h_22_SPARSE_DATA \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_LevelStreamingNotifier_h_22_RPC_WRAPPERS \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_LevelStreamingNotifier_h_22_INCLASS \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_LevelStreamingNotifier_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_LevelStreamingNotifier_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_LevelStreamingNotifier_h_22_PRIVATE_PROPERTY_OFFSET \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_LevelStreamingNotifier_h_22_SPARSE_DATA \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_LevelStreamingNotifier_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_LevelStreamingNotifier_h_22_INCLASS_NO_PURE_DECLS \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_LevelStreamingNotifier_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAVEEXTENSION_API UClass* StaticClass<class ULevelStreamingNotifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_LevelStreamingNotifier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
