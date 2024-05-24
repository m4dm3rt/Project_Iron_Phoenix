


#include "EditorPlayerCPP.h"

// Sets default values
AEditorPlayerCPP::AEditorPlayerCPP()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEditorPlayerCPP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
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