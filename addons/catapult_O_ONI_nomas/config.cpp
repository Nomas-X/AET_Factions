class cfgPatches
{
  class AET_F_catapult_O_ONI_nomas
  {
	skipWhenMissingDependencies = 1;
    units[]={"AET_F_catapult_O_ONI_Helicopter_Pilot","AET_F_catapult_O_ONI_Squad_Leader","AET_F_catapult_O_ONI_Medic","AET_F_catapult_O_ONI_Rifleman","AET_F_catapult_O_ONI_Rifleman_Light","AET_F_catapult_O_ONI_Sniper","AET_F_catapult_O_ONI_Spotter","AET_F_catapult_O_ONI_Team_Leader","AET_F_catapult_O_ONI_Officer","AET_F_catapult_O_ONI_D77H_TCI_Pelican","AET_F_catapult_O_ONI_D77H_TCI_SOCOM_Pelican","AET_F_catapult_O_ONI_D77H_TCI_AV_Pelican","AET_F_catapult_O_ONI_M12_APC","AET_F_catapult_O_ONI_M12_LRV_LAAG","AET_F_catapult_O_ONI_M12_FAV","AET_F_catapult_O_ONI_M831_Troop_Transport","AET_F_catapult_O_ONI_Medical_Falcon","AET_F_catapult_O_ONI_MH_144_Falcon","AET_F_catapult_O_ONI_QQ_38_Wren_Drone","AET_F_catapult_O_ONI_QQ_40_Minibee_Black"};
    weapons[]={"AET_F_catapult_O_ONI_OPTRE_M7","AET_F_catapult_O_ONI_OPTRE_M7_OPTRE_M7_silencerOPTRE_M7_FlashlightOPTRE_M7_Sight","AET_F_catapult_O_ONI_OPTRE_M6C_OPTRE_M6C_compensatorOPTRE_M6C_LaserOPTRE_M6C_Scope","AET_F_catapult_O_ONI_OPTRE_SRS99C_OPTRE_SRS99C_Scope","AET_F_catapult_O_ONI_OPTRE_BR45_OPTRE_BMR_LaserOPTRE_BR45_ScopeOPTRE_BR45Grip"};
    requiredVersion=0.1;
    requiredAddons[]={"A3_Weapons_F_Items","A3_Weapons_F","OPTRE_Weapons_SMG","OPTRE_UNSC_Units_Army","A3_Characters_F","CuratorOnly_Characters_F_OPFOR","ace_medical_treatment","tfar_handhelds","OPTRE_Weapons_M6C","OPTRE_Weapons_Items","ace_rangecard","ace_kestrel4500","OPTRE_Weapons_Sniper","OPTRE_Weapons_BR","OPTRE_Vehicles_Wren", "OPTRE_Vehicles_OQ40_Minibee"};
  };
};

class cfgFactionClasses
{
  class AET_F_catapult_O_ONI_nomas
  {
    icon="";
    displayName="ONI - Catapult";
    side=0;
    priority=1;
  };
};


class cfgWeapons
{
  class OPTRE_M7;
  class OPTRE_M6C;
  class OPTRE_SRS99C;
  class OPTRE_BR45;

  class AET_F_catapult_O_ONI_OPTRE_M7: OPTRE_M7
  {
    displayName="M7 Caseless SMG";
    scope=1;
    class LinkedItems
    {
    };
  };

  class AET_F_catapult_O_ONI_OPTRE_M7_OPTRE_M7_silencerOPTRE_M7_FlashlightOPTRE_M7_Sight: OPTRE_M7
  {
    displayName="M7 Caseless SMG";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="OPTRE_M7_silencer";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="OPTRE_M7_Sight";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="OPTRE_M7_Flashlight";
      };
    };
  };

  class AET_F_catapult_O_ONI_OPTRE_M6C_OPTRE_M6C_compensatorOPTRE_M6C_LaserOPTRE_M6C_Scope: OPTRE_M6C
  {
    displayName="M6C/SOCOM Magnum";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="OPTRE_M6C_compensator";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="OPTRE_M6C_Scope";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="OPTRE_M6C_Laser";
      };
    };
  };

  class AET_F_catapult_O_ONI_OPTRE_SRS99C_OPTRE_SRS99C_Scope: OPTRE_SRS99C
  {
    displayName="SRS99C-S2 AM Sniper Rifle";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="OPTRE_SRS99C_Scope";
      };
    };
  };

  class AET_F_catapult_O_ONI_OPTRE_BR45_OPTRE_BMR_LaserOPTRE_BR45_ScopeOPTRE_BR45Grip: OPTRE_BR45
  {
    displayName="BR45B Battle Rifle";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="OPTRE_BR45_Scope";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="OPTRE_BMR_Laser";
      };
      class LinkedItemsUnder
      {
        slot="UnderBarrelSlot";
        item="OPTRE_BR45Grip";
      };
    };
  };

};

class cfgVehicles
{
  class O_helipilot_F;
  class O_Soldier_SL_F;
  class OPTRE_ANPRC_521_Black;
  class O_medic_F;
  class OPTRE_ILCS_Rucksack_Medical;
  class O_Soldier_F;
  class O_Soldier_lite_F;
  class O_sniper_F;
  class O_spotter_F;
  class O_Soldier_TL_F;
  class O_officer_F;
  class OPTRE_Pelican_unarmed;
  class OPTRE_Pelican_unarmed_SOCOM;
  class OPTRE_Pelican_armed;
  class OPTRE_M12_FAV_APC;
  class OPTRE_M12_LRV;
  class OPTRE_M12_FAV;
  class OPTRE_M813_TT;
  class OPTRE_UNSC_falcon_medical;
  class OPTRE_UNSC_falcon_S;
  class OPTRE_UNSC_falcon_armed_S : OPTRE_UNSC_falcon_S
  {
	class Turrets;
  };
  class OPTRE_UNSC_MH_144S_Falcon : OPTRE_UNSC_falcon_armed_S
  {
	class Turrets : Turrets
	{
		class LeftDoorGun;
		class RightDoorGun;
	};
  };
  class OPTRE_OQ_38_Wren_Drone_UNSC;
  class OPTRE_OQ40_Minibee_Black_UNSC;

