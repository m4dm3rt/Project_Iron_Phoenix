#include "EnemyAI.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"

// Sets default values
AEnemyAI::AEnemyAI()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AEnemyAI::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AEnemyAI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AEnemyAI::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

// Function to spawn a projectile
void AEnemyAI::SpawnProjectile()
{
	if (ProjectileClass)
	{
		FVector Location = GetActorLocation();
		FRotator Rotation = GetActorRotation();
		FActorSpawnParameters SpawnParams;

		GetWorld()->SpawnActor<AActor>(ProjectileClass, Location, Rotation, SpawnParams);
	}
}
