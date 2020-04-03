// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USlotInfo;
class UObject;
class USaveManager;
class ISaveExtensionInterface;
class ULevelStreaming;
class USavePreset;
class USlotData;
enum class EDeleteSlotsResult : uint8;
struct FLatentActionInfo;
enum class ELoadInfoResult : uint8;
enum class ELoadGameResult : uint8;
struct FScreenshotSize;
enum class ESaveGameResult : uint8;
#ifdef SAVEEXTENSION_SaveManager_generated_h
#error "SaveManager.generated.h already included, missing '#pragma once' in SaveManager.h"
#endif
#define SAVEEXTENSION_SaveManager_generated_h

#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScreenshotSize_Statics; \
	SAVEEXTENSION_API static class UScriptStruct* StaticStruct();


template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<struct FScreenshotSize>();

#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_38_DELEGATE \
struct _Script_SaveExtension_eventOnGameLoadedMC_Parms \
{ \
	USlotInfo* SlotInfo; \
}; \
static inline void FOnGameLoadedMC_DelegateWrapper(const FMulticastScriptDelegate& OnGameLoadedMC, USlotInfo* SlotInfo) \
{ \
	_Script_SaveExtension_eventOnGameLoadedMC_Parms Parms; \
	Parms.SlotInfo=SlotInfo; \
	OnGameLoadedMC.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_37_DELEGATE \
struct _Script_SaveExtension_eventOnGameSavedMC_Parms \
{ \
	USlotInfo* SlotInfo; \
}; \
static inline void FOnGameSavedMC_DelegateWrapper(const FMulticastScriptDelegate& OnGameSavedMC, USlotInfo* SlotInfo) \
{ \
	_Script_SaveExtension_eventOnGameSavedMC_Parms Parms; \
	Parms.SlotInfo=SlotInfo; \
	OnGameSavedMC.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_63_SPARSE_DATA
#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_63_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSaveManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USaveManager**)Z_Param__Result=USaveManager::GetSaveManager(Z_Param_ContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnsubscribeFromEvents) \
	{ \
		P_GET_TINTERFACE_REF(ISaveExtensionInterface,Z_Param_Out_Interface); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnsubscribeFromEvents(Z_Param_Out_Interface); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubscribeForEvents) \
	{ \
		P_GET_TINTERFACE_REF(ISaveExtensionInterface,Z_Param_Out_Interface); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SubscribeForEvents(Z_Param_Out_Interface); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSavingOrLoading) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSavingOrLoading(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeserializeStreamingLevel) \
	{ \
		P_GET_OBJECT(ULevelStreaming,Z_Param_LevelStreaming); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeserializeStreamingLevel(Z_Param_LevelStreaming); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSerializeStreamingLevel) \
	{ \
		P_GET_OBJECT(ULevelStreaming,Z_Param_LevelStreaming); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SerializeStreamingLevel(Z_Param_LevelStreaming); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActivePreset) \
	{ \
		P_GET_SOFTOBJECT(TSoftObjectPtr<USavePreset>,Z_Param_ActivePreset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetActivePreset(Z_Param_ActivePreset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInSlot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsInSlot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSlotSaved) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Slot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSlotSaved(Z_Param_Slot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSlotInfo) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SlotId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USlotInfo**)Z_Param__Result=P_THIS->GetSlotInfo(Z_Param_SlotId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USlotData**)Z_Param__Result=P_THIS->GetCurrentData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USlotInfo**)Z_Param__Result=P_THIS->GetCurrentInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteSlot) \
	{ \
		P_GET_OBJECT(USlotInfo,Z_Param_Slot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DeleteSlot(Z_Param_Slot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBPDeleteAllSlots) \
	{ \
		P_GET_ENUM_REF(EDeleteSlotsResult,Z_Param_Out_Result); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BPDeleteAllSlots((EDeleteSlotsResult&)(Z_Param_Out_Result),Z_Param_LatentInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteSlotFromId) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SlotId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DeleteSlotFromId(Z_Param_SlotId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBPLoadAllSlotInfos) \
	{ \
		P_GET_UBOOL(Z_Param_bSortByRecent); \
		P_GET_TARRAY_REF(USlotInfo*,Z_Param_Out_SaveInfos); \
		P_GET_ENUM_REF(ELoadInfoResult,Z_Param_Out_Result); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BPLoadAllSlotInfos(Z_Param_bSortByRecent,Z_Param_Out_SaveInfos,(ELoadInfoResult&)(Z_Param_Out_Result),Z_Param_LatentInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBPReloadCurrentSlot) \
	{ \
		P_GET_ENUM_REF(ELoadGameResult,Z_Param_Out_Result); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BPReloadCurrentSlot((ELoadGameResult&)(Z_Param_Out_Result),Z_Param_LatentInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBPLoadSlot) \
	{ \
		P_GET_OBJECT(USlotInfo,Z_Param_SlotInfo); \
		P_GET_ENUM_REF(ELoadGameResult,Z_Param_Out_Result); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BPLoadSlot(Z_Param_SlotInfo,(ELoadGameResult&)(Z_Param_Out_Result),Z_Param_LatentInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBPLoadSlotFromId) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SlotId); \
		P_GET_ENUM_REF(ELoadGameResult,Z_Param_Out_Result); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BPLoadSlotFromId(Z_Param_SlotId,(ELoadGameResult&)(Z_Param_Out_Result),Z_Param_LatentInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBPSaveCurrentSlot) \
	{ \
		P_GET_UBOOL(Z_Param_bScreenshot); \
		P_GET_STRUCT(FScreenshotSize,Z_Param_Size); \
		P_GET_ENUM_REF(ESaveGameResult,Z_Param_Out_Result); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BPSaveCurrentSlot(Z_Param_bScreenshot,Z_Param_Size,(ESaveGameResult&)(Z_Param_Out_Result),Z_Param_LatentInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBPSaveSlot) \
	{ \
		P_GET_OBJECT(USlotInfo,Z_Param_SlotInfo); \
		P_GET_UBOOL(Z_Param_bScreenshot); \
		P_GET_STRUCT(FScreenshotSize,Z_Param_Size); \
		P_GET_ENUM_REF(ESaveGameResult,Z_Param_Out_Result); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_GET_UBOOL(Z_Param_bOverrideIfNeeded); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BPSaveSlot(Z_Param_SlotInfo,Z_Param_bScreenshot,Z_Param_Size,(ESaveGameResult&)(Z_Param_Out_Result),Z_Param_LatentInfo,Z_Param_bOverrideIfNeeded); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBPSaveSlotToId) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SlotId); \
		P_GET_UBOOL(Z_Param_bScreenshot); \
		P_GET_STRUCT(FScreenshotSize,Z_Param_Size); \
		P_GET_ENUM_REF(ESaveGameResult,Z_Param_Out_Result); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_GET_UBOOL(Z_Param_bOverrideIfNeeded); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BPSaveSlotToId(Z_Param_SlotId,Z_Param_bScreenshot,Z_Param_Size,(ESaveGameResult&)(Z_Param_Out_Result),Z_Param_LatentInfo,Z_Param_bOverrideIfNeeded); \
		P_NATIVE_END; \
	}


#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSaveManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USaveManager**)Z_Param__Result=USaveManager::GetSaveManager(Z_Param_ContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnsubscribeFromEvents) \
	{ \
		P_GET_TINTERFACE_REF(ISaveExtensionInterface,Z_Param_Out_Interface); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnsubscribeFromEvents(Z_Param_Out_Interface); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubscribeForEvents) \
	{ \
		P_GET_TINTERFACE_REF(ISaveExtensionInterface,Z_Param_Out_Interface); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SubscribeForEvents(Z_Param_Out_Interface); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSavingOrLoading) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSavingOrLoading(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeserializeStreamingLevel) \
	{ \
		P_GET_OBJECT(ULevelStreaming,Z_Param_LevelStreaming); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeserializeStreamingLevel(Z_Param_LevelStreaming); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSerializeStreamingLevel) \
	{ \
		P_GET_OBJECT(ULevelStreaming,Z_Param_LevelStreaming); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SerializeStreamingLevel(Z_Param_LevelStreaming); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActivePreset) \
	{ \
		P_GET_SOFTOBJECT(TSoftObjectPtr<USavePreset>,Z_Param_ActivePreset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetActivePreset(Z_Param_ActivePreset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInSlot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsInSlot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSlotSaved) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Slot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSlotSaved(Z_Param_Slot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSlotInfo) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SlotId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USlotInfo**)Z_Param__Result=P_THIS->GetSlotInfo(Z_Param_SlotId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USlotData**)Z_Param__Result=P_THIS->GetCurrentData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USlotInfo**)Z_Param__Result=P_THIS->GetCurrentInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteSlot) \
	{ \
		P_GET_OBJECT(USlotInfo,Z_Param_Slot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DeleteSlot(Z_Param_Slot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBPDeleteAllSlots) \
	{ \
		P_GET_ENUM_REF(EDeleteSlotsResult,Z_Param_Out_Result); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BPDeleteAllSlots((EDeleteSlotsResult&)(Z_Param_Out_Result),Z_Param_LatentInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteSlotFromId) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SlotId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DeleteSlotFromId(Z_Param_SlotId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBPLoadAllSlotInfos) \
	{ \
		P_GET_UBOOL(Z_Param_bSortByRecent); \
		P_GET_TARRAY_REF(USlotInfo*,Z_Param_Out_SaveInfos); \
		P_GET_ENUM_REF(ELoadInfoResult,Z_Param_Out_Result); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BPLoadAllSlotInfos(Z_Param_bSortByRecent,Z_Param_Out_SaveInfos,(ELoadInfoResult&)(Z_Param_Out_Result),Z_Param_LatentInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBPReloadCurrentSlot) \
	{ \
		P_GET_ENUM_REF(ELoadGameResult,Z_Param_Out_Result); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BPReloadCurrentSlot((ELoadGameResult&)(Z_Param_Out_Result),Z_Param_LatentInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBPLoadSlot) \
	{ \
		P_GET_OBJECT(USlotInfo,Z_Param_SlotInfo); \
		P_GET_ENUM_REF(ELoadGameResult,Z_Param_Out_Result); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BPLoadSlot(Z_Param_SlotInfo,(ELoadGameResult&)(Z_Param_Out_Result),Z_Param_LatentInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBPLoadSlotFromId) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SlotId); \
		P_GET_ENUM_REF(ELoadGameResult,Z_Param_Out_Result); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BPLoadSlotFromId(Z_Param_SlotId,(ELoadGameResult&)(Z_Param_Out_Result),Z_Param_LatentInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBPSaveCurrentSlot) \
	{ \
		P_GET_UBOOL(Z_Param_bScreenshot); \
		P_GET_STRUCT(FScreenshotSize,Z_Param_Size); \
		P_GET_ENUM_REF(ESaveGameResult,Z_Param_Out_Result); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BPSaveCurrentSlot(Z_Param_bScreenshot,Z_Param_Size,(ESaveGameResult&)(Z_Param_Out_Result),Z_Param_LatentInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBPSaveSlot) \
	{ \
		P_GET_OBJECT(USlotInfo,Z_Param_SlotInfo); \
		P_GET_UBOOL(Z_Param_bScreenshot); \
		P_GET_STRUCT(FScreenshotSize,Z_Param_Size); \
		P_GET_ENUM_REF(ESaveGameResult,Z_Param_Out_Result); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_GET_UBOOL(Z_Param_bOverrideIfNeeded); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BPSaveSlot(Z_Param_SlotInfo,Z_Param_bScreenshot,Z_Param_Size,(ESaveGameResult&)(Z_Param_Out_Result),Z_Param_LatentInfo,Z_Param_bOverrideIfNeeded); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBPSaveSlotToId) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SlotId); \
		P_GET_UBOOL(Z_Param_bScreenshot); \
		P_GET_STRUCT(FScreenshotSize,Z_Param_Size); \
		P_GET_ENUM_REF(ESaveGameResult,Z_Param_Out_Result); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_GET_UBOOL(Z_Param_bOverrideIfNeeded); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BPSaveSlotToId(Z_Param_SlotId,Z_Param_bScreenshot,Z_Param_Size,(ESaveGameResult&)(Z_Param_Out_Result),Z_Param_LatentInfo,Z_Param_bOverrideIfNeeded); \
		P_NATIVE_END; \
	}


#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveManager(); \
	friend struct Z_Construct_UClass_USaveManager_Statics; \
public: \
	DECLARE_CLASS(USaveManager, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SaveExtension"), NO_API) \
	DECLARE_SERIALIZER(USaveManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_63_INCLASS \
private: \
	static void StaticRegisterNativesUSaveManager(); \
	friend struct Z_Construct_UClass_USaveManager_Statics; \
public: \
	DECLARE_CLASS(USaveManager, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SaveExtension"), NO_API) \
	DECLARE_SERIALIZER(USaveManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_63_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveManager(USaveManager&&); \
	NO_API USaveManager(const USaveManager&); \
public:


#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_63_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveManager(USaveManager&&); \
	NO_API USaveManager(const USaveManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USaveManager)


#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_63_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentInfo() { return STRUCT_OFFSET(USaveManager, CurrentInfo); } \
	FORCEINLINE static uint32 __PPO__CurrentData() { return STRUCT_OFFSET(USaveManager, CurrentData); } \
	FORCEINLINE static uint32 __PPO__LevelStreamingNotifiers() { return STRUCT_OFFSET(USaveManager, LevelStreamingNotifiers); } \
	FORCEINLINE static uint32 __PPO__SubscribedInterfaces() { return STRUCT_OFFSET(USaveManager, SubscribedInterfaces); } \
	FORCEINLINE static uint32 __PPO__Tasks() { return STRUCT_OFFSET(USaveManager, Tasks); }


#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_60_PROLOG
#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_63_PRIVATE_PROPERTY_OFFSET \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_63_SPARSE_DATA \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_63_RPC_WRAPPERS \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_63_INCLASS \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_63_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_63_PRIVATE_PROPERTY_OFFSET \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_63_SPARSE_DATA \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_63_INCLASS_NO_PURE_DECLS \
	PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAVEEXTENSION_API UClass* StaticClass<class USaveManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
