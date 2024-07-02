#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnemyAI.generated.h"

UCLASS()
class PROJECT_IRON_PHOENIX_API AEnemyAI : public ACharacter
{
	GENERATED_BODY()

public:
	AEnemyAI();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable, Category = "Projectile")
	void SpawnProjectile(TSubclassOf<AActor> ProjectileClass);

	UFUNCTION(BlueprintCallable, Category = "Movement")
	void MovePawn(FVector WorldDirection, float ScaleValue);
};
