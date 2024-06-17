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

    // Initialize movement axes
    MoveForwardAxis = 0.0f;
    MoveRightAxis = 0.0f;
    MoveUpAxis = 0.0f;

    // Initialize damping factor
    DampingFactor = 1.0f;  // Adjust as needed
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

        // Calculate damping force
        FVector CurrentVelocity = CapsuleComponent->GetPhysicsLinearVelocity();
        FVector DampingForce = FVector::ZeroVector;

        if (MoveForwardAxis == 0.0f)
        {
            DampingForce -= (Forward * CurrentVelocity.ProjectOnTo(Forward)).Size() * Forward;
        }
        if (MoveRightAxis == 0.0f)
        {
            DampingForce -= (Right * CurrentVelocity.ProjectOnTo(Right)).Size() * Right;
        }
        if (MoveUpAxis == 0.0f)
        {
            DampingForce -= (Up * CurrentVelocity.ProjectOnTo(Up)).Size() * Up;
        }

        DampingForce *= DampingFactor;

        // Apply the net force (movement force + damping force)
        FVector NetForce = Force + DampingForce;
        CapsuleComponent->AddForce(NetForce, NAME_None, true);
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
        FQuat NewQuat = CurrentQuat * YawQuat;

        // Normalize the quaternion to avoid cumulative errors
        NewQuat.Normalize();

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

        // Normalize the quaternion to avoid cumulative errors
        NewQuat.Normalize();

        // Convert the new quaternion back to a rotator and apply it
        FRotator NewRotation = NewQuat.Rotator();
        SetActorRotation(NewRotation);
    }
}
