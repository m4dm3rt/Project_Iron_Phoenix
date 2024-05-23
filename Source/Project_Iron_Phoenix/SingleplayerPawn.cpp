#include "SingleplayerPawn.h"
#include "Camera/CameraComponent.h"

// Sets default values
ASingleplayerPawn::ASingleplayerPawn()
{
    // Set this pawn to call Tick() every frame
    PrimaryActorTick.bCanEverTick = true;

    // Create and attach the capsule collision component
    CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
    RootComponent = CapsuleComponent;

    // Create the FloatingPawnMovement component and set the updated component
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
    PlayerInputComponent->BindAxis("Turn", this, &ASingleplayerPawn::AddCapsuleYawInput);
    PlayerInputComponent->BindAxis("LookUp", this, &ASingleplayerPawn::AddCapsulePitchInput);
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

void ASingleplayerPawn::AddCapsuleYawInput(float Value)
{
    if (Value != 0.0f)
    {
        FRotator CurrentRotation = GetActorRotation();
        FQuat CurrentQuat = CurrentRotation.Quaternion();

        // Create a quaternion for the yaw rotation
        FQuat YawQuat = FQuat(FVector::UpVector, FMath::DegreesToRadians(Value));

        // Combine the current quaternion with the yaw rotation quaternion
        FQuat NewQuat = YawQuat * CurrentQuat;

        // Convert the new quaternion back to a rotator and apply it
        FRotator NewRotation = NewQuat.Rotator();
        SetActorRotation(NewRotation);
    }
}

void ASingleplayerPawn::AddCapsulePitchInput(float Value)
{
    if (Value != 0.0f)
    {
        FRotator CurrentRotation = GetActorRotation();
        FQuat CurrentQuat = CurrentRotation.Quaternion();

        // Create a quaternion for the pitch rotation
        FQuat PitchQuat = FQuat(FVector::RightVector, FMath::DegreesToRadians(Value));

        // Combine the current quaternion with the pitch rotation quaternion
        FQuat NewQuat = CurrentQuat * PitchQuat;

        // Convert the new quaternion back to a rotator and apply it
        FRotator NewRotation = NewQuat.Rotator();
        SetActorRotation(NewRotation);
    }
}
