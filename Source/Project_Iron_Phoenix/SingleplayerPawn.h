#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Components/CapsuleComponent.h"
#include "SingleplayerPawn.generated.h"

UCLASS()
class PROJECT_IRON_PHOENIX_API ASingleplayerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ASingleplayerPawn();

	UFUNCTION(BlueprintCallable)
	void SpawnActor();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> BPToSpawn;

    UFUNCTION(BlueprintCallable, Category="Movement")
    void ApplyImpulseToCapsule(FVector Impulse);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UFloatingPawnMovement* FloatingMovement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Movement|General")
	float ThrustVelocity = 7000.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Movement|General")
	float StrafeVelocity = 4000.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Movement|General")
	float RollVelocity = 1.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Movement|General")
	float TurnRate = 2.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Ability|Boost")
	float BoostVelocity = 1.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Ability|Boost")
	float BoostDecrease = 1.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Ability|Boost")
	float BoostCooldown = 5.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Ability|Repair")
	float RepairRate = 0.15f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Ability|Repair")
	float RepairRateCooldown = 45.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Ability|Missile")
	float MissileCooldown = 16.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Ability|Dash")
	float DashVelocity = 5.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Ability|Dash")
	float DashCooldowm = 6.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Combat|General")
	float ShieldRegeneration = 0.4f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Combat|General")
	float ShieldRegenDelay = 4.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Combat|General")
	float TargetingRange = 160000.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Combat|General")
	float TargetLossDelay = 5.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Combat|LaserGeneral|Laser1")
	bool LaserGunBattery;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Combat|LaserGeneral|Laser1")
	TSubclassOf<class AActor> BP_LaserBattery;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Combat|LaserGeneral|Laser2")
	bool LaserGunCutter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Combat|LaserGeneral")
	float LaserHeatCooldownDelay = 3.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Combat|LaserGeneral")
	float LaserCooledDown = 70.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Combat|KineticGeneral|Kinetic1")
	bool KineticGunCanon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Combat|LaserGeneral|Laser1")
	TSubclassOf<class AActor> BP_KineticCanon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Combat|KineticGeneral|Kinetic2")
	bool KineticGunMinigun;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Combat|LaserGeneral|Laser1")
	TSubclassOf<class AActor> BP_KineticMinigun;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Combat|KineticGeneral")
	float KineticHeatCooldownDelay = 3.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Combat|KineticGeneral")
	float KineticCooledDown = 70.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Movement")
	float CurrentSpeed = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Movement")
	float MoveForwardAxis = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Movement")
	float MoveRightAxis = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Movement")
	float MoveUpAxis = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Movement")
	float ThrustValue = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Movement")
	float RollAxis = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Movement")
	float RollCooldownTime = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Movement")
	float BoostMultiplier = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Movement")
	float MovementStabilizer = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Movement")
	float RotationStabilizer = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Movement")
	FVector ThrustVector = FVector(0.0f, 0.0f, 0.0f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Movement")
	FVector RotationVector = FVector(0.0f, 0.0f, 0.0f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Movement")
	FVector AxisThrust = FVector(0.0f, 0.0f, 0.0f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Movement")
	FVector AxisTurn = FVector(0.0f, 0.0f, 0.0f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	bool FreeLook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	bool isFPS;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	bool ShootingLaser;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	bool ShootingKinetic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	bool ProjectileShot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	bool LaserHeatFull;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	bool KineticHeatFull;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	bool MissileShot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	bool KineticGun;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	bool LaserGun;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	bool isWeaponChanging;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	bool isTargeting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	bool TargetFound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	bool EnemyInRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	bool EnemyNotInRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	bool CanLook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	bool isBoosting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	bool RollRight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	bool RollLeft;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	bool isRolling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	bool ReflectorFull;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	bool isReflecting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	bool isRepairing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	bool isDamaged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	bool isDead;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	bool alwaysStabilize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	bool enableStabilizer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	float DamageReceived = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	float ReceivedXP = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	float LaserDamage = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	float LaserFireRate = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	float LaserHeat = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	float LaserCooling = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	float KineticDamage = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	float KineticCooling = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	float KineticFireRate = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	float KineticHeat = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	float ProjectileLaserHeat = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	float ProejctileKineticHeat = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	float MissileCooldownTime = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	float RepairRateCooldownTime = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	int NumberOfClicksRight = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Backend|Conditions")
	int NumberOfClicksLeft = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCapsuleComponent* CapsuleComponent;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Deklaration der Funktionen f�r die Bewegung
	void MoveForward(float Value);
	void MoveRight(float Value);
	void MoveUp(float Value);
};
