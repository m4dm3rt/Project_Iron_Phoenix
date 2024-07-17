#include "EditorPlayerCPP.h"

AEditorPlayerCPP::AEditorPlayerCPP()
{
	PrimaryActorTick.bCanEverTick = true;

}
void AEditorPlayerCPP::BeginPlay()
{
	Super::BeginPlay();
}

void AEditorPlayerCPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    void AgilityStats();
    void DefenseStats();
    void SpeedStats();
    void HeavyBStats();
    void LightBStats();
    void TankBStats();
    void RectanEStats();
    void PowerEStats();
    void BoosterEStats();
}

// Set Visible Event

void AEditorPlayerCPP::SetComponentsVisibility(TArray<USceneComponent*> TargetComponents, bool bVisible)
{
    for (USceneComponent* Component : TargetComponents)
    {
        if (Component)
        {
            Component->SetVisibility(bVisible, true);
        }
    }
}

//Set Booleans Events

void AEditorPlayerCPP::SetBodies(bool bLightBSelected, bool bHeavyBSelected, bool bTankBSelected)
{
    LightBSelectedCPP = bLightBSelected;
    HeavyBSelectedCPP = bHeavyBSelected;
    TankBSelectedCPP = bTankBSelected;
}

void AEditorPlayerCPP::SetWings(bool bDefenseWSelected, bool bMegaSpeedWSelected, bool bAgilityWSelected)
{
    DefenseWSelectedCPP = bDefenseWSelected;
    MegaSpeedWSelectedCPP = bMegaSpeedWSelected;
    AgilityWSelectedCPP = bAgilityWSelected;
}

void AEditorPlayerCPP::SetEngines(bool bRectanESelected, bool bPowerESelected, bool bBoosterESelected)
{
    RectanESelectedCPP = bRectanESelected;
    PowerESelectedCPP = bPowerESelected;
    BoosterESelectedCPP = bBoosterESelected;
}

// Editor Player Stats

void AEditorPlayerCPP::AgilityStats()
{
    if (LightBSelectedCPP)
    {   
        // Agility + Light Health/Shield/Speed/Roll
        HealthCPP = AgilityWHealthCPP + LightBHealthCPP;
        ShieldCPP = AgilityWShieldCPP + LightBShieldCPP;
        TurnSpeedCPP = AgilityWTurnSpeedCPP;
        RollCPP = AgilityWRollCPP;
        RollCooldownCPP = AgilityWRollCooldownCPP;
    }
    else if (TankBSelectedCPP)
    {
        // Agility + Tank Health/Shield/Speed/Roll
        HealthCPP = AgilityWHealthCPP + TankBHealthCPP;
        ShieldCPP = AgilityWShieldCPP + TankBShieldCPP;
        TurnSpeedCPP = AgilityWTurnSpeedCPP;
        RollCPP = AgilityWRollCPP;
        RollCooldownCPP = AgilityWRollCooldownCPP;
    }
    else if (HeavyBSelectedCPP)
    {
        // Agility + Heavy Health/Shield/Speed/Roll
        HealthCPP = AgilityWHealthCPP + HeavyBHealthCPP;
        ShieldCPP = AgilityWShieldCPP + HeavyBShieldCPP;
        TurnSpeedCPP = AgilityWTurnSpeedCPP;
        RollCPP = AgilityWRollCPP;
        RollCooldownCPP = AgilityWRollCooldownCPP;
    }
}

void AEditorPlayerCPP::DefenseStats()
{
    if (LightBSelectedCPP)
    {   
        // Defense + Light Health/Shield/Speed/Roll
        HealthCPP = DefenseWHealthCPP + LightBHealthCPP;
        ShieldCPP = DefenseWShieldCPP + LightBShieldCPP;
        TurnSpeedCPP = DefenseWTurnSpeedCPP;
        RollCPP =DefenseWRollCPP;
        RollCooldownCPP = DefenseWRollCooldownCPP;
    }
    else if (TankBSelectedCPP)
    {
        // Defense + Tank Health/Shield/Speed/Roll
        HealthCPP = DefenseWHealthCPP + TankBHealthCPP;
        ShieldCPP = DefenseWShieldCPP + TankBShieldCPP;
        TurnSpeedCPP = DefenseWTurnSpeedCPP;
        RollCPP = DefenseWRollCPP;
        RollCooldownCPP = DefenseWRollCooldownCPP;
    }
    else if (HeavyBSelectedCPP)
    {
        // Defense + Heavy Health/Shield/Speed/Roll
        HealthCPP = DefenseWHealthCPP + HeavyBHealthCPP;
        ShieldCPP = DefenseWShieldCPP + HeavyBShieldCPP;
        TurnSpeedCPP = DefenseWTurnSpeedCPP;
        RollCPP = DefenseWRollCPP;
        RollCooldownCPP = DefenseWRollCooldownCPP;
    }
}

void AEditorPlayerCPP::SpeedStats()
{
    if (LightBSelectedCPP)
    {
        //  Megaspeed + Light Health/Shield/Speed/Roll
        HealthCPP = MegaspeedWHealthCPP + LightBHealthCPP;
        ShieldCPP = MegaspeedWShieldCPP + LightBShieldCPP;
        TurnSpeedCPP = MegaspeedWTurnSpeedCPP;
        RollCPP = MegaspeedWRollCPP;
        RollCooldownCPP = MegaspeedWRollCooldownCPP;
    }
    else if (TankBSelectedCPP)
    {
        //  Megaspeed + Tank Health/Shield/Speed/Roll
        HealthCPP = MegaspeedWHealthCPP + TankBHealthCPP;
        ShieldCPP = MegaspeedWShieldCPP + TankBShieldCPP;
        TurnSpeedCPP = MegaspeedWTurnSpeedCPP;
        RollCPP = MegaspeedWRollCPP;
        RollCooldownCPP = MegaspeedWRollCooldownCPP;
    }
    else if (HeavyBSelectedCPP)
    {
        //  Megaspeed + Heavy Health/Shield/Speed/Roll
        HealthCPP = MegaspeedWHealthCPP + HeavyBHealthCPP;
        ShieldCPP = MegaspeedWShieldCPP + HeavyBShieldCPP;
        TurnSpeedCPP = MegaspeedWTurnSpeedCPP;
        RollCPP = MegaspeedWRollCPP;
        RollCooldownCPP = MegaspeedWRollCooldownCPP;
    }
}


void AEditorPlayerCPP::HeavyBStats()
{   
    // Health Regeneration
    HealthRegenerationCPP = HeavyBHealthRegenerationCPP;
    HealthRegenDelayCPP = HeavyBHealthRegenDelayCPP;
    // Missile
    MissileCooldownCPP = HeavyBMissileCooldownCPP;

    if (DefenseWSelectedCPP) 
    {  
        // Health
        HealthCPP = HeavyBHealthCPP + DefenseWHealthCPP;
        // Shield
        ShieldCPP = HeavyBShieldCPP + DefenseWShieldCPP;
        ShieldRegenerationCPP = HeavyBShieldRegenerationCPP + DefenseWShieldRegenerationCPP;
        ShieldRegenDelayCPP = HeavyBShieldRegenDelayCPP + DefenseWShieldRegendelayCPP;
        // Speed
        if (BoosterESelectedCPP) {
            SpeedCPP = HeavyBSpeedCPP + BoosterESpeedCPP + DefenseWSpeedCPP;
            StrafeSpeedCPP = HeavyBStrafeCPP + BoosterEStrafeCPP;
        } else if (RectanESelectedCPP) {
            SpeedCPP = HeavyBSpeedCPP + RectanESpeedCPP + DefenseWSpeedCPP;
            StrafeSpeedCPP = HeavyBStrafeCPP + RectanEStrafeCPP;
        } else if (PowerESelectedCPP) {
            SpeedCPP = HeavyBSpeedCPP + PowerESpeedCPP + DefenseWSpeedCPP;
            StrafeSpeedCPP = HeavyBStrafeCPP + PowerEStrafeCPP;
        }
    }
    else if (MegaSpeedWSelectedCPP)
    {
        // Health
        HealthCPP = HeavyBHealthCPP + MegaspeedWHealthCPP;
        // Shield    
        ShieldCPP = HeavyBShieldCPP + MegaspeedWShieldCPP;
        ShieldRegenerationCPP = HeavyBShieldRegenerationCPP + MegaSpeedWShieldRegenerationCPP;
        ShieldRegenDelayCPP = HeavyBShieldRegenDelayCPP + MegaspeedWShieldRegendelayCPP;
        // Speed
        if (BoosterESelectedCPP) {
            SpeedCPP = HeavyBSpeedCPP + BoosterESpeedCPP + MegaspeedWSpeedCPP;
            StrafeSpeedCPP = HeavyBStrafeCPP + BoosterEStrafeCPP;
        } else if (RectanESelectedCPP) {
            SpeedCPP = HeavyBSpeedCPP + RectanESpeedCPP + MegaspeedWSpeedCPP;
            StrafeSpeedCPP = HeavyBStrafeCPP + RectanEStrafeCPP;
        } else if (PowerESelectedCPP) {
            SpeedCPP = HeavyBSpeedCPP + PowerESpeedCPP + MegaspeedWSpeedCPP;
            StrafeSpeedCPP = HeavyBStrafeCPP + PowerEStrafeCPP;
        }
    }
    else if (AgilityWSelectedCPP)
    {
        // Health    
        HealthCPP = HeavyBHealthCPP + AgilityWHealthCPP;

        // Shield
        ShieldCPP = AgilityWShieldCPP + HeavyBShieldCPP;
        ShieldRegenerationCPP = HeavyBShieldRegenerationCPP + AgilityWShieldRegenerationCPP;
        ShieldRegenDelayCPP = HeavyBShieldRegenDelayCPP + AgilityWShieldRegendelayCPP;

        // Speed
        if (BoosterESelectedCPP) {
            SpeedCPP = HeavyBSpeedCPP + BoosterESpeedCPP + AgilityWSpeedCPP;
            StrafeSpeedCPP = HeavyBStrafeCPP + BoosterEStrafeCPP;
        } else if (RectanESelectedCPP) {
            SpeedCPP = HeavyBSpeedCPP + RectanESpeedCPP + AgilityWSpeedCPP;
            StrafeSpeedCPP = HeavyBStrafeCPP + RectanEStrafeCPP;
        } else if (PowerESelectedCPP) {
            SpeedCPP = HeavyBSpeedCPP + PowerESpeedCPP + AgilityWSpeedCPP;
            StrafeSpeedCPP = HeavyBStrafeCPP + PowerEStrafeCPP;
        }
    }
}

void AEditorPlayerCPP::LightBStats()
{
    // Health Regeneration
    HealthRegenerationCPP = LightBHealthRegenerationCPP;
    HealthRegenDelayCPP = LightBHealthRegenDelayCPP;
    // Missile
    MissileCooldownCPP = LightBMissileCooldownCPP;

    if (DefenseWSelectedCPP) 
    {  
        // Health
        HealthCPP = LightBHealthCPP + DefenseWHealthCPP;
        // Shield
        ShieldCPP = LightBShieldCPP + DefenseWShieldCPP;
        ShieldRegenerationCPP = LightBShieldRegenerationCPP + DefenseWShieldRegenerationCPP;
        ShieldRegenDelayCPP = LightBShieldRegenDelayCPP + DefenseWShieldRegendelayCPP;

        // Speed
        if (BoosterESelectedCPP) {
            SpeedCPP = LightBSpeedCPP + BoosterESpeedCPP + DefenseWSpeedCPP;
            StrafeSpeedCPP = LightBStrafeCPP + BoosterEStrafeCPP;
        } else if (RectanESelectedCPP) {
            SpeedCPP = LightBSpeedCPP + RectanESpeedCPP + DefenseWSpeedCPP;
            StrafeSpeedCPP = LightBStrafeCPP + RectanEStrafeCPP;
        } else if (PowerESelectedCPP) {
            SpeedCPP = LightBSpeedCPP + PowerESpeedCPP + DefenseWSpeedCPP;
            StrafeSpeedCPP = LightBStrafeCPP + PowerEStrafeCPP;
        }
    }
    else if (MegaSpeedWSelectedCPP)
    {
        // Health
        HealthCPP = LightBHealthCPP + MegaspeedWHealthCPP;
        // Shield    
        ShieldCPP = LightBShieldCPP + MegaspeedWShieldCPP;
        ShieldRegenerationCPP = LightBShieldRegenerationCPP + MegaSpeedWShieldRegenerationCPP;
        ShieldRegenDelayCPP = LightBShieldRegenDelayCPP + MegaspeedWShieldRegendelayCPP;
        // Speed
        if (BoosterESelectedCPP) {
            SpeedCPP = LightBSpeedCPP + BoosterESpeedCPP + MegaspeedWSpeedCPP;
            StrafeSpeedCPP = LightBStrafeCPP + BoosterEStrafeCPP;
        } else if (RectanESelectedCPP) {
            SpeedCPP = LightBSpeedCPP + RectanESpeedCPP + MegaspeedWSpeedCPP;
            StrafeSpeedCPP = LightBStrafeCPP + RectanEStrafeCPP;
        } else if (PowerESelectedCPP) {
            SpeedCPP = LightBSpeedCPP + PowerESpeedCPP + MegaspeedWSpeedCPP;
            StrafeSpeedCPP = LightBStrafeCPP + PowerEStrafeCPP;
        }
    }
    else if (AgilityWSelectedCPP)
    {
        // Health    
        HealthCPP = LightBHealthCPP + AgilityWHealthCPP;

        // Shield
        ShieldCPP = AgilityWShieldCPP + LightBShieldCPP;
        ShieldRegenerationCPP = LightBShieldRegenerationCPP + AgilityWShieldRegenerationCPP;
        ShieldRegenDelayCPP = LightBShieldRegenDelayCPP + AgilityWShieldRegendelayCPP;

        // Speed
        if (BoosterESelectedCPP) {
            SpeedCPP = LightBSpeedCPP + BoosterESpeedCPP + AgilityWSpeedCPP;
            StrafeSpeedCPP = LightBStrafeCPP + BoosterEStrafeCPP;
        } else if (RectanESelectedCPP) {
            SpeedCPP = LightBSpeedCPP + RectanESpeedCPP + AgilityWSpeedCPP;
            StrafeSpeedCPP = LightBStrafeCPP + RectanEStrafeCPP;
        } else if (PowerESelectedCPP) {
            SpeedCPP = LightBSpeedCPP + PowerESpeedCPP + AgilityWSpeedCPP;
            StrafeSpeedCPP = LightBStrafeCPP + PowerEStrafeCPP;
        }
    }
}

void AEditorPlayerCPP::TankBStats()
{
    // Health Regeneration
    HealthRegenerationCPP = TankBHealthRegenerationCPP;
    HealthRegenDelayCPP = TankBHealthRegenDelayCPP;
    // Missile
    MissileCooldownCPP = TankBMissileCooldownCPP;

    if (DefenseWSelectedCPP) 
    {  
        // Health
        HealthCPP = TankBHealthCPP + DefenseWHealthCPP;
        // Shield
        ShieldCPP = TankBShieldCPP + DefenseWShieldCPP;
        ShieldRegenerationCPP = TankBShieldRegenerationCPP + DefenseWShieldRegenerationCPP;
        ShieldRegenDelayCPP = TankBShieldRegenDelayCPP + DefenseWShieldRegendelayCPP;

        // Speed
        if (BoosterESelectedCPP) {
            SpeedCPP = TankBSpeedCPP + BoosterESpeedCPP + DefenseWSpeedCPP;
            StrafeSpeedCPP = TankBStrafeCPP + BoosterEStrafeCPP;
        } else if (RectanESelectedCPP) {
            SpeedCPP = TankBSpeedCPP + RectanESpeedCPP + DefenseWSpeedCPP;
            StrafeSpeedCPP = TankBStrafeCPP + RectanEStrafeCPP;
        } else if (PowerESelectedCPP) {
            SpeedCPP = TankBSpeedCPP + PowerESpeedCPP + DefenseWSpeedCPP;
            StrafeSpeedCPP = TankBStrafeCPP + PowerEStrafeCPP;
        }
    }
    else if (MegaSpeedWSelectedCPP)
    {
        // Health
        HealthCPP = TankBHealthCPP + MegaspeedWHealthCPP;
        // Shield +
        ShieldCPP = TankBShieldCPP + MegaspeedWShieldCPP;
        ShieldRegenerationCPP = TankBShieldRegenerationCPP + MegaSpeedWShieldRegenerationCPP;
        ShieldRegenDelayCPP = TankBShieldRegenDelayCPP + MegaspeedWShieldRegendelayCPP;
        // MegaSpeed + Heavy Speed
        if (BoosterESelectedCPP) {
            SpeedCPP = TankBSpeedCPP + BoosterESpeedCPP + MegaspeedWSpeedCPP;
            StrafeSpeedCPP = TankBStrafeCPP + BoosterEStrafeCPP;
        } else if (RectanESelectedCPP) {
            SpeedCPP = TankBSpeedCPP + RectanESpeedCPP + MegaspeedWSpeedCPP;
            StrafeSpeedCPP = TankBStrafeCPP + RectanEStrafeCPP;
        } else if (PowerESelectedCPP) {
            SpeedCPP = TankBSpeedCPP + PowerESpeedCPP + MegaspeedWSpeedCPP;
            StrafeSpeedCPP = TankBStrafeCPP + PowerEStrafeCPP;
        }
    }
    else if (AgilityWSelectedCPP)
    {
        // Health    
        HealthCPP = TankBHealthCPP + AgilityWHealthCPP;

        // Shield
        ShieldCPP = AgilityWShieldCPP + TankBShieldCPP;
        ShieldRegenerationCPP = TankBShieldRegenerationCPP + AgilityWShieldRegenerationCPP;
        ShieldRegenDelayCPP = TankBShieldRegenDelayCPP + AgilityWShieldRegendelayCPP;

        // Speed
        if (BoosterESelectedCPP) {
            SpeedCPP = TankBSpeedCPP + BoosterESpeedCPP + AgilityWSpeedCPP;
            StrafeSpeedCPP = TankBStrafeCPP + BoosterEStrafeCPP;
        } else if (RectanESelectedCPP) {
            SpeedCPP = TankBSpeedCPP + RectanESpeedCPP + AgilityWSpeedCPP;
            StrafeSpeedCPP = TankBStrafeCPP + RectanEStrafeCPP;
        } else if (PowerESelectedCPP) {
            SpeedCPP = TankBSpeedCPP + PowerESpeedCPP + AgilityWSpeedCPP;
            StrafeSpeedCPP = TankBStrafeCPP + PowerEStrafeCPP;
        }
    }
}

void AEditorPlayerCPP::RectanEStats()
{
    // Boost
    BoostCPP = RectanEBoostCPP;
    BoostMaxCPP = RectanEBoostMaxCPP;
    BoostCooldownCPP = RectanEBoostCooldownCPP;

    if (AgilityWSelectedCPP)
    {   
        // Speed
        if (HeavyBSelectedCPP) {
            SpeedCPP = RectanESpeedCPP + AgilityWSpeedCPP + HeavyBSpeedCPP;
            StrafeSpeedCPP = RectanEStrafeCPP + HeavyBStrafeCPP;
        } else if (LightBSelectedCPP) {
            SpeedCPP = RectanESpeedCPP + AgilityWSpeedCPP + LightBSpeedCPP;
            StrafeSpeedCPP = RectanEStrafeCPP + LightBStrafeCPP;
        } else if (TankBSelectedCPP) {
            SpeedCPP = RectanESpeedCPP + AgilityWSpeedCPP + TankBSpeedCPP;
            StrafeSpeedCPP = RectanEStrafeCPP + TankBStrafeCPP;
        }
    }
    else if (MegaSpeedWSelectedCPP)
    {
        // Speed
        if (HeavyBSelectedCPP) {
            SpeedCPP = RectanESpeedCPP + MegaspeedWSpeedCPP + HeavyBSpeedCPP;
            StrafeSpeedCPP = RectanEStrafeCPP + HeavyBStrafeCPP;
        } else if (LightBSelectedCPP) {
            SpeedCPP = RectanESpeedCPP + MegaspeedWSpeedCPP + LightBSpeedCPP;
            StrafeSpeedCPP = RectanEStrafeCPP + LightBStrafeCPP;
        } else if (TankBSelectedCPP) {
            SpeedCPP = RectanESpeedCPP + MegaspeedWSpeedCPP + TankBSpeedCPP;
            StrafeSpeedCPP = RectanEStrafeCPP + TankBStrafeCPP;
        }
    }
    else if (DefenseWSelectedCPP)
    {
        // Speed
        if (HeavyBSelectedCPP) {
            SpeedCPP = RectanESpeedCPP + DefenseWSpeedCPP + HeavyBSpeedCPP;
            StrafeSpeedCPP = RectanEStrafeCPP + HeavyBStrafeCPP;
        } else if (LightBSelectedCPP) {
            SpeedCPP = RectanESpeedCPP + DefenseWSpeedCPP + LightBSpeedCPP;
            StrafeSpeedCPP = RectanEStrafeCPP + LightBStrafeCPP;
        } else if (TankBSelectedCPP) {
            SpeedCPP = RectanESpeedCPP + DefenseWSpeedCPP + TankBSpeedCPP;
            StrafeSpeedCPP = RectanEStrafeCPP + TankBStrafeCPP;
        }
    } 
}


void AEditorPlayerCPP::BoosterEStats()
{
    // Boost
    BoostCPP = BoosterEBoostCPP;
    BoostMaxCPP = BoosterEBoostMaxCPP;
    BoostCooldownCPP = BoosterEBoostCooldownCPP;

    if (AgilityWSelectedCPP)
    {   
        // Speed
        if (HeavyBSelectedCPP) {
            SpeedCPP = BoosterESpeedCPP + AgilityWSpeedCPP + HeavyBSpeedCPP;
            StrafeSpeedCPP = BoosterEStrafeCPP + HeavyBStrafeCPP;
        } else if (LightBSelectedCPP) {
            SpeedCPP = BoosterESpeedCPP + AgilityWSpeedCPP + LightBSpeedCPP;
            StrafeSpeedCPP = BoosterEStrafeCPP + LightBStrafeCPP;
        } else if (TankBSelectedCPP) {
            SpeedCPP = BoosterESpeedCPP + AgilityWSpeedCPP + TankBSpeedCPP;
            StrafeSpeedCPP = BoosterEStrafeCPP + TankBStrafeCPP;
        }
    }
    else if (MegaSpeedWSelectedCPP)
    {
        // Speed
        if (HeavyBSelectedCPP) {
            SpeedCPP = BoosterESpeedCPP + MegaspeedWSpeedCPP + HeavyBSpeedCPP;
            StrafeSpeedCPP = BoosterEStrafeCPP + HeavyBStrafeCPP;
        } else if (LightBSelectedCPP) {
            SpeedCPP = BoosterESpeedCPP + MegaspeedWSpeedCPP + LightBSpeedCPP;
            StrafeSpeedCPP = BoosterEStrafeCPP + LightBStrafeCPP;
        } else if (TankBSelectedCPP) {
            SpeedCPP = BoosterESpeedCPP + MegaspeedWSpeedCPP + TankBSpeedCPP;
            StrafeSpeedCPP = BoosterEStrafeCPP + TankBStrafeCPP;
        }
    }
    else if (DefenseWSelectedCPP)
    {
        // Speed
        if (HeavyBSelectedCPP) {
            SpeedCPP = BoosterESpeedCPP + DefenseWSpeedCPP + HeavyBSpeedCPP;
            StrafeSpeedCPP = BoosterEStrafeCPP + HeavyBStrafeCPP;
        } else if (LightBSelectedCPP) {
            SpeedCPP = BoosterESpeedCPP + DefenseWSpeedCPP + LightBSpeedCPP;
            StrafeSpeedCPP = BoosterEStrafeCPP + LightBStrafeCPP;
        } else if (TankBSelectedCPP) {
            SpeedCPP = BoosterESpeedCPP + DefenseWSpeedCPP + TankBSpeedCPP;
            StrafeSpeedCPP = BoosterEStrafeCPP + TankBStrafeCPP;
        }
    }
}


void AEditorPlayerCPP::PowerEStats()
{
    // Boost
    BoostCPP = PowerEBoostCPP;
    BoostMaxCPP = PowerEBoostMaxCPP;
    BoostCooldownCPP = PowerEBoostCooldownCPP;

    if (AgilityWSelectedCPP)
    {   
        // Agility + Power Speed 
        if (HeavyBSelectedCPP) {
            SpeedCPP = PowerESpeedCPP + AgilityWSpeedCPP + HeavyBSpeedCPP;
            StrafeSpeedCPP = PowerEStrafeCPP + HeavyBStrafeCPP;
        } else if (LightBSelectedCPP) {
            SpeedCPP = PowerESpeedCPP + AgilityWSpeedCPP + LightBSpeedCPP;
            StrafeSpeedCPP = PowerEStrafeCPP + LightBStrafeCPP;
        } else if (TankBSelectedCPP) {
            SpeedCPP = PowerESpeedCPP + AgilityWSpeedCPP + TankBSpeedCPP;
            StrafeSpeedCPP = PowerEStrafeCPP + TankBStrafeCPP;
        }
    }
    else if (MegaSpeedWSelectedCPP)
    {
        // MegaSpeed + Power Speed
        if (HeavyBSelectedCPP) {
            SpeedCPP = PowerESpeedCPP + MegaspeedWSpeedCPP + HeavyBSpeedCPP;
            StrafeSpeedCPP = PowerEStrafeCPP + HeavyBStrafeCPP;
        } else if (LightBSelectedCPP) {
            SpeedCPP = PowerESpeedCPP + MegaspeedWSpeedCPP + LightBSpeedCPP;
            StrafeSpeedCPP = PowerEStrafeCPP + LightBStrafeCPP;
        } else if (TankBSelectedCPP) {
            SpeedCPP = PowerESpeedCPP + MegaspeedWSpeedCPP + TankBSpeedCPP;
            StrafeSpeedCPP = PowerEStrafeCPP + TankBStrafeCPP;
        }
    }
    else if (DefenseWSelectedCPP)
    {
        // Defense + Power Speed
        if (HeavyBSelectedCPP) {
            SpeedCPP = PowerESpeedCPP + DefenseWSpeedCPP + HeavyBSpeedCPP;
            StrafeSpeedCPP = PowerEStrafeCPP + HeavyBStrafeCPP;
        } else if (LightBSelectedCPP) {
            SpeedCPP = PowerESpeedCPP + DefenseWSpeedCPP + LightBSpeedCPP;
            StrafeSpeedCPP = PowerEStrafeCPP + LightBStrafeCPP;
        } else if (TankBSelectedCPP) {
            SpeedCPP = PowerESpeedCPP + DefenseWSpeedCPP + TankBSpeedCPP;
            StrafeSpeedCPP = PowerEStrafeCPP + TankBStrafeCPP;
        }
    } 
}