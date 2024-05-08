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

void ASingleplayerPawn::ApplyImpulseToCapsule()
{
    if (CapsuleComponent)
    {
        // Get the actor's forward, right, and up vectors
        FVector Forward = GetActorForwardVector();
        FVector Right = GetActorRightVector();
        FVector Up = GetActorUpVector();

        // Calculate the force as a velocity change (Acceleration), mass is ignored
        FVector Force = (Forward * MoveForwardAxis + Right * MoveRightAxis + Up * MoveUpAxis) / GetWorld()->GetDeltaSeconds();

        Force *= 10.0f;

        // Apply the force as acceleration
        CapsuleComponent->AddForce(Force, NAME_None, true);
    }
}

void ASingleplayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerInputComponent->BindAxis("MoveForward", this, &ASingleplayerPawn::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &ASingleplayerPawn::MoveRight);
    PlayerInputComponent->BindAxis("MoveUp", this, &ASingleplayerPawn::MoveUp);
}

void ASingleplayerPawn::MoveForward(float Value)
{
    MoveForwardAxis = Value;
}

void ASingleplayerPawn::MoveRight(float Value)
{
    MoveRightAxis = Value;
}

void ASingleplayerPawn::MoveUp(float Value)
{
    MoveUpAxis = Value;
}


void ASingleplayerPawn::SpawnActor()
{
    FActorSpawnParameters spawnParams;
    spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

    GetWorld()->SpawnActor<AActor>(BPToSpawn, GetActorTransform(), spawnParams);
}

