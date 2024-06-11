

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/StaticMeshComponent.h"
#include "EditorPlayerCPP.generated.h"

UCLASS()
class PROJECT_IRON_PHOENIX_API AEditorPlayerCPP : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AEditorPlayerCPP();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Function to set visibility of the target components

    UFUNCTION(BlueprintCallable, Category = "Visibility")
    void SetComponentsVisibility(TArray<USceneComponent*> TargetComponents, bool bVisible);
	
	//Components

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components")	
    TArray<UStaticMeshComponent*> MeshComponents;

	// Variables inside the EditorPlayer
	// Floats
	// Health

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Health")
	float HealthCPP = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Health")
	float HealthRegenerationCPP = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Health")
	float HealthRegenDelayCPP = 0.0f;

	// Shield

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Shield")
	float ShieldCPP = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Shield")
	float ShieldRegenerationCPP = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Shield")
	float ShieldRegenDelayCPP = 0.0f;

	// Speed

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Speed")
	float SpeedCPP = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Speed")
	float StrafeSpeedCPP = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Speed")
	float TurnSpeedCPP = 0.0f;

	// Roll

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Speed")
	float RollCPP = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Speed")
	float RollCooldownCPP = 0.0f;

	// Boost

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Speed")
	float BoostCPP = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Speed")
	float BoostMaxCPP = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Speed")
	float BoostCooldownCPP = 0.0f;

	// Kinetic Weapon

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|KineticWeapon")
	float KineticDamageCPP = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|KineticWeapon")
	float KineticRangeCPP = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|KineticWeapon")
	float KineticFireRateCPP = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|KineticWeapon")
	float KineticHeatCPP = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|KineticWeapon")
	float KineticCoolingCPP = 0.0f;

	// Laser Weapon

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|LaserWeapon")
	float LaserDamageCPP = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|LaserWeapon")
	float LaserRangeCPP = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|LaserWeapon")
	float LaserFireRateCPP = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|LaserWeapon")
	float LaserHeatCPP = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|LaserWeapon")
	float LaserCoolingCPP = 0.0f;

	// Multipliers

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Multiplier")
	float HealthMultiplierCPP = 2.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Multiplier")
	float HealthRegenMultiplierCPP = 333.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Multiplier")
	float HealthRegenDelayMultiplierCPP = 1.1f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Multiplier")
	float ShieldMultiplierCPP = 2.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Multiplier")
	float ShieldRegenMultiplierCPP = 125.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Multiplier")
	float ShieldRegenDelayMultiplierCPP = 12.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Multiplier")
	float SpeedMultiplierCPP = 140.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Multiplier")
	float StrafeSpeedMultiplierCPP = 80.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Multiplier")
	float RollMultiplierCPP = 33.2f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Multiplier")
	float TurnSpeedMultiplierCPP = 0.04f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Multiplier")
	float BoostMultiplierCPP = 28.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Multiplier")
	float BoostMaxMultiplierCPP = 2.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Multiplier")
	float BoostCooldownMultiplierCPP = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Multiplier")
	float DashCooldownMultiplierCPP = 8.3f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Multiplier")
	float MissileCooldownMultiplierCPP = 3.11f;

	// Ship Parts
	// Bodies
	// Light Body

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|LightBody|Health")
	float LightBHealthCPP = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|LightBody|Health")
	float LightBRegenerationCPP = 25.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|LightBody|Health")
	float LightBRegendelayCPP = 75.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|LightBody|Shield")
	float LightBShieldCPP = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|LightBody|Shield")
	float LightBShieldRegenerationCPP = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|LightBody|Shield")
	float LightBShieldRegenDelayCPP = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|LightBody|Speed")
	float LightBSpeedCPP = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|LightBody|Speed")
	float LightBStrafeCPP = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|LightBody|Speed")
	float LightBRollCPP = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|LightBody|Missile")
	float LightBMissileCooldownCPP = 40.0f;

	// Heavy Body

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|HeavyBody|Health")
	float HeavyBHealthCPP = 60.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|HeavyBody|Health")
	float HeavyBRegenerationCPP = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|HeavyBody|Health")
	float HeavyBRegendelayCPP = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|HeavyBody|Shield")
	float HeavyBShieldCPP = 60.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|HeavyBody|Shield")
	float HeavyBShieldRegenerationCPP = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|HeavyBody|Shield")
	float HeavyBShieldRegenDelayCPP = 60.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|HeavyBody|Speed")
	float HeavyBSpeedCPP = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|HeavyBody|Speed")
	float HeavyBStrafeCPP = 5.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|HeavyBody|Speed")
	float HeavyBRollCPP = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|HeavyBody|Missile")
	float HeavyBMissileCooldownCPP = 25.0f;

	// Tank Body

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|TankBody|Health")
	float TankBHealthCPP = 80.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|TankBody|Health")
	float TankBRegenerationCPP = 75.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|TankBody|Health")
	float TankBRegendelayCPP = 25.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|TankBody|Shield")
	float TankBShieldCPP = 80.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|TankBody|Shield")
	float TankBShieldRegenerationCPP = 70.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|TankBody|Shield")
	float TankBShieldRegenDelayCPP = 40.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|TankBody|Speed")
	float TankBSpeedCPP = -10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|TankBody|Speed")
	float TankBStrafeCPP = -10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|TankBody|Speed")
	float TankBRollCPP = -10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|TankBody|Missile")
	float TankBMissileCooldownCPP = 31.0f;

	// Engines
	// Booster Engine

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Engines|BoosterEngine|Speed")
	float BoosterESpeedCPP = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Engines|BoosterEngine|Speed")
	float BoosterEStrafeCPP = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Engines|BoosterEngine|Speed")
	float BoosterERollCPP = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Engines|BoosterEngine|Speed")
	float BoosterEBoostCPP = 60.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Engines|BoosterEngine|Speed")
	float BoosterEBoostMaxCPP = 45.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Engines|BoosterEngine|Speed")
	float BoosterEBoostCooldownCPP = 60.0f;

	// Power Engine

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Engines|PowerEngine|Speed")
	float PowerESpeedCPP = 15.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Engines|PowerEngine|Speed")
	float PowerEStrafeCPP = 60.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Engines|PowerEngine|Speed")
	float PowerERollCPP = 60.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Engines|PowerEngine|Speed")
	float PowerEBoostCPP = 35.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Engines|PowerEngine|Speed")
	float PowerEBoostMaxCPP = 60.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Engines|PowerEngine|Speed")
	float PowerEBoostCooldownCPP = 80.0f;

	// Rectan Engine

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Engines|RectanEngine|Speed")
	float RectanESpeedCPP = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Engines|RectanEngine|Speed")
	float RectanEStrafeCPP = 70.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Engines|RectanEngine|Speed")
	float RectanERollCPP = 70.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Engines|RectanEngine|Speed")
	float RectanEBoostCPP = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Engines|RectanEngine|Speed")
	float RectanEBoostMaxCPP = 40.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Engines|RectanEngine|Speed")
	float RectanEBoostCooldownCPP = 80.0f;


	// Wings
	// Agility Wings

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|AgilityWings|Health")
	float AgilityWHealthCPP = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|AgilityWings|Shield")
	float AgilityWShieldCPP = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|AgilityWings|Shield")
	float AgilityWShieldRegenerationCPP = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|AgilityWings|Shield")
	float AgilityWShieldRegendelayCPP = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|AgilityWings|Speed")
	float AgilityWSpeedCPP = 55.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|AgilityWings|Speed")
	float AgilityWTurnSpeedCPP = 60.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|AgilityWings|Speed")
	float AgilityWRollCPP = 40.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|AgilityWings|Speed")
	float AgilityWRollCooldownCPP = 68.0f;

	// Megaspeed Wings

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|MegaspeedWings|Health")
	float MegaspeedWHealthCPP = -10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|MegaspeedWings|Shield")
	float MegaspeedWShieldCPP = -10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|MegaspeedWings|Shield")
	float MegaspeedWShieldRegenerationCPP = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|MegaspeedWings|Shield")
	float MegaspeedWShieldRegendelayCPP = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|MegaspeedWings|Speed")
	float MegaspeedWSpeedCPP = 65.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|MegaspeedWings|Speed")
	float MegaspeedWTurnSpeedCPP = 60.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|MegaspeedWings|Speed")
	float MegaspeedWRollCPP = 40.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|MegaspeedWings|Speed")
	float MegaspeedWRollCooldownCPP = 83.0f;

	// Defense Wings

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|DefenseWings|Health")
	float DefenseWHealthCPP = 15.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|DefenseWings|Shield")
	float DefenseWShieldCPP = 15.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|DefenseWings|Shield")
	float DefenseWShieldRegenerationCPP = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|DefenseWings|Shield")
	float DefenseWShieldRegendelayCPP = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|DefenseWings|Speed")
	float DefenseWSpeedCPP = 45.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|DefenseWings|Speed")
	float DefenseWTurnSpeedCPP = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|DefenseWings|Speed")
	float DefenseWRollCPP = 30.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|DefenseWings|Speed")
	float DefenseWRollCooldownCPP = 98.0f;

	// Weapon Type and Damage
	// Laser Battery

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|LaserBattery")
	float LaserBatteryDamageCPP = 15.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|LaserBattery")
	float LaserBatteryRangeCPP = 75.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|LaserBattery")
	float LaserBatteryFireRateCPP = 20.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|LaserBattery")
	float LaserBatteryHeatCPP = 21.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|LaserBattery")
	float LaserBatteryCoolingCPP = 40.0f;

	// Laser Cutter

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|LaserCutter")
	float LaserCutterDamageCPP = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|LaserCutter")
	float LaserCutterRangeCPP = 25.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|LaserCutter")
	float LaserCutterFireRateCPP = 80.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|LaserCutter")
	float LaserCutterHeatCPP = 16.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|LaserCutter")
	float LaserCutterCoolingCPP = 40.0f;

	// Kinetic Canon

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|KineticCanon")
	float KineticCanonDamageCPP = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|KineticCanon")
	float KineticCanonRangeCPP = 75.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|KineticCanon")
	float KineticCanonFireRateCPP = 8.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|KineticCanon")
	float KineticCanonHeatCPP = 90.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|KineticCanon")
	float KineticCanonCoolingCPP = 40.0f;

	// Kinetic Minigun

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|KineticMinigun")
	float KineticMinigunDamageCPP = 7.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|KineticMinigun")
	float KineticMinigunRangeCPP = 25.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|KineticMinigun")
	float KineticMinigunFireRateCPP = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|KineticMinigun")
	float KineticMinigunHeatCPP = 12.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|KineticMinigun")
	float KineticMinigunCoolingCPP = 40.0f;

	// Missile

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|Missile")
	float MissileDamageCPP = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|Missile")
	float MissileRangeCPP = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|Missile")
	float MissileCooldownCPP = 0.0f;


	// Booleans 
	// Config

	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save/Load|Config", SaveConfig)
	int32 SaveSlot = 0; */

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save/Load|Config")
	bool isSingleplayer = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save/Load|Config")
	bool isMenu = false;


	// Category Selected

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save/Load|Category")
	bool BodySelected = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save/Load|Category")
	bool WingsSelected = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save/Load|Category")
	bool EngineSelected = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save/Load|Category")
	bool AbilitySelected = false;

	// Ship Parts Selected
	// Wings

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save/Load|Wings")
	bool ButterflyWSelected = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save/Load|Wings")
	bool DefenseWSelected = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save/Load|Wings")
	bool HeroWSelected = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save/Load|Wings")
	bool MegaSpeedWSelected = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save/Load|Wings")
	bool GunShipWSelected = true;

	// Engines

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save/Load|Engines")
	bool RectanESelected = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save/Load|Engines")
	bool PowerESelected = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save/Load|Engines")
	bool BoosterESelected = false;

	// Bodies

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save/Load|Bodies")
	bool LightBSelected = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save/Load|Bodies")
	bool HeavyBSelected = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save/Load|Bodies")
	bool TankBSelected = false;

	// Weapon Selected

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save/Load|Guns")
	bool LaserBatterySelected = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save/Load|Guns")
	bool LaserCutterSelected = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save/Load|Guns")
	bool KineticCannonSelected = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save/Load|Guns")
	bool KineticMinigunSelected = false;

	//Ability Selected 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save/Load|Ability")
	bool RollASelected = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save/Load|Ability")
	bool MissileASelected = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save/Load|Ability")
	bool BoostASelected = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save/Load|Ability")
	bool RepairASelected = false;

};
