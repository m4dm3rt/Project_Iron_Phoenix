

#include "EditorPlayerCPP.h"

AEditorPlayerCPP::AEditorPlayerCPP()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AEditorPlayerCPP::BeginPlay()
{
	Super::BeginPlay();
}

void AEditorPlayerCPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEditorPlayerCPP::SetComponentsVisibility(TArray<USceneComponent*> TargetComponents, bool bVisible)
{
    for (USceneComponent* Component : TargetComponents)
    {
        if (Component)
        {
            Component->SetVisibility(bVisible, true);
        }
    }
}

