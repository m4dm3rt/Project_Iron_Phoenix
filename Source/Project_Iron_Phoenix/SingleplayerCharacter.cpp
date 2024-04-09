


#include "SingleplayerCharacter.h"

// Sets default values
ASingleplayerCharacter::ASingleplayerCharacter()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASingleplayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASingleplayerCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Überprüfen, ob sich der Charakter nach vorne bewegt
    if (MoveForwardAxis > 0.0f)
    {
        // Drucken Sie eine Nachricht in die Konsole
        UE_LOG(LogTemp, Warning, TEXT("Charakter bewegt sich nach vorne!"));
    }
}


// Called to bind functionality to input
void ASingleplayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    // Bind axis events
    PlayerInputComponent->BindAxis("MoveForward", this, &ASingleplayerCharacter::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &ASingleplayerCharacter::MoveRight);
}

void ASingleplayerCharacter::MoveForward(float Value)
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

void ASingleplayerCharacter::MoveRight(float Value)
{
    // Bewegen Sie den Charakter nach rechts basierend auf dem Eingabewert
    FVector Direction = GetActorRightVector();
    AddMovementInput(Direction, Value);
}

void ASingleplayerCharacter::SpawnActor()
{
    FActorSpawnParameters spawnParams;
    spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

    GetWorld()->SpawnActor<AActor>(BPToSpawn, GetActorTransform(), spawnParams);
}