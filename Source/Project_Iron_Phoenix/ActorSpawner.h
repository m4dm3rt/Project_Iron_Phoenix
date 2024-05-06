#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Pawn.h"
#include "ActorSpawner.generated.h"

UCLASS()
class PROJECT_IRON_PHOENIX_API AActorSpawner : public AActor
{
    GENERATED_BODY()

public: 
    AActorSpawner();

    UFUNCTION(BlueprintCallable, Category = "Spawning")
    void SpawnActor(TSubclassOf<APawn> ActorClass, FVector Location);

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
};