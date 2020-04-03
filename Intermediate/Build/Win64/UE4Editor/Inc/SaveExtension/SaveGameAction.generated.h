// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAVEEXTENSION_SaveGameAction_generated_h
#error "SaveGameAction.generated.h already included, missing '#pragma once' in SaveGameAction.h"
#endif
#define SAVEEXTENSION_SaveGameAction_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginBuilder_Plugins_SaveExtension_Source_SaveExtension_Public_LatentActions_SaveGameAction_h


#define FOREACH_ENUM_ESAVEGAMERESULT(op) \
	op(ESaveGameResult::Saving) \
	op(ESaveGameResult::Continue) \
	op(ESaveGameResult::Failed) 

enum class ESaveGameResult : uint8;
template<> SAVEEXTENSION_API UEnum* StaticEnum<ESaveGameResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
