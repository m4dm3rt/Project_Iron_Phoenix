#pragma once

#include "ActorSpawner.h"
#include "AIController.h"


AActorSpawner::AActorSpawner()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AActorSpawner::BeginPlay()
{
    Super::BeginPlay();
}

void AActorSpawner::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AActorSpawner::SpawnActor(TSubclassOf<APawn> ActorClass, FVector Location)
{
    if (ActorClass)
    {
        FActorSpawnParameters SpawnParams;
        SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

        APawn* SpawnedActor = GetWorld()->SpawnActor<APawn>(ActorClass, Location, FRotator::ZeroRotator, SpawnParams);
        if (SpawnedActor)
        {
            // Zuweisen eines AI-Controllers, wenn notwendig
            AAIController* AIController = GetWorld()->SpawnActor<AAIController>(AAIController::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator);
            if (AIController)
            {
                AIController->Possess(SpawnedActor);
            }

            // Zusätzliche Initialisierung kann hier erfolgen
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("ActorClass ist nicht spezifiziert!"));
    }
}