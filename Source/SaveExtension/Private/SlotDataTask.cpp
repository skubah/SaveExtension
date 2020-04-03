// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "SlotDataTask.h"

#include <Engine/StaticMeshActor.h>
#include <Engine/ReflectionCapture.h>
#include <Engine/LODActor.h>
#include <Engine/Brush.h>
#include <Lightmass/LightmassPortal.h>
#include <GameFramework/GameMode.h>
#include <GameFramework/GameState.h>
#include <GameFramework/PlayerState.h>
#include <GameFramework/PlayerController.h>
#include <GameFramework/HUD.h>
#include <InstancedFoliageActor.h>

#include "SaveManager.h"
#include "SavePreset.h"


/////////////////////////////////////////////////////
// FSlotDataActorsTask

bool FSlotDataActorsTask::ShouldSaveAsWorld(const AActor* Actor, bool& bIsAIController, bool& bIsLevelScript) const
{
	const UClass* const ActorClass = Actor->GetClass();

	bIsAIController = ActorClass->IsChildOf<AAIController>();
	if (bIsAIController)
	{
		return bStoreAIControllers;
	}

	bIsLevelScript = ActorClass->IsChildOf<ALevelScriptActor>();
	if (bIsLevelScript)
	{
		return bStoreLevelBlueprints;
	}

	if (ActorClass == AStaticMeshActor::StaticClass() ||
		ActorClass->IsChildOf<AInstancedFoliageActor>() ||
		ActorClass->IsChildOf<AReflectionCapture>() ||
		ActorClass->IsChildOf<APlayerController>() ||
		ActorClass->IsChildOf<ALightmassPortal>() ||
		ActorClass->IsChildOf<ANavigationData>() ||
		ActorClass->IsChildOf<APlayerState>() ||
		ActorClass->IsChildOf<AGameState>() ||
		ActorClass->IsChildOf<AGameMode>() ||
		ActorClass->IsChildOf<ALODActor>() ||
		ActorClass->IsChildOf<ABrush>() ||
		ActorClass->IsChildOf<AHUD>())
	{
		return false;
	}

	// Is a child class of our non serialized classes?
	/*for (const auto& Class : IgnoredClasses)
	{
		if (ActorClass->IsChildOf(Class))
			return false;
	}*/

	return true;
}


/////////////////////////////////////////////////////
// USaveDataTask

const FName USlotDataTask::TagNoSave{ "!Save" };
const FName USlotDataTask::TagNoTransform{ "!SaveTransform" };
const FName USlotDataTask::TagNoPhysics{ "!SavePhysics" };
const FName USlotDataTask::TagNoComponents{ "!SaveComponents" };
const FName USlotDataTask::TagNoTags{ "!SaveTags" };
const FName USlotDataTask::TagTransform{ "SaveTransform" };


bool USlotDataTask::IsSaveTag(const FName& Tag)
{
	return Tag == TagNoSave || Tag == TagNoTransform || Tag == TagNoPhysics || Tag == TagNoComponents || Tag == TagNoTags;
}

USlotDataTask* USlotDataTask::Start()
{
	const USaveManager* Manager = GetManager();

	// If not running and first task is this
	if (!bRunning && Manager->Tasks.Num() > 0 && Manager->Tasks[0] == this)
	{
		bRunning = true;
		OnStart();
	}
	return this;
}

void USlotDataTask::Finish(bool bSuccess)
{
	if (bRunning)
	{
		OnFinish(bSuccess);
		MarkPendingKill();
		GetManager()->FinishTask(this);
		bFinished = true;
		bSucceeded = bSuccess;
	}
}

bool USlotDataTask::IsScheduled() const
{
	return GetManager()->Tasks.Contains(this);
}

USaveManager* USlotDataTask::GetManager() const
{
	return Cast<USaveManager>(GetOuter());
}

UWorld* USlotDataTask::GetWorld() const
{
	return GetOuter()->GetWorld();
}

bool USlotDataTask::ShouldSaveAsWorld(const AActor* Actor, bool& bIsAIController, bool& bIsLevelScript) const
{
	const UClass* const ActorClass = Actor->GetClass();

	bIsAIController = ActorClass->IsChildOf<AAIController>();
	if (bIsAIController)
	{
		return Preset->bStoreAIControllers;
	}

	bIsLevelScript = ActorClass->IsChildOf<ALevelScriptActor>();
	if (bIsLevelScript)
	{
		return Preset->bStoreLevelBlueprints;
	}

	if (ActorClass == AStaticMeshActor::StaticClass() ||
		ActorClass->IsChildOf<AInstancedFoliageActor>() ||
		ActorClass->IsChildOf<AReflectionCapture>() ||
		ActorClass->IsChildOf<APlayerController>() ||
		ActorClass->IsChildOf<ALightmassPortal>() ||
		ActorClass->IsChildOf<ANavigationData>() ||
		ActorClass->IsChildOf<APlayerState>() ||
		ActorClass->IsChildOf<AGameState>() ||
		ActorClass->IsChildOf<AGameMode>() ||
		ActorClass->IsChildOf<ALODActor>() ||
		ActorClass->IsChildOf<ABrush>() ||
		ActorClass->IsChildOf<AHUD>())
	{
		return false;
	}

	// Is a child class of our non serialized classes?
	for (const auto& Class : Preset->IgnoredActors)
	{
		if (ActorClass->IsChildOf(Class))
			return false;
	}

	return true;
}