  class AET_F_catapult_O_ONI_Helicopter_Pilot: O_helipilot_F
  {
    faction="AET_F_catapult_O_ONI_nomas";
    side=0;
    displayName="Helicopter Pilot";
    uniformClass="OPTRE_UNSC_Army_Uniform_BLK";
    weapons[]={"OPTRE_Binoculars","AET_F_catapult_O_ONI_OPTRE_M7","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","AET_F_catapult_O_ONI_OPTRE_M7","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"OPTRE_48Rnd_5x23mm_Mag","OPTRE_48Rnd_5x23mm_Mag","OPTRE_48Rnd_5x23mm_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M8_Flare","OPTRE_M8_Flare"};
    respawnMagazines[]={"OPTRE_48Rnd_5x23mm_Mag","OPTRE_48Rnd_5x23mm_Mag","OPTRE_48Rnd_5x23mm_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M8_Flare","OPTRE_M8_Flare"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","OPTRE_UNSC_VX16_Helmet_Mask","OPTRE_UNSC_M52A_Armor_Pilot_AF","OPTRE_NVG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","OPTRE_UNSC_VX16_Helmet_Mask","OPTRE_UNSC_M52A_Armor_Pilot_AF","OPTRE_NVG"};
    backpack="";
  };

  class AET_F_catapult_O_ONI_Squad_Leader: O_Soldier_SL_F
  {
    faction="AET_F_catapult_O_ONI_nomas";
    side=0;
    displayName="Squad Leader";
    uniformClass="OPTRE_UNSC_ODST_Uniform";
    weapons[]={"OPTRE_Binoculars","AET_F_catapult_O_ONI_OPTRE_M7_OPTRE_M7_silencerOPTRE_M7_FlashlightOPTRE_M7_Sight","AET_F_catapult_O_ONI_OPTRE_M6C_OPTRE_M6C_compensatorOPTRE_M6C_LaserOPTRE_M6C_Scope","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","AET_F_catapult_O_ONI_OPTRE_M7_OPTRE_M7_silencerOPTRE_M7_FlashlightOPTRE_M7_Sight","AET_F_catapult_O_ONI_OPTRE_M6C_OPTRE_M6C_compensatorOPTRE_M6C_LaserOPTRE_M6C_Scope","Put","Throw"};
    items[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Blue","OPTRE_M2_Smoke_Blue"};
    respawnMagazines[]={"OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Blue","OPTRE_M2_Smoke_Blue"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","OPTRE_UNSC_Recon_Helmet","OPTRE_UNSC_M52A_Armor_TL_URB","OPTRE_NVG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","OPTRE_UNSC_Recon_Helmet","OPTRE_UNSC_M52A_Armor_TL_URB","OPTRE_NVG"};
    backpack="AET_F_catapult_O_ONI_Squad_Leader_pack";
  };

  class AET_F_catapult_O_ONI_Medic: O_medic_F
  {
    faction="AET_F_catapult_O_ONI_nomas";
    side=0;
    displayName="Medic";
    uniformClass="OPTRE_UNSC_ODST_Uniform";
    weapons[]={"OPTRE_Binoculars","AET_F_catapult_O_ONI_OPTRE_M7_OPTRE_M7_silencerOPTRE_M7_FlashlightOPTRE_M7_Sight","AET_F_catapult_O_ONI_OPTRE_M6C_OPTRE_M6C_compensatorOPTRE_M6C_LaserOPTRE_M6C_Scope","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","AET_F_catapult_O_ONI_OPTRE_M7_OPTRE_M7_silencerOPTRE_M7_FlashlightOPTRE_M7_Sight","AET_F_catapult_O_ONI_OPTRE_M6C_OPTRE_M6C_compensatorOPTRE_M6C_LaserOPTRE_M6C_Scope","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","Medikit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Medigel","OPTRE_Medigel","OPTRE_Medigel","OPTRE_Medigel","OPTRE_Medigel"};
    respawnItems[]={"FirstAidKit","FirstAidKit","Medikit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Medigel","OPTRE_Medigel","OPTRE_Medigel","OPTRE_Medigel","OPTRE_Medigel"};
    magazines[]={"OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag"};
    respawnMagazines[]={"OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","OPTRE_UNSC_Recon_Helmet","OPTRE_UNSC_M52A_Armor_Medic_URB","OPTRE_NVG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","OPTRE_UNSC_Recon_Helmet","OPTRE_UNSC_M52A_Armor_Medic_URB","OPTRE_NVG"};
    backpack="AET_F_catapult_O_ONI_Medic_pack";
  };

  class AET_F_catapult_O_ONI_Rifleman: O_Soldier_F
  {
    faction="AET_F_catapult_O_ONI_nomas";
    side=0;
    displayName="Rifleman";
    uniformClass="OPTRE_UNSC_ODST_Uniform";
    weapons[]={"OPTRE_Binoculars","AET_F_catapult_O_ONI_OPTRE_M7_OPTRE_M7_silencerOPTRE_M7_FlashlightOPTRE_M7_Sight","AET_F_catapult_O_ONI_OPTRE_M6C_OPTRE_M6C_compensatorOPTRE_M6C_LaserOPTRE_M6C_Scope","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","AET_F_catapult_O_ONI_OPTRE_M7_OPTRE_M7_silencerOPTRE_M7_FlashlightOPTRE_M7_Sight","AET_F_catapult_O_ONI_OPTRE_M6C_OPTRE_M6C_compensatorOPTRE_M6C_LaserOPTRE_M6C_Scope","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag"};
    respawnMagazines[]={"OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","OPTRE_UNSC_Recon_Helmet","OPTRE_UNSC_M52A_Armor_Rifleman_URB","OPTRE_NVG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","OPTRE_UNSC_Recon_Helmet","OPTRE_UNSC_M52A_Armor_Rifleman_URB","OPTRE_NVG"};
    backpack="";
  };

  class AET_F_catapult_O_ONI_Rifleman_Light: O_Soldier_lite_F
  {
    faction="AET_F_catapult_O_ONI_nomas";
    side=0;
    displayName="Rifleman Light";
    uniformClass="OPTRE_UNSC_ODST_Uniform";
    weapons[]={"OPTRE_Binoculars","AET_F_catapult_O_ONI_OPTRE_M7_OPTRE_M7_silencerOPTRE_M7_FlashlightOPTRE_M7_Sight","AET_F_catapult_O_ONI_OPTRE_M6C_OPTRE_M6C_compensatorOPTRE_M6C_LaserOPTRE_M6C_Scope","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","AET_F_catapult_O_ONI_OPTRE_M7_OPTRE_M7_silencerOPTRE_M7_FlashlightOPTRE_M7_Sight","AET_F_catapult_O_ONI_OPTRE_M6C_OPTRE_M6C_compensatorOPTRE_M6C_LaserOPTRE_M6C_Scope","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag"};
    respawnMagazines[]={"OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","OPTRE_UNSC_Recon_Helmet","OPTRE_UNSC_M52A_Armor3_URB","OPTRE_NVG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","OPTRE_UNSC_Recon_Helmet","OPTRE_UNSC_M52A_Armor3_URB","OPTRE_NVG"};
    backpack="";
  };

  class AET_F_catapult_O_ONI_Sniper: O_sniper_F
  {
    faction="AET_F_catapult_O_ONI_nomas";
    side=0;
    displayName="Sniper";
    uniformClass="OPTRE_UNSC_ODST_Uniform";
    weapons[]={"OPTRE_Smartfinder","AET_F_catapult_O_ONI_OPTRE_SRS99C_OPTRE_SRS99C_Scope","AET_F_catapult_O_ONI_OPTRE_M6C_OPTRE_M6C_compensatorOPTRE_M6C_LaserOPTRE_M6C_Scope","Put","Throw"};
    respawnWeapons[]={"OPTRE_Smartfinder","AET_F_catapult_O_ONI_OPTRE_SRS99C_OPTRE_SRS99C_Scope","AET_F_catapult_O_ONI_OPTRE_M6C_OPTRE_M6C_compensatorOPTRE_M6C_LaserOPTRE_M6C_Scope","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","ACE_RangeCard","ACE_Kestrel4500"};
    respawnItems[]={"FirstAidKit","FirstAidKit","ACE_RangeCard","ACE_Kestrel4500"};
    magazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_4Rnd_145x114_APFSDS_Mag_D","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag"};
    respawnMagazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_4Rnd_145x114_APFSDS_Mag_D","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","OPTRE_NVGT_C","OPTRE_Smartfinder","OPTRE_UNSC_Recon_Helmet","OPTRE_UNSC_M52A_Armor_Sniper_URB","OPTRE_NVGT_C"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","OPTRE_NVGT_C","OPTRE_Smartfinder","OPTRE_UNSC_Recon_Helmet","OPTRE_UNSC_M52A_Armor_Sniper_URB","OPTRE_NVGT_C"};
    backpack="";
  };

  class AET_F_catapult_O_ONI_Spotter: O_spotter_F
  {
    faction="AET_F_catapult_O_ONI_nomas";
    side=0;
    displayName="Spotter";
    uniformClass="OPTRE_UNSC_ODST_Uniform";
    weapons[]={"OPTRE_Binoculars","AET_F_catapult_O_ONI_OPTRE_BR45_OPTRE_BMR_LaserOPTRE_BR45_ScopeOPTRE_BR45Grip","AET_F_catapult_O_ONI_OPTRE_M6C_OPTRE_M6C_compensatorOPTRE_M6C_LaserOPTRE_M6C_Scope","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","AET_F_catapult_O_ONI_OPTRE_BR45_OPTRE_BMR_LaserOPTRE_BR45_ScopeOPTRE_BR45Grip","AET_F_catapult_O_ONI_OPTRE_M6C_OPTRE_M6C_compensatorOPTRE_M6C_LaserOPTRE_M6C_Scope","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag"};
    respawnMagazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","OPTRE_UNSC_Recon_Helmet","OPTRE_UNSC_M52A_Armor_Marksman_URB","OPTRE_NVG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","OPTRE_UNSC_Recon_Helmet","OPTRE_UNSC_M52A_Armor_Marksman_URB","OPTRE_NVG"};
    backpack="";
  };

  class AET_F_catapult_O_ONI_Team_Leader: O_Soldier_TL_F
  {
    faction="AET_F_catapult_O_ONI_nomas";
    side=0;
    displayName="Team Leader";
    uniformClass="OPTRE_UNSC_ODST_Uniform";
    weapons[]={"OPTRE_Binoculars","AET_F_catapult_O_ONI_OPTRE_M7_OPTRE_M7_silencerOPTRE_M7_FlashlightOPTRE_M7_Sight","AET_F_catapult_O_ONI_OPTRE_M6C_OPTRE_M6C_compensatorOPTRE_M6C_LaserOPTRE_M6C_Scope","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","AET_F_catapult_O_ONI_OPTRE_M7_OPTRE_M7_silencerOPTRE_M7_FlashlightOPTRE_M7_Sight","AET_F_catapult_O_ONI_OPTRE_M6C_OPTRE_M6C_compensatorOPTRE_M6C_LaserOPTRE_M6C_Scope","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Blue","OPTRE_M2_Smoke_Blue"};
    respawnMagazines[]={"OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Blue","OPTRE_M2_Smoke_Blue"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","OPTRE_UNSC_Recon_Helmet","OPTRE_UNSC_M52A_Armor_TL_URB","OPTRE_NVG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","OPTRE_UNSC_Recon_Helmet","OPTRE_UNSC_M52A_Armor_TL_URB","OPTRE_NVG"};
    backpack="";
  };

  class AET_F_catapult_O_ONI_Officer: O_officer_F
  {
    faction="AET_F_catapult_O_ONI_nomas";
    side=0;
    displayName="Officer";
    uniformClass="OPTRE_UNSC_ODST_Uniform";
    weapons[]={"OPTRE_Binoculars","AET_F_catapult_O_ONI_OPTRE_M7_OPTRE_M7_silencerOPTRE_M7_FlashlightOPTRE_M7_Sight","AET_F_catapult_O_ONI_OPTRE_M6C_OPTRE_M6C_compensatorOPTRE_M6C_LaserOPTRE_M6C_Scope","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","AET_F_catapult_O_ONI_OPTRE_M7_OPTRE_M7_silencerOPTRE_M7_FlashlightOPTRE_M7_Sight","AET_F_catapult_O_ONI_OPTRE_M6C_OPTRE_M6C_compensatorOPTRE_M6C_LaserOPTRE_M6C_Scope","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Blue","OPTRE_M2_Smoke_Blue"};
    respawnMagazines[]={"OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Blue","OPTRE_M2_Smoke_Blue"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","VES_Beret_CPD","OPTRE_UNSC_M52A_Armor_TL_URB","OPTRE_NVG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","VES_Beret_CPD","OPTRE_UNSC_M52A_Armor_TL_URB","OPTRE_NVG"};
    backpack="";
  };

  class AET_F_catapult_O_ONI_D77H_TCI_Pelican: OPTRE_Pelican_unarmed
  {
    faction="AET_F_catapult_O_ONI_nomas";
    side=0;
    displayName="D77H TCI Pelican";
    hiddenSelectionsTextures[]={"optre_vehicles\pelican\data\pelicanexterior_black_co.paa","","","","",""};
    crew="AET_F_catapult_O_ONI_Helicopter_Pilot";
    typicalCargo[]={"AET_F_catapult_O_ONI_Helicopter_Pilot"};
  };

  class AET_F_catapult_O_ONI_D77H_TCI_SOCOM_Pelican: OPTRE_Pelican_unarmed_SOCOM
  {
    faction="AET_F_catapult_O_ONI_nomas";
    side=0;
    displayName="D77H TCI SOCOM Pelican";
    hiddenSelectionsTextures[]={"optre_vehicles\pelican\data\pelicanexterior_black_co.paa","","","","",""};
    crew="AET_F_catapult_O_ONI_Helicopter_Pilot";
    typicalCargo[]={"AET_F_catapult_O_ONI_Helicopter_Pilot"};
  };

  class AET_F_catapult_O_ONI_D77H_TCI_AV_Pelican: OPTRE_Pelican_armed
  {
    faction="AET_F_catapult_O_ONI_nomas";
    side=0;
    displayName="D77H TCI AV Pelican";
    hiddenSelectionsTextures[]={"optre_vehicles\pelican\data\pelicanexterior_black_co.paa","","","",""};
    crew="AET_F_catapult_O_ONI_Helicopter_Pilot";
    typicalCargo[]={"AET_F_catapult_O_ONI_Helicopter_Pilot"};
  };

  class AET_F_catapult_O_ONI_M12_APC: OPTRE_M12_FAV_APC
  {
    faction="AET_F_catapult_O_ONI_nomas";
    side=0;
    displayName="M12 APC";
    hiddenSelectionsTextures[]={"optre_vehicles\warthog\data\night\m12hogmaav_extupper_night_co.paa","optre_vehicles\warthog\data\night\m12hogmaav_extunder_night_co.paa","optre_vehicles\warthog\data\night\transp_lopo_night_co.paa","optre_vehicles\warthog\data\night\hog_apc_night_co.paa","optre_vehicles\warthog\data\decals_ca.paa","optre_vehicles\warthog\data\night\m12hogmaav_interior_night_co.paa","optre_vehicles\warthog\data\warthog_transport_decals_ca.paa","optre_vehicles\warthog\data\warthog_transport_net_ca.paa"};
    crew="AET_F_catapult_O_ONI_Rifleman";
    typicalCargo[]={"AET_F_catapult_O_ONI_Rifleman"};
  };

  class AET_F_catapult_O_ONI_M12_LRV_LAAG: OPTRE_M12_LRV
  {
    faction="AET_F_catapult_O_ONI_nomas";
    side=0;
    displayName="M12 LRV LAAG";
    hiddenSelectionsTextures[]={"optre_vehicles\warthog\data\night\m12hogmaav_extupper_night_co.paa","optre_vehicles\warthog\data\night\m12hogmaav_extunder_night_co.paa","optre_vehicles\warthog\data\night\m12_turret_night_co.paa","optre_vehicles\warthog\data\decals_ca.paa","optre_vehicles\warthog\data\night\m12hogmaav_interior_night_co.paa","optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa","optre_vehicles\warthog\data\turrets\sight_co.paa","optre_vehicles\warthog\data\night\hog_apc_night_co.paa"};
    crew="AET_F_catapult_O_ONI_Rifleman";
    typicalCargo[]={"AET_F_catapult_O_ONI_Rifleman"};
  };

  class AET_F_catapult_O_ONI_M12_FAV: OPTRE_M12_FAV
  {
    faction="AET_F_catapult_O_ONI_nomas";
    side=0;
    displayName="M12 FAV";
    hiddenSelectionsTextures[]={"optre_vehicles\warthog\data\night\m12hogmaav_extupper_night_co.paa","optre_vehicles\warthog\data\night\m12hogmaav_extunder_night_co.paa","optre_vehicles\warthog\data\decals_ca.paa","optre_vehicles\warthog\data\night\m12hogmaav_interior_night_co.paa","optre_vehicles\warthog\data\night\hog_apc_night_co.paa"};
    crew="AET_F_catapult_O_ONI_Rifleman";
    typicalCargo[]={"AET_F_catapult_O_ONI_Rifleman"};
  };

  class AET_F_catapult_O_ONI_M831_Troop_Transport: OPTRE_M813_TT
  {
    faction="AET_F_catapult_O_ONI_nomas";
    side=0;
    displayName="M831 Troop Transport";
    hiddenSelectionsTextures[]={"optre_vehicles\warthog\data\night\m12hogmaav_extupper_night_co.paa","optre_vehicles\warthog\data\night\m12hogmaav_extunder_night_co.paa","optre_vehicles\warthog\data\night\transp_lopo_night_co.paa","optre_vehicles\warthog\data\decals_ca.paa","optre_vehicles\warthog\data\night\m12hogmaav_interior_night_co.paa","optre_vehicles\warthog\data\warthog_transport_net_ca.paa","optre_vehicles\warthog\data\warthog_transport_decals_ca.paa"};
    crew="AET_F_catapult_O_ONI_Rifleman";
    typicalCargo[]={"AET_F_catapult_O_ONI_Rifleman"};
  };

  class AET_F_catapult_O_ONI_Medical_Falcon: OPTRE_UNSC_falcon_medical
  {
    faction="AET_F_catapult_O_ONI_nomas";
    side=0;
    displayName="Medical Falcon";
    hiddenSelectionsTextures[]={"optre_vehicles_air\falcon\data\black\falcon_main_co.paa","optre_vehicles_air\falcon\data\black\falcon_attachments_co.paa","optre_vehicles_air\falcon\data\falcon_interior_co.paa","optre_vehicles_air\falcon\data\falcon_glass_ca.paa","optre_vehicles_air\falcon\data\falcon_glass_ca.paa","optre_vehicles_air\falcon\data\medical\camomedical_co.paa","optre_vehicles_air\falcon\data\decal\medical\falcon_decal_ca.paa"};
    crew="AET_F_catapult_O_ONI_Helicopter_Pilot";
    typicalCargo[]={"AET_F_catapult_O_ONI_Helicopter_Pilot"};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
	class TransportBackpacks {};
  };

  class AET_F_catapult_O_ONI_MH_144_Falcon: OPTRE_UNSC_MH_144S_Falcon
  {
    faction="AET_F_catapult_O_ONI_nomas";
    side=0;
    displayName="MH 144 Falcon";
    hiddenSelectionsTextures[]={"optre_vehicles_air\falcon\data\black\falcon_main_co.paa","optre_vehicles_air\falcon\data\black\falcon_attachments_co.paa","optre_vehicles_air\falcon\data\falcon_interior_co.paa","optre_vehicles_air\falcon\data\falcon_glass_ca.paa","optre_vehicles_air\falcon\data\falcon_glass_ca.paa","optre_vehicles_air\falcon\data\decal\unsc_var1\falcon_decal_ca.paa"};
    crew="AET_F_catapult_O_ONI_Helicopter_Pilot";
    typicalCargo[]={"AET_F_catapult_O_ONI_Helicopter_Pilot"};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
	class TransportBackpacks {};
	class Turrets : Turrets
	{
		class LeftDoorGun : LeftDoorGun
		{
			gunnerType="AET_F_catapult_O_ONI_Rifleman_Light";
		};
		class RightDoorGun : RightDoorGun
		{
			gunnerType="AET_F_catapult_O_ONI_Rifleman_Light";
		};
	};
  };

  class AET_F_catapult_O_ONI_QQ_38_Wren_Drone : OPTRE_OQ_38_Wren_Drone_UNSC
  {
    faction="AET_F_catapult_O_ONI_nomas";
    side=0;
    displayName="QQ 38 Wren Drone";
  };

  class AET_F_catapult_O_ONI_QQ_40_Minibee_Black : OPTRE_OQ40_Minibee_Black_UNSC
  {
    faction="AET_F_catapult_O_ONI_nomas";
    side=0;
    displayName="QQ 38 Wren Drone";
  };

  class AET_F_catapult_O_ONI_Squad_Leader_pack: OPTRE_ANPRC_521_Black
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class AET_F_catapult_O_ONI_Medic_pack: OPTRE_ILCS_Rucksack_Medical
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_Medikit {count=1;name="Medikit";};
     class _xx_FirstAidKit {count=10;name="FirstAidKit";};
     class _xx_OPTRE_Biofoam {count=5;name="OPTRE_Biofoam";};
     class _xx_OPTRE_Medigel {count=5;name="OPTRE_Medigel";};
    };
    class TransportWeapons{};
  };

};

//////////////// Paste cfgGroups after this line //////////////// 
class cfgGroups
{  
  class EAST
  {
    name="OPFOR";
    class AET_F_catapult_O_ONI_F
    {
      name="ONI - Catapult";

      class Infantry
      {
        name="Infantry";

        class AET_F_catapult_O_ONI_O_Squad_Large
        {
          name="Squad Large";
          faction="AET_F_catapult_O_ONI_nomas";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="AET_F_catapult_O_ONI_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="AET_F_catapult_O_ONI_Team_Leader";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="AET_F_catapult_O_ONI_Medic";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="AET_F_catapult_O_ONI_Rifleman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=0;
            vehicle="AET_F_catapult_O_ONI_Rifleman";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=0;
            vehicle="AET_F_catapult_O_ONI_Rifleman";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=0;
            vehicle="AET_F_catapult_O_ONI_Rifleman";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit7
          {
            side=0;
            vehicle="AET_F_catapult_O_ONI_Rifleman";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
        };
        class AET_F_catapult_O_ONI_O_Squad_Small
        {
          name="Squad Small";
          faction="AET_F_catapult_O_ONI_nomas";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="AET_F_catapult_O_ONI_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="AET_F_catapult_O_ONI_Medic";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="AET_F_catapult_O_ONI_Rifleman";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="AET_F_catapult_O_ONI_Rifleman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=0;
            vehicle="AET_F_catapult_O_ONI_Rifleman";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
        };
        class AET_F_catapult_O_ONI_O_Fire_Team
        {
          name="Fire Team";
          faction="AET_F_catapult_O_ONI_nomas";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="AET_F_catapult_O_ONI_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="AET_F_catapult_O_ONI_Rifleman";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="AET_F_catapult_O_ONI_Rifleman";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
        };
        class AET_F_catapult_O_ONI_O_Patrol
        {
          name="Patrol";
          faction="AET_F_catapult_O_ONI_nomas";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="AET_F_catapult_O_ONI_Rifleman";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="AET_F_catapult_O_ONI_Rifleman";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
        };
        class AET_F_catapult_O_ONI_O_Sniper_Team
        {
          name="Sniper Team";
          faction="AET_F_catapult_O_ONI_nomas";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="AET_F_catapult_O_ONI_Sniper";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="AET_F_catapult_O_ONI_Spotter";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
        };
      };
      class Motorized
      {
        name="Motorized";

        class AET_F_catapult_O_ONI_O_M12_APC
        {
          name="M12 APC";
          faction="AET_F_catapult_O_ONI_nomas";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="AET_F_catapult_O_ONI_M12_APC";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="AET_F_catapult_O_ONI_Team_Leader";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=0;
            vehicle="AET_F_catapult_O_ONI_Medic";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=0;
            vehicle="AET_F_catapult_O_ONI_Rifleman";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
          class Unit4
          {
            side=0;
            vehicle="AET_F_catapult_O_ONI_Rifleman";
            rank="PRIVATE";
            position[]={0,-60,0};
          };
          class Unit5
          {
            side=0;
            vehicle="AET_F_catapult_O_ONI_Rifleman";
            rank="PRIVATE";
            position[]={0,-75,0};
          };
        };
        class AET_F_catapult_O_ONI_O_M831_Troop_Transport
        {
          name="M831 Troop Transport";
          faction="AET_F_catapult_O_ONI_nomas";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="AET_F_catapult_O_ONI_M831_Troop_Transport";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="AET_F_catapult_O_ONI_Team_Leader";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=0;
            vehicle="AET_F_catapult_O_ONI_Medic";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=0;
            vehicle="AET_F_catapult_O_ONI_Rifleman";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
          class Unit4
          {
            side=0;
            vehicle="AET_F_catapult_O_ONI_Rifleman";
            rank="PRIVATE";
            position[]={0,-60,0};
          };
          class Unit5
          {
            side=0;
            vehicle="AET_F_catapult_O_ONI_Rifleman";
            rank="PRIVATE";
            position[]={0,-75,0};
          };
          class Unit6
          {
            side=0;
            vehicle="AET_F_catapult_O_ONI_Rifleman";
            rank="PRIVATE";
            position[]={0,-90,0};
          };
          class Unit7
          {
            side=0;
            vehicle="AET_F_catapult_O_ONI_Rifleman";
            rank="PRIVATE";
            position[]={0,-105,0};
          };
        };
      };
      class Mechanized
      {
        name="Mechanized";

      };
      class Armored
      {
        name="Armored";

      };
      class SpecOps
      {
        name="Special Forces";

      };
      class Support
      {
        name="Support Infantry";

      };
      class Airborne
      {
        name="Airborne";

      };
      class Air
      {
        name="Air";

      };
    };
  };
};
