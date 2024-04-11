


#include "SingleplayerPawn.h"

// Sets default values
ASingleplayerPawn::ASingleplayerPawn()
{
    // Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

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


// Called to bind functionality to input
void ASingleplayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    // Bind axis events
    PlayerInputComponent->BindAxis("MoveForward", this, &ASingleplayerPawn::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &ASingleplayerPawn::MoveRight);
}

void ASingleplayerPawn::MoveForward(float Value)
{
    // Bewegen Sie den Charakter nach vorne basierend auf dem Eingabewert
    FVector Direction = GetActorForwardVector();
    AddMovementInput(Direction, Value);

    // Wenn der Eingabewert nicht null ist, geben Sie eine Nachricht aus
    if (Value != 0.0f)
    {
        UE_LOG(LogTemp, Warning, TEXT("Charakter bewegt sich nach vorne!"));
    }
}

void ASingleplayerPawn::MoveRight(float Value)
{
    // Bewegen Sie den Charakter nach rechts basierend auf dem Eingabewert
    FVector Direction = GetActorRightVector();
    AddMovementInput(Direction, Value);
}

void ASingleplayerPawn::SpawnActor()
{
    FActorSpawnParameters spawnParams;
    spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

    GetWorld()->SpawnActor<AActor>(BPToSpawn, GetActorTransform(), spawnParams);
}