// Copyright 2015-2019 Piperift. All Rights Reserved.


#pragma once

#include "ISaveExtension.h"

#include <CoreMinimal.h>
#include <GameFramework/SaveGame.h>

#include "Records.h"
#include "SlotData.generated.h"


/**
 * USaveData stores all information that can be accessible only while the game is loaded.
 * Works like a common SaveGame object
 * E.g: Items, Quests, Enemies, World Actors, AI, Physics
 */
UCLASS(ClassGroup = SaveExtension, hideCategories = ("Activation", "Actor Tick", "Actor", "Input", "Rendering", "Replication", "Socket", "Thumbnail"))
class SAVEEXTENSION_API USlotData : public USaveGame
{
	GENERATED_BODY()

public:

	USlotData() : Super() {}


	/** Full Name of the Map where this SlotData was saved */
	UPROPERTY(Category = SaveData, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	FString Map;

	/** Game world time since game started in seconds */
	UPROPERTY(Category = SaveData, BlueprintReadOnly)
	float TimeSeconds;


	/** Records
	 * All serialized information to be saved or loaded
	 * Serialized manually for performance
	 */

	FObjectRecord GameInstance;
	FActorRecord GameMode;
	FActorRecord GameState;

	FActorRecord PlayerPawn;
	FControllerRecord PlayerController;
	FActorRecord PlayerState;
	FActorRecord PlayerHUD;

	FPersistentLevelRecord MainLevel;
	TArray<FStreamingLevelRecord> SubLevels;


	void Clean(bool bKeepLevels);
	FName GetFMap() const { return { *Map }; }

	/** Using manual serialization. It's way faster than reflection serialization */
	virtual void Serialize(FArchive& Ar) override;
};
