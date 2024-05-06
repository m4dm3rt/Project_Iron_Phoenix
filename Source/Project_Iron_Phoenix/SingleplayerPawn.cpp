#include "SingleplayerPawn.h"

// Sets default values
ASingleplayerPawn::ASingleplayerPawn()
{
    // Set this pawn to call Tick() every frame
    PrimaryActorTick.bCanEverTick = true;

    // Erstellen und anhängen der Kapselkollisionskomponente
    CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
    RootComponent = CapsuleComponent;

    // Erstellen der FloatingPawnMovement-Komponente und setzen des aktualisierten Components
    FloatingMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("FloatingMovement"));
    FloatingMovement->SetUpdatedComponent(CapsuleComponent);
}

// Called when the game starts or when spawned
void ASingleplayerPawn::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void ASingleplayerPawn::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}


void ASingleplayerPawn::ApplyImpulseToCapsule(FVector Impulse)
{
    // Überprüfen, ob die Kapselkollisionskomponente gültig ist
    if (CapsuleComponent)
    {
        CapsuleComponent->AddImpulse(Impulse);
    }
}
