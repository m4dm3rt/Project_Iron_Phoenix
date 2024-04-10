

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "EditorPlayer.generated.h"

UCLASS()
class PROJECT_IRON_PHOENIX_API AEditorPlayer : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AEditorPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Variables inside the EditorPlayer
	// Floats
	// Health

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Health") 
	float Health = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Health") 
	float HealthRegeneration = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Health")
	float HealthRegenDelay = 0.0f;

	// Shield

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Shield")
	float Shield = 0.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Shield")
	float ShieldRegeneration = 0.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Shield")
	float ShieldRegenDelay = 0.0f;

	// Speed

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Speed")
	float Speed = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Speed")
	float StrafeSpeed = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Speed")
	float TurnSpeed = 0.0f;	
	
	// Roll

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Speed")
	float Roll = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Speed")
	float RollCooldown = 0.0f;

	// Boost

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Speed")
	float Boost = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Speed")
	float BoostMax = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Speed")
	float BoostCooldown = 0.0f;

	// Kinetic Weapon

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|KineticWeapon")
	float KineticDamage = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|KineticWeapon")
	float KineticRange = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|KineticWeapon")
	float KineticFireRate = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|KineticWeapon")
	float KineticHeat = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|KineticWeapon")
	float KineticCooling = 0.0f;

	// Laser Weapon
 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|LaserWeapon")
	float LaserDamage = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|LaserWeapon")
	float LaserRange = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|LaserWeapon")
	float LaserFireRate = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|LaserWeapon")
	float LaserHeat = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|LaserWeapon")
	float LaserCooling = 0.0f;

	// Multipliers

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Multiplier")
	float HealthMultiplier = 2.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Multiplier")
	float HealthRegenMultiplier = 333.0f;	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Multiplier")
	float HealthRegenDelayMultiplier = 1.1f;	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Multiplier")
	float ShieldMultiplier = 2.0f;	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Multiplier")
	float ShieldRegenMultiplier = 125.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Multiplier")
	float ShieldRegenDelayMultiplier = 12.5f;	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Multiplier")
	float SpeedMultiplier = 140.0f;	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Multiplier")
	float StrafeSpeedMultiplier = 80.0f;	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Multiplier")
	float RollMultiplier = 33.2f;	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Multiplier")
	float TurnSpeedMultiplier = 0.04f;	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Multiplier")
	float BoostMultiplier = 28.0f;	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Multiplier")
	float BoostMaxMultiplier = 2.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Multiplier")
	float BoostCooldownMultiplier = 10.0f;	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Multiplier")
	float RollCooldownMultiplier = 8.3f;	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Multiplier")
	float MissileCooldownMultiplier = 3.11f;

	// Saved Stats 
	// Health - Saved 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Saved|Health")
	float SavedHealth = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Saved|Health")
	float SavedHealthRegeneration = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General|Saved|Health")
	float SavedHealthRegenDelay = 0.0f;

	// Shield - Saved

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saved|Shield")
	float SavedShield = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saved|Shield")
	float SavedShieldRegeneration = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saved|Shield")
	float SavedShieldRegenDelay = 0.0f;

	// Speed - Saved

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saved|Speed")
	float SavedSpeed = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saved|Speed")
	float SavedStrafe = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saved|Speed")
	float SavedRoll = 0.0f;

	// Kinetic Weapon - Saved

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saved|KineticWeapon")
	float SavedKineticDamage = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saved|KineticWeapon")
	float SavedKineticRange = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saved|KineticWeapon")
	float SavedKineticFireRate = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saved|KineticWeapon")
	float SavedKineticHeat = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saved|KineticWeapon")
	float SavedKineticCooling = 0.0f;

	// Laser Weapon - Saved
 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saved|LaserWeapon")
	float SavedLaserDamage = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saved|LaserWeapon")
	float SavedLaserRange = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saved|LaserWeapon")
	float SavedLaserFireRate = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saved|LaserWeapon")
	float SavedLaserHeat = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saved|LaserWeapon")
	float SavedLaserCooling = 0.0f;

	// Ship Parts
	// Bodies
	// Light Body

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|LightBody|Health")
	float LightBHealth = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|LightBody|Health")
	float LightBRegeneration = 25.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|LightBody|Health")
	float LightBRegendelay = 75.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|LightBody|Shield")
	float LightBShield = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|LightBody|Shield")
	float LightBShieldRegeneration = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|LightBody|Shield")
	float LightBShieldRegenDelay = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|LightBody|Speed")
	float LightBSpeed = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|LightBody|Speed")
	float LightBStrafe = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|LightBody|Speed")
	float LightBRoll = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|LightBody|Missile")
	float LightBMissileCooldown = 40.0f;

	//Heavy Body

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|HeavyBody|Health")
	float HeavyBHealth = 60.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|HeavyBody|Health")
	float HeavyBRegeneration = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|HeavyBody|Health")
	float HeavyBRegendelay = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|HeavyBody|Shield")
	float HeavyBShield = 60.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|HeavyBody|Shield")			
	float HeavyBShieldRegeneration = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|HeavyBody|Shield")
	float HeavyBShieldRegenDelay = 60.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|HeavyBody|Speed")
	float HeavyBSpeed = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|HeavyBody|Speed")
	float HeavyBStrafe = 5.0f;	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|HeavyBody|Speed")
	float HeavyBRoll = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|HeavyBody|Missile")
	float HeavyBMissileCooldown = 25.0f;

	// Tank Body

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|TankBody|Health")
	float TankBHealth = 80.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|TankBody|Health")
	float TankBRegeneration = 75.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|TankBody|Health")
	float TankBRegendelay = 25.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|TankBody|Shield")
	float TankBShield = 80.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|TankBody|Shield")	
	float TankBShieldRegeneration = 70.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|TankBody|Shield")
	float TankBShieldRegenDelay = 40.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|TankBody|Speed")
	float TankBSpeed = -10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|TankBody|Speed")
	float TankBStrafe = -10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|TankBody|Speed")
	float TankBRoll = -10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Bodies|TankBody|Missile")
	float TankBMissileCooldown = 31.0f;

	// Engines
	// Booster Engine

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Engines|BoosterEngine|Speed")
	float BoosterESpeed = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Engines|BoosterEngine|Speed")
	float BoosterEStrafe = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Engines|BoosterEngine|Speed")
	float BoosterERoll = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Engines|BoosterEngine|Speed")
	float BoosterEBoost = 60.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Engines|BoosterEngine|Speed")
	float BoosterEBoostMax = 45.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Engines|BoosterEngine|Speed")
	float BoosterEBoostCooldown = 60.0f;

	// Power Engine

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Engines|PowerEngine|Speed")
	float PowerESpeed = 15.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Engines|PowerEngine|Speed")
	float PowerEStrafe = 60.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Engines|PowerEngine|Speed")
	float PowerERoll = 60.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Engines|PowerEngine|Speed")
	float PowerEBoost = 35.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Engines|PowerEngine|Speed")
	float PowerEBoostMax = 60.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Engines|PowerEngine|Speed")
	float PowerEBoostCooldown = 80.0f;

	// Rectan Engine

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Engines|RectanEngine|Speed")
	float RectanESpeed = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Engines|RectanEngine|Speed")
	float RectanEStrafe = 70.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Engines|RectanEngine|Speed")
	float RectanERoll = 70.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Engines|RectanEngine|Speed")
	float RectanEBoost = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Engines|RectanEngine|Speed")
	float RectanEBoostMax = 40.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Engines|RectanEngine|Speed")
	float RectanEBoostCooldown = 80.0f;

	// Wings
	// Hero Wings

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|HeroWings|Health")
	float HeroWHealth = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|HeroWings|Shield")
	float HeroWShield = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|HeroWings|Shield")
	float HeroWShieldRegeneration = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|HeroWings|Shield")
	float HeroWShieldRegendelay = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|HeroWings|Speed")
	float HeroWSpeed = 55.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|HeroWings|Speed")
	float HeroWTurnSpeed = 50.0f;

	// Butterfly Wings

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|ButterflyWings|Health")
	float ButterflyWHealth = -10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|ButterflyWings|Shield")
	float ButterflyWShield = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|ButterflyWings|Shield")
	float ButterflyWShieldRegeneration = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|ButterflyWings|Shield")
	float ButterflyWShieldRegendelay = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|ButterflyWings|Speed")
	float ButterflyWSpeed = 45.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|ButterflyWings|Speed")
	float ButterflyWTurnSpeed = 50.0f;

	// GunShip Wings

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|GunshipWings|Health")
	float GunshipWHealth = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|GunshipWings|Shield")
	float GunshipWShield = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|GunshipWings|Shield")
	float GunshipWShieldRegeneration = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|GunshipWings|Shield")
	float GunshipWShieldRegendelay = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|GunshipWings|Speed")
	float GunshipWSpeed = 55.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|GunshipWings|Speed")
	float GunshipWTurnSpeed = 60.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|GunshipWings|Speed")
	float GunshipWRoll = 40.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|GunshipWings|Speed")
	float GunshipWRollCooldown = 68.0f;

	// MegaSpeed Wings

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|MegaspeedWings|Health")
	float MegaspeedWHealth = -10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|MegaspeedWings|Shield")
	float MegaspeedWShield = -10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|MegaspeedWings|Shield")
	float MegaspeedWShieldRegeneration = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|MegaspeedWings|Shield")
	float MegaspeedWShieldRegendelay = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|MegaspeedWings|Speed")
	float MegaspeedWSpeed = 65.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|MegaspeedWings|Speed")
	float MegaspeedWTurnSpeed = 60.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|MegaspeedWings|Speed")
	float MegaspeedWRoll = 40.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|MegaspeedWings|Speed")
	float MegaspeedWRollCooldown = 83.0f;

	// X Wings 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|XWings|Health")
	float XWingsHealth = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|XWings|Shield")
	float XWingsShield = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|XWings|Shield")
	float XWingsShieldRegeneration = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|XWings|Shield")
	float XWingsShieldRegendelay = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|XWings|Speed")
	float XWingsSpeed = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|XWings|Speed")
	float XWingsTurnSpeed = 80.0f;

	// Defense Wings

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|DefenseWings|Health")
	float DefenseWHealth = 15.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|DefenseWings|Shield")
	float DefenseWShield = 15.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|DefenseWings|Shield")
	float DefenseWShieldRegeneration = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|DefenseWings|Shield")
	float DefenseWShieldRegendelay = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|DefenseWings|Speed")
	float DefenseWSpeed = 45.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|DefenseWings|Speed")
	float DefenseWTurnSpeed = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|DefenseWings|Speed")
	float DefenseWRoll = 30.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipParts|Wings|DefenseWings|Speed")
	float MDefenseWRollCooldown = 98.0f;

	// Weapon Type and Damage
	// Laser Battery

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|LaserBattery")
	float LaserBatteryDamage = 15.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|LaserBattery")
	float LaserBatteryRange = 75.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|LaserBattery")
	float LaserBatteryFireRate = 20.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|LaserBattery")
	float LaserBatteryHeat = 21.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|LaserBattery")
	float LaserBatteryCooling = 40.0f;

	// Laser Cutter

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|LaserCutter")
	float LaserCutterDamage = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|LaserCutter")
	float LaserCutterRange = 25.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|LaserCutter")
	float LaserCutterFireRate = 80.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|LaserCutter")
	float LaserCutterHeat = 16.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|LaserCutter")
	float LaserCutterCooling = 40.0f;

	// Kinetic Canon

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|KineticCanon")
	float KineticCanonDamage = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|KineticCanon")
	float KineticCanonRange = 75.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|KineticCanon")
	float KineticCanonFireRate = 8.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|KineticCanon")
	float KineticCanonHeat = 90.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|KineticCanon")
	float KineticCanonCooling = 40.0f;

	// Kinetic Minigun

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|KineticMinigun")
	float KineticMinigunDamage = 7.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|KineticMinigun")
	float KineticMinigunRange = 25.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|KineticMinigun")
	float KineticMinigunFireRate = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|KineticMinigun")
	float KineticMinigunHeat = 12.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|KineticMinigun")
	float KineticMinigunCooling = 40.0f;

	// Missile
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|Missile")
	float MissileDamage = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|Missile")
	float MissileRange = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|Missile")
	float MissileCooldown = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|Missile")
	float SavedMissileDamage = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|Missile")
	float SavedMissileRange = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTypes|Missile")
	float SavedMissileCooldown = 0.0f;

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

	public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
