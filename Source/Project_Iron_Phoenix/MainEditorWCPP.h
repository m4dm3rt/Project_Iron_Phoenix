

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainEditorWCPP.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_IRON_PHOENIX_API UMainEditorWCPP : public UUserWidget
{
	GENERATED_BODY()

public:

    // Bools
    
    // Save/Load
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save/Load")
    bool Slot1 = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save/Load")
    bool Slot2 = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save/Load")
    bool Slot3 = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save/Load")
    bool Body = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save/Load")
    bool Wings = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save/Load")
    bool Engine = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save/Load")
    bool Weapon = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save/Load")
    bool Unsaved = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save/Load")
    bool Abilities = false;

    //Level Unlocks 

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Unlocks")
    bool GunShipWEnabled = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Unlocks")
    bool DefenseWEnabled = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Unlocks")
    bool MegaSpeedWEnabled = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Unlocks")
    bool HeavyBEnabled = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Unlocks")
    bool LightBEnabled = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Unlocks")
    bool TankBEnabled = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Unlocks")
    bool RectanEEnabled = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Unlocks")
    bool PowerEEnabled = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Unlocks")
    bool BoosterEEnabled = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Unlocks")
    bool LaserBatteryEnabled = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Unlocks")
    bool LaserCutterEnabled = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Unlocks")
    bool KineticCannonEnabled = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Unlocks")
    bool KineticMinigunEnabled = false;

    //Buttons

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Buttons")
    bool BaseButtonStats = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Buttons")
    bool WeaponButtonStats = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Buttons")
    bool AbilityButtonStats = false;


    //Floats 

    //Level Unlocks

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Unlocks")
    float GunShipWLVLUnlock = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Unlocks")
    float DefenseWLVLUnlock = 3.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Unlocks")
    float MegaSpeedWLVLUnlock = 5.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Unlocks")
    float HeavyBELVLUnlock = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Unlocks")
    float LightBLVLUnlock = 2.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Unlocks")
    float TankBLVLUnlock = 4.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Unlocks")
    float RectanELVLUnlock = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Unlocks")
    float PowerELVLUnlock = 2.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Unlocks")
    float BoosterELVLUnlock = 4.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Unlocks")
    float LaserBatteryLVLUnlock = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Unlocks")
    float LaserCutterLVLUnlock = 3.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Unlocks")
    float KineticCannonLVLUnlock = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Unlocks")
    float KineticMinigunLVLUnlock = 5.0f;

    protected:
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save/Load") // Adjust category as needed
        class AEditorPlayerCPP* EditorPlayerRef = nullptr; // Adjust the class type as needed
};