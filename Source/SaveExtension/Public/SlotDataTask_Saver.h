// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "SlotDataTask.h"
#include "ISaveExtension.h"

#include <Engine/Level.h>
#include <Engine/LevelStreaming.h>
#include <GameFramework/Actor.h>
#include <Engine/LevelScriptActor.h>
#include <GameFramework/Controller.h>
#include <AIController.h>
#include <Async/AsyncWork.h>

#include "SavePreset.h"
#include "SlotData.h"

#include "Multithreading/SaveFileTask.h"
#include "SlotDataTask_Saver.generated.h"


/** Called when game has been saved
 * @param SlotInfo the saved slot. Null if save failed
 */
DECLARE_DELEGATE_OneParam(FOnGameSaved, USlotInfo*);


/////////////////////////////////////////////////////
// FSerializeActorsTask
// Async task to serialize actors from a level.
class FSerializeActorsTask : public FSlotDataActorsTask
{
	const TArray<AActor*>* const LevelActors;
	const int32 StartIndex;
	const int32 Num;

	/** USE ONLY FOR DUMPING DATA */
	FLevelRecord* LevelRecord;

	FActorRecord LevelScriptRecord;
	TArray<FActorRecord> ActorRecords;
	TArray<FControllerRecord> AIControllerRecords;


public:

	explicit FSerializeActorsTask(const bool bIsSync, const UWorld* World, USlotData* SlotData, const TArray<AActor*>* const InLevelActors, const int32 InStartIndex, const int32 InNum, FLevelRecord* InLevelRecord, const USavePreset* Preset) :
		FSlotDataActorsTask(bIsSync, World, SlotData, Preset),
		LevelActors(InLevelActors),
		StartIndex(InStartIndex),
		Num(FMath::Min(InNum, LevelActors->Num() - StartIndex)),
		LevelRecord(InLevelRecord),
		LevelScriptRecord{}, ActorRecords{}, AIControllerRecords{}
	{
		// No apparent performance benefit
		// ActorRecords.Reserve(Num);
	}

	void DoWork();

	/** Called after task has completed to recover resulting information */
	void DumpData() {
		if (LevelScriptRecord.IsValid())
			LevelRecord->LevelScript = LevelScriptRecord;

		// Shrink not needed. Move wont keep reserved space
		LevelRecord->Actors.Append(MoveTemp(ActorRecords));
		LevelRecord->AIControllers.Append(MoveTemp(AIControllerRecords));
	}

	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(FSerializeActorsTask, STATGROUP_ThreadPoolAsyncTasks);
	}

private:

	void SerializeLevelScript(const ALevelScriptActor* Level, FLevelRecord& LevelRecord) const;

	void SerializeAI(const AAIController* AIController, FLevelRecord& LevelRecord) const;

	/** Serializes an actor into this Controller Record */
	bool SerializeController(const AController* Actor, FControllerRecord& Record) const;


	void SerializeGameMode();
	void SerializeGameState();
	void SerializePlayerState(int32 PlayerId);
	void SerializePlayerController(int32 PlayerId);
	void SerializePlayerHUD(int32 PlayerId);
	void SerializeGameInstance();


	/** Serializes an actor into this Actor Record */
	bool SerializeActor(const AActor* Actor, FActorRecord& Record) const;

	/** Serializes the components of an actor into a provided Actor Record */
	inline void SerializeActorComponents(const AActor* Actor, FActorRecord& ActorRecord, int8 indent = 0) const;
};


/**
* Manages the saving process of a SaveData file
*/
UCLASS()
class USlotDataTask_Saver : public USlotDataTask
{
	GENERATED_BODY()

	bool bOverride;
	bool bSaveThumbnail;
	int32 Slot;
	int32 Width;
	int32 Height;

	FOnGameSaved Delegate;

protected:

	// Async variables
	TWeakObjectPtr<ULevel> CurrentLevel;
	TWeakObjectPtr<ULevelStreaming> CurrentSLevel;

	int32 CurrentActorIndex;
	TArray<TWeakObjectPtr<AActor>> CurrentLevelActors;

	/** Begin AsyncTasks */
	TArray<FAsyncTask<FSerializeActorsTask>> Tasks;
	FAsyncTask<FSaveFileTask>* SaveInfoTask;
	FAsyncTask<FSaveFileTask>* SaveDataTask;
	/** End AsyncTasks */


public:

	USlotDataTask_Saver()
		: USlotDataTask()
		, SaveInfoTask(nullptr)
		, SaveDataTask(nullptr)
	{}

	auto Setup(int32 InSlot, bool bInOverride, bool bInSaveThumbnail, const int32 InWidth, const int32 InHeight)
	{
		Slot = InSlot;
		bOverride = bInOverride;
		bSaveThumbnail = bInSaveThumbnail;
		Width = InWidth;
		Height = InHeight;
		return this;
	}

	auto Bind(const FOnGameSaved& OnSaved) { Delegate = OnSaved; return this; }

	virtual void OnStart() override;
	virtual void Tick(float DeltaTime) override;
	virtual void OnFinish(bool bSuccess) override;
	virtual void BeginDestroy() override;

protected:

	/** BEGIN Serialization */
	void SerializeSync();
	void SerializeLevelSync(const ULevel* Level, int32 AssignedThreads, const ULevelStreaming* StreamingLevel = nullptr);

	void SerializeASync();
	void SerializeLevelASync(const ULevel* Level, const ULevelStreaming* StreamingLevel = nullptr);

	/** Serializes all world actors. */
	void SerializeWorld();
	/** END Serialization */

	void RunScheduledTasks();

private:

	/** BEGIN FileSaving */
	void SaveFile(const FString& InfoName, const FString& DataName);
	/** End FileSaving */
};
