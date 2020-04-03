// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAVEEXTENSION_SlotData_generated_h
#error "SlotData.generated.h already included, missing '#pragma once' in SlotData.h"
#endif
#define SAVEEXTENSION_SlotData_generated_h

#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SlotData_h_161_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStreamingLevelRecord_Statics; \
	SAVEEXTENSION_API static class UScriptStruct* StaticStruct(); \
	typedef FLevelRecord Super;


template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<struct FStreamingLevelRecord>();

#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SlotData_h_148_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPersistentLevelRecord_Statics; \
	SAVEEXTENSION_API static class UScriptStruct* StaticStruct(); \
	typedef FLevelRecord Super;


template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<struct FPersistentLevelRecord>();

#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SlotData_h_121_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelRecord_Statics; \
	SAVEEXTENSION_API static class UScriptStruct* StaticStruct(); \
	typedef FBaseRecord Super;


template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<struct FLevelRecord>();

#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SlotData_h_106_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FControllerRecord_Statics; \
	SAVEEXTENSION_API static class UScriptStruct* StaticStruct(); \
	typedef FActorRecord Super;


template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<struct FControllerRecord>();

#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SlotData_h_84_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorRecord_Statics; \
	SAVEEXTENSION_API static class UScriptStruct* StaticStruct(); \
	typedef FObjectRecord Super;


template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<struct FActorRecord>();

#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SlotData_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComponentRecord_Statics; \
	SAVEEXTENSION_API static class UScriptStruct* StaticStruct(); \
	typedef FObjectRecord Super;


template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<struct FComponentRecord>();

#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SlotData_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FObjectRecord_Statics; \
	SAVEEXTENSION_API static class UScriptStruct* StaticStruct(); \
	typedef FBaseRecord Super;


template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<struct FObjectRecord>();

#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SlotData_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBaseRecord_Statics; \
	SAVEEXTENSION_API static class UScriptStruct* StaticStruct();


template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<struct FBaseRecord>();

#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SlotData_h_200_SPARSE_DATA
#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SlotData_h_200_RPC_WRAPPERS
#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SlotData_h_200_RPC_WRAPPERS_NO_PURE_DECLS
#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SlotData_h_200_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USlotData, NO_API)


#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SlotData_h_200_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSlotData(); \
	friend struct Z_Construct_UClass_USlotData_Statics; \
public: \
	DECLARE_CLASS(USlotData, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SaveExtension"), NO_API) \
	DECLARE_SERIALIZER(USlotData) \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SlotData_h_200_ARCHIVESERIALIZER


#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SlotData_h_200_INCLASS \
private: \
	static void StaticRegisterNativesUSlotData(); \
	friend struct Z_Construct_UClass_USlotData_Statics; \
public: \
	DECLARE_CLASS(USlotData, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SaveExtension"), NO_API) \
	DECLARE_SERIALIZER(USlotData) \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SlotData_h_200_ARCHIVESERIALIZER


#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SlotData_h_200_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USlotData(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlotData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlotData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlotData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USlotData(USlotData&&); \
	NO_API USlotData(const USlotData&); \
public:


#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SlotData_h_200_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USlotData(USlotData&&); \
	NO_API USlotData(const USlotData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlotData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlotData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USlotData)


#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SlotData_h_200_PRIVATE_PROPERTY_OFFSET
#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SlotData_h_197_PROLOG
#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SlotData_h_200_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SlotData_h_200_PRIVATE_PROPERTY_OFFSET \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SlotData_h_200_SPARSE_DATA \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SlotData_h_200_RPC_WRAPPERS \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SlotData_h_200_INCLASS \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SlotData_h_200_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SlotData_h_200_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SlotData_h_200_PRIVATE_PROPERTY_OFFSET \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SlotData_h_200_SPARSE_DATA \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SlotData_h_200_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SlotData_h_200_INCLASS_NO_PURE_DECLS \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SlotData_h_200_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAVEEXTENSION_API UClass* StaticClass<class USlotData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SlotData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
