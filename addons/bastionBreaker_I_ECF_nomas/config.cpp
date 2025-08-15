class cfgPatches
{
  class AET_F_bastionBreaker_I_ECF_nomas
  {
	skipWhenMissingDependencies = 1;
    units[]={"AET_F_bastionBreaker_I_ECF_Rifleman","AET_F_bastionBreaker_I_ECF_Medic","AET_F_bastionBreaker_I_ECF_AT_Specialist","AET_F_bastionBreaker_I_ECF_AA_Specialist","AET_F_bastionBreaker_I_ECF_Marksman","AET_F_bastionBreaker_I_ECF_Machine_Gunner","AET_F_bastionBreaker_I_ECF_UAV_Operator","AET_F_bastionBreaker_I_ECF_Squad_Leader","AET_F_bastionBreaker_I_ECF_Crewman","AET_F_bastionBreaker_I_ECF_Officer","AET_F_bastionBreaker_I_ECF_Skimmer_Drone_Man","AET_F_bastionBreaker_I_ECF_SF_Sniper","AET_F_bastionBreaker_I_ECF_SF_Spotter","AET_F_bastionBreaker_I_ECF_SF_Team_Leader","AET_F_bastionBreaker_I_ECF_SF_Rifleman_SG","AET_F_bastionBreaker_I_ECF_SF_Rifleman","AET_F_bastionBreaker_I_ECF_SF_Marksman","AET_F_bastionBreaker_I_ECF_SF_AT_Specialist","AET_F_bastionBreaker_I_ECF_SF_Medic","AET_F_bastionBreaker_I_ECF_SF_AA_Specialist","AET_F_bastionBreaker_I_ECF_Helicopter_Pilot","AET_F_bastionBreaker_I_ECF_Pilot","AET_F_bastionBreaker_I_ECF_TC_15_Bearcat_SHORAD","AET_F_bastionBreaker_I_ECF_TC_15_Bearcat_APC","AET_F_bastionBreaker_I_ECF_TC_15_Bearcat_FSV","AET_F_bastionBreaker_I_ECF_TC_15_Bearcat_IFV","AET_F_bastionBreaker_I_ECF_AH_44_A_Dragonfly","AET_F_bastionBreaker_I_ECF_AH_44_S_Dragonfly","AET_F_bastionBreaker_I_ECF_General_Utility_Shuttle_A","AET_F_bastionBreaker_I_ECF_General_Utility_Shuttle_M","AET_F_bastionBreaker_I_ECF_G10_MRAP","AET_F_bastionBreaker_I_ECF_G10_MRAP_A","AET_F_bastionBreaker_I_ECF_G12_Truck_Transport_Armed","AET_F_bastionBreaker_I_ECF_G12_Truck_Transport_Closed","AET_F_bastionBreaker_I_ECF_G12_Truck_Transport_Open","AET_F_bastionBreaker_I_ECF_UT_53_I_Comanche_Dropship","AET_F_bastionBreaker_I_ECF_UT_53_V_Comanche_Dropship"};
    weapons[]={"AET_F_bastionBreaker_I_ECF_SC_Rifle_AR12_acc_flashlightoptic_SRS","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","AET_F_bastionBreaker_I_ECF_SC_Rifle_AR12C_acc_flashlightoptic_SRS","AET_F_bastionBreaker_I_ECF_SC_MPML_SC_MPML_Scope","AET_F_bastionBreaker_I_ECF_launch_B_Titan_olive_F","AET_F_bastionBreaker_I_ECF_SC_Rifle_AR12_acc_flashlightSC_TSO55","AET_F_bastionBreaker_I_ECF_SC_Rifle_PKMP_optic_SRS","AET_F_bastionBreaker_I_ECF_SC_Rifle_Ghoul_acc_flashlightoptic_Yorris","AET_F_bastionBreaker_I_ECF_SC_SkimmerDroneGun","AET_F_bastionBreaker_I_ECF_SC_Rifle_SSR55_SC_TSO55bipod_01_F_blk","AET_F_bastionBreaker_I_ECF_SC_Rifle_SSR55C_SC_TSO55bipod_01_F_blk","AET_F_bastionBreaker_I_ECF_arifle_MSBS65_GL_black_F_muzzle_snds_65_TI_blk_Facc_pointer_IRoptic_ico_01_black_f","AET_F_bastionBreaker_I_ECF_arifle_MSBS65_black_F_muzzle_snds_65_TI_blk_Facc_pointer_IRoptic_ico_01_black_f","AET_F_bastionBreaker_I_ECF_arifle_MSBS65_UBS_black_F_muzzle_snds_65_TI_blk_Facc_pointer_IRoptic_ico_01_black_f","AET_F_bastionBreaker_I_ECF_arifle_MSBS65_Mark_black_F_muzzle_snds_65_TI_blk_Facc_pointer_IRoptic_ico_01_black_fbipod_01_F_blk"};
    requiredVersion=0.1;
    requiredAddons[]={"ace_medical_treatment","A3_Weapons_F","sc_weapons","screborn_uniforms","A3_Characters_F","A3_Weapons_F_Items","A3_Weapons_F_Enoch_Launchers_Titan","SC_RebornUnits_Earth_Colonies_Federation","A3_Drones_F_Weapons_F_Gamma_Items","SC_Scion_Empire_Metro_Police_Scion_Empire_Metro_Police","sc_newequipment","SC_newequipment2","A3_Weapons_F_Enoch_Rifles_MSBS"};
  };
};

class cfgFactionClasses
{
  class AET_F_bastionBreaker_I_ECF_nomas
  {
    icon="";
    displayName="ECF - Bastion Breaker";
    side=2;
    priority=1;
  };
};


class cfgWeapons
{
  class SC_Rifle_AR12;
  class SC_Pistol_SSP9;
  class SC_Rifle_AR12C;
  class SC_MPML;
  class launch_B_Titan_olive_F;
  class SC_Rifle_PKMP;
  class SC_Rifle_Ghoul;
  class SC_SkimmerDroneGun;
  class SC_Rifle_SSR55;
  class SC_Rifle_SSR55C;
  class arifle_MSBS65_GL_black_F;
  class arifle_MSBS65_black_F;
  class arifle_MSBS65_UBS_black_F;
  class arifle_MSBS65_Mark_black_F;

  class AET_F_bastionBreaker_I_ECF_SC_Rifle_AR12_acc_flashlightoptic_SRS: SC_Rifle_AR12
  {
    displayName="AR12";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_SRS";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_flashlight";
      };
    };
  };

  class AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9: SC_Pistol_SSP9
  {
    displayName="SSP-9";
    scope=1;
    class LinkedItems
    {
    };
  };

  class AET_F_bastionBreaker_I_ECF_SC_Rifle_AR12C_acc_flashlightoptic_SRS: SC_Rifle_AR12C
  {
    displayName="AR12C";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_SRS";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_flashlight";
      };
    };
  };

  class AET_F_bastionBreaker_I_ECF_SC_MPML_SC_MPML_Scope: SC_MPML
  {
    displayName="MPML";
    scope=1;
    class LinkedItems
    {

    };
  };

  class AET_F_bastionBreaker_I_ECF_launch_B_Titan_olive_F: launch_B_Titan_olive_F
  {
    displayName="Titan MPRL (Olive)";
    scope=1;
    class LinkedItems
    {
    };
  };

  class AET_F_bastionBreaker_I_ECF_SC_Rifle_AR12_acc_flashlightSC_TSO55: SC_Rifle_AR12
  {
    displayName="AR12";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="SC_TSO55";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_flashlight";
      };
    };
  };

  class AET_F_bastionBreaker_I_ECF_SC_Rifle_PKMP_optic_SRS: SC_Rifle_PKMP
  {
    displayName="PKMP";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_SRS";
      };
    };
  };

  class AET_F_bastionBreaker_I_ECF_SC_Rifle_Ghoul_acc_flashlightoptic_Yorris: SC_Rifle_Ghoul
  {
    displayName="Kodiak Ghoul-M3";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_Yorris";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_flashlight";
      };
    };
  };

  class AET_F_bastionBreaker_I_ECF_SC_SkimmerDroneGun: SC_SkimmerDroneGun
  {
    displayName="ECF Skimmer Drone Gun";
    scope=1;
    class LinkedItems
    {
    };
  };

  class AET_F_bastionBreaker_I_ECF_SC_Rifle_SSR55_SC_TSO55bipod_01_F_blk: SC_Rifle_SSR55
  {
    displayName="SSR-55";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="SC_TSO55";
      };
      class LinkedItemsUnder
      {
        slot="UnderBarrelSlot";
        item="bipod_01_F_blk";
      };
    };
  };

  class AET_F_bastionBreaker_I_ECF_SC_Rifle_SSR55C_SC_TSO55bipod_01_F_blk: SC_Rifle_SSR55C
  {
    displayName="SSR-55 Compact";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="SC_TSO55";
      };
      class LinkedItemsUnder
      {
        slot="UnderBarrelSlot";
        item="bipod_01_F_blk";
      };
    };
  };

  class AET_F_bastionBreaker_I_ECF_arifle_MSBS65_GL_black_F_muzzle_snds_65_TI_blk_Facc_pointer_IRoptic_ico_01_black_f: arifle_MSBS65_GL_black_F
  {
    displayName="MSBS Grot GL (Black)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="muzzle_snds_65_TI_blk_F";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_ico_01_black_f";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_pointer_IR";
      };
    };
  };

  class AET_F_bastionBreaker_I_ECF_arifle_MSBS65_black_F_muzzle_snds_65_TI_blk_Facc_pointer_IRoptic_ico_01_black_f: arifle_MSBS65_black_F
  {
    displayName="MSBS Grot (Black)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="muzzle_snds_65_TI_blk_F";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_ico_01_black_f";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_pointer_IR";
      };
    };
  };

  class AET_F_bastionBreaker_I_ECF_arifle_MSBS65_UBS_black_F_muzzle_snds_65_TI_blk_Facc_pointer_IRoptic_ico_01_black_f: arifle_MSBS65_UBS_black_F
  {
    displayName="MSBS Grot SG (Black)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="muzzle_snds_65_TI_blk_F";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_ico_01_black_f";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_pointer_IR";
      };
    };
  };

  class AET_F_bastionBreaker_I_ECF_arifle_MSBS65_Mark_black_F_muzzle_snds_65_TI_blk_Facc_pointer_IRoptic_ico_01_black_fbipod_01_F_blk: arifle_MSBS65_Mark_black_F
  {
    displayName="MSBS Grot MR (Black)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="muzzle_snds_65_TI_blk_F";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_ico_01_black_f";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_pointer_IR";
      };
      class LinkedItemsUnder
      {
        slot="UnderBarrelSlot";
        item="bipod_01_F_blk";
      };
    };
  };

};

class cfgVehicles
{
  class I_soldier_F;
  class I_medic_F;
  class SC_PTC;
  class I_Soldier_AT_F;
  class SC_WarbotRocketRack;
  class I_Soldier_AA_F;
  class I_Soldier_M_F;
  class I_Soldier_AR_F;
  class SC_RebornUnits_Machinegunner_pack;
  class I_soldier_UAV_F;
  class I_UAV_01_backpack_F;
  class I_Soldier_SL_F;
  class SC_ColonistRucksack;
  class I_crew_F;
  class I_officer_F;
  class I_Survivor_F;
  class SC_RebornUnits_Skimmer_pack;
  class I_Soldier_TL_F;
  class SC_EnforcerRucksack;
  class I_pilot_F;
  class TKE_Ext_Bearcat_AA;
  class TKE_Ext_Bearcat_Unarmed;
  class TKE_Ext_Bearcat_Cannon;
  class TKE_Ext_Bearcat_Autocannon;
  class TKE_Ext_Dragonfly_A;
  class TKE_Ext_Dragonfly_S;
  class TKE_Ext_GUSA;
  class TKE_Ext_GUSM;
  class SCEXT_Dingo_SE;
  class SCEXT_Dingo_A_SE;
  class SCEXT_Gator_TC_A_SE;
  class SC_Gator_TC_SE;
  class SC_Gator_TO_SE;
  class SC_EXT_Comanche_SE;
  class SC_EXT_Comanche_V_SE;

  class AET_F_bastionBreaker_I_ECF_Rifleman: I_soldier_F
  {
    faction="AET_F_bastionBreaker_I_ECF_nomas";
    side=2;
    displayName="Rifleman";
    uniformClass="SC_JumpsuitColonistColonialGuard";
    weapons[]={"AET_F_bastionBreaker_I_ECF_SC_Rifle_AR12_acc_flashlightoptic_SRS","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    respawnWeapons[]={"AET_F_bastionBreaker_I_ECF_SC_Rifle_AR12_acc_flashlightoptic_SRS","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    items[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"SC_15Rnd_45HP_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
    respawnMagazines[]={"SC_15Rnd_45HP_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","SC_ColonistHatColonialGuard","SC_ColonistRigv2ColonialGuard","G_Balaclava_TI_blk_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","SC_ColonistHatColonialGuard","SC_ColonistRigv2ColonialGuard","G_Balaclava_TI_blk_F"};
    backpack="";
  };

  class AET_F_bastionBreaker_I_ECF_Medic: I_medic_F
  {
    faction="AET_F_bastionBreaker_I_ECF_nomas";
    side=2;
    displayName="Medic";
    uniformClass="SC_JumpsuitColonistColonialGuard";
    weapons[]={"AET_F_bastionBreaker_I_ECF_SC_Rifle_AR12C_acc_flashlightoptic_SRS","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    respawnWeapons[]={"AET_F_bastionBreaker_I_ECF_SC_Rifle_AR12C_acc_flashlightoptic_SRS","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","Medikit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","Medikit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
    magazines[]={"SC_15Rnd_45HP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag"};
    respawnMagazines[]={"SC_15Rnd_45HP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","SC_ColonistHatColonialGuard","SC_ColonistRigv2ColonialGuard","G_Balaclava_TI_blk_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","SC_ColonistHatColonialGuard","SC_ColonistRigv2ColonialGuard","G_Balaclava_TI_blk_F"};
    backpack="AET_F_bastionBreaker_I_ECF_Medic_pack";
  };

  class AET_F_bastionBreaker_I_ECF_AT_Specialist: I_Soldier_AT_F
  {
    faction="AET_F_bastionBreaker_I_ECF_nomas";
    side=2;
    displayName="AT Specialist";
    uniformClass="SC_JumpsuitColonistColonialGuard";
    weapons[]={"AET_F_bastionBreaker_I_ECF_SC_Rifle_AR12_acc_flashlightoptic_SRS","AET_F_bastionBreaker_I_ECF_SC_MPML_SC_MPML_Scope","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    respawnWeapons[]={"AET_F_bastionBreaker_I_ECF_SC_Rifle_AR12_acc_flashlightoptic_SRS","AET_F_bastionBreaker_I_ECF_SC_MPML_SC_MPML_Scope","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SC_15Rnd_45HP_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SC_MPML_M_AT","SC_MPML_M_AT","SC_MPML_M_HE"};
    respawnMagazines[]={"SC_15Rnd_45HP_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SC_MPML_M_AT","SC_MPML_M_AT","SC_MPML_M_HE"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","SC_ColonistHatColonialGuard","SC_ColonistRigv2ColonialGuard","G_Balaclava_TI_blk_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","SC_ColonistHatColonialGuard","SC_ColonistRigv2ColonialGuard","G_Balaclava_TI_blk_F"};
    backpack="AET_F_bastionBreaker_I_ECF_AT_Specialist_pack";
  };

  class AET_F_bastionBreaker_I_ECF_AA_Specialist: I_Soldier_AA_F
  {
    faction="AET_F_bastionBreaker_I_ECF_nomas";
    side=2;
    displayName="AA Specialist";
    uniformClass="SC_JumpsuitColonistColonialGuard";
    weapons[]={"AET_F_bastionBreaker_I_ECF_SC_Rifle_AR12_acc_flashlightoptic_SRS","AET_F_bastionBreaker_I_ECF_launch_B_Titan_olive_F","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    respawnWeapons[]={"AET_F_bastionBreaker_I_ECF_SC_Rifle_AR12_acc_flashlightoptic_SRS","AET_F_bastionBreaker_I_ECF_launch_B_Titan_olive_F","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SC_15Rnd_45HP_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
    respawnMagazines[]={"SC_15Rnd_45HP_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","SC_ColonistHatColonialGuard","SC_ColonistRigv2ColonialGuard","G_Balaclava_TI_blk_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","SC_ColonistHatColonialGuard","SC_ColonistRigv2ColonialGuard","G_Balaclava_TI_blk_F"};
    backpack="";
  };

  class AET_F_bastionBreaker_I_ECF_Marksman: I_Soldier_M_F
  {
    faction="AET_F_bastionBreaker_I_ECF_nomas";
    side=2;
    displayName="Marksman";
    uniformClass="SC_JumpsuitColonistColonialGuard";
    weapons[]={"Binocular","AET_F_bastionBreaker_I_ECF_SC_Rifle_AR12_acc_flashlightSC_TSO55","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    respawnWeapons[]={"Binocular","AET_F_bastionBreaker_I_ECF_SC_Rifle_AR12_acc_flashlightSC_TSO55","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SC_15Rnd_45HP_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
    respawnMagazines[]={"SC_15Rnd_45HP_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","SC_ColonistHatColonialGuard","SC_ColonistRigv2ColonialGuard","G_Balaclava_TI_blk_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","SC_ColonistHatColonialGuard","SC_ColonistRigv2ColonialGuard","G_Balaclava_TI_blk_F"};
    backpack="";
  };

  class AET_F_bastionBreaker_I_ECF_Machine_Gunner: I_Soldier_AR_F
  {
    faction="AET_F_bastionBreaker_I_ECF_nomas";
    side=2;
    displayName="Machine Gunner";
    uniformClass="SC_JumpsuitColonistColonialGuard";
    weapons[]={"AET_F_bastionBreaker_I_ECF_SC_Rifle_PKMP_optic_SRS","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    respawnWeapons[]={"AET_F_bastionBreaker_I_ECF_SC_Rifle_PKMP_optic_SRS","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SC_15Rnd_45HP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SC_200Rnd_338_Mag","SC_200Rnd_338_Mag","SC_200Rnd_338_Mag","SC_200Rnd_338_Mag","SC_200Rnd_338_Mag"};
    respawnMagazines[]={"SC_15Rnd_45HP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SC_200Rnd_338_Mag","SC_200Rnd_338_Mag","SC_200Rnd_338_Mag","SC_200Rnd_338_Mag","SC_200Rnd_338_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","SC_ColonistHatColonialGuard","SC_ColonistRigv2ColonialGuard","G_Balaclava_TI_blk_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","SC_ColonistHatColonialGuard","SC_ColonistRigv2ColonialGuard","G_Balaclava_TI_blk_F"};
    backpack="AET_F_bastionBreaker_I_ECF_Machine_Gunner_pack";
  };

  class AET_F_bastionBreaker_I_ECF_UAV_Operator: I_soldier_UAV_F
  {
    faction="AET_F_bastionBreaker_I_ECF_nomas";
    side=2;
    displayName="UAV Operator";
    uniformClass="SC_JumpsuitColonistColonialGuard";
    weapons[]={"AET_F_bastionBreaker_I_ECF_SC_Rifle_AR12C_acc_flashlightoptic_SRS","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    respawnWeapons[]={"AET_F_bastionBreaker_I_ECF_SC_Rifle_AR12C_acc_flashlightoptic_SRS","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SC_15Rnd_45HP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag"};
    respawnMagazines[]={"SC_15Rnd_45HP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","I_UavTerminal","SC_ColonistHatColonialGuard","SC_ColonistRigv2ColonialGuard","G_Balaclava_TI_blk_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","I_UavTerminal","SC_ColonistHatColonialGuard","SC_ColonistRigv2ColonialGuard","G_Balaclava_TI_blk_F"};
    backpack="AET_F_bastionBreaker_I_ECF_UAV_Operator_pack";
  };

  class AET_F_bastionBreaker_I_ECF_Squad_Leader: I_Soldier_SL_F
  {
    faction="AET_F_bastionBreaker_I_ECF_nomas";
    side=2;
    displayName="Squad Leader";
    uniformClass="SC_JumpsuitColonistColonialGuard";
    weapons[]={"AET_F_bastionBreaker_I_ECF_SC_Rifle_AR12_acc_flashlightoptic_SRS","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    respawnWeapons[]={"AET_F_bastionBreaker_I_ECF_SC_Rifle_AR12_acc_flashlightoptic_SRS","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SC_15Rnd_45HP_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellPurple","SmokeShellPurple","SmokeShellYellow","SmokeShellYellow"};
    respawnMagazines[]={"SC_15Rnd_45HP_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellPurple","SmokeShellPurple","SmokeShellYellow","SmokeShellYellow"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","SC_ColonistHatColonialGuard","SC_ColonistRigv2ColonialGuard","G_Balaclava_TI_blk_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","SC_ColonistHatColonialGuard","SC_ColonistRigv2ColonialGuard","G_Balaclava_TI_blk_F"};
    backpack="AET_F_bastionBreaker_I_ECF_Squad_Leader_pack";
  };

  class AET_F_bastionBreaker_I_ECF_Crewman: I_crew_F
  {
    faction="AET_F_bastionBreaker_I_ECF_nomas";
    side=2;
    displayName="Crewman";
    uniformClass="SC_JumpsuitColonistColonialGuard";
    weapons[]={"AET_F_bastionBreaker_I_ECF_SC_Rifle_Ghoul_acc_flashlightoptic_Yorris","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    respawnWeapons[]={"AET_F_bastionBreaker_I_ECF_SC_Rifle_Ghoul_acc_flashlightoptic_Yorris","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SC_15Rnd_45HP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","RD_45Rnd_45HP_Mag","RD_45Rnd_45HP_Mag","RD_45Rnd_45HP_Mag","RD_45Rnd_45HP_Mag"};
    respawnMagazines[]={"SC_15Rnd_45HP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","RD_45Rnd_45HP_Mag","RD_45Rnd_45HP_Mag","RD_45Rnd_45HP_Mag","RD_45Rnd_45HP_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","SC_ColonistHatColonialGuard","SC_ColonistRigColonialGuard","G_Balaclava_TI_blk_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","SC_ColonistHatColonialGuard","SC_ColonistRigColonialGuard","G_Balaclava_TI_blk_F"};
    backpack="";
  };

  class AET_F_bastionBreaker_I_ECF_Officer: I_officer_F
  {
    faction="AET_F_bastionBreaker_I_ECF_nomas";
    side=2;
    displayName="Officer";
    uniformClass="SC_JumpsuitColonistColonialGuard";
    weapons[]={"AET_F_bastionBreaker_I_ECF_SC_Rifle_AR12C_acc_flashlightoptic_SRS","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    respawnWeapons[]={"AET_F_bastionBreaker_I_ECF_SC_Rifle_AR12C_acc_flashlightoptic_SRS","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SC_15Rnd_45HP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag"};
    respawnMagazines[]={"SC_15Rnd_45HP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag","SC_35Rnd_762x51_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ECF_Beret","SC_ColonistRigv2ColonialGuard","G_Bandanna_blk"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ECF_Beret","SC_ColonistRigv2ColonialGuard","G_Bandanna_blk"};
    backpack="";
  };

  class AET_F_bastionBreaker_I_ECF_Skimmer_Drone_Man: I_Survivor_F
  {
    faction="AET_F_bastionBreaker_I_ECF_nomas";
    side=2;
    displayName="Skimmer Drone Man";
    uniformClass="SC_SkimmerDrone";
    weapons[]={"AET_F_bastionBreaker_I_ECF_SC_SkimmerDroneGun","Put","Throw"};
    respawnWeapons[]={"AET_F_bastionBreaker_I_ECF_SC_SkimmerDroneGun","Put","Throw"};
    items[]={};
    respawnItems[]={};
    magazines[]={"SC_200Rnd_338_MagBastard","SC_200Rnd_338_MagBastard","SC_200Rnd_338_MagBastard","SC_200Rnd_338_MagBastard","SC_200Rnd_338_MagBastard","SC_200Rnd_338_MagBastard","SC_200Rnd_338_MagBastard","SC_200Rnd_338_MagBastard","SC_200Rnd_338_MagBastard"};
    respawnMagazines[]={"SC_200Rnd_338_MagBastard","SC_200Rnd_338_MagBastard","SC_200Rnd_338_MagBastard","SC_200Rnd_338_MagBastard","SC_200Rnd_338_MagBastard","SC_200Rnd_338_MagBastard","SC_200Rnd_338_MagBastard","SC_200Rnd_338_MagBastard","SC_200Rnd_338_MagBastard"};
    linkedItems[]={"None"};
    respawnLinkedItems[]={"None"};
    backpack="AET_F_bastionBreaker_I_ECF_Skimmer_Drone_Man_pack";
  };

  class AET_F_bastionBreaker_I_ECF_SF_Sniper: I_Soldier_M_F
  {
    faction="AET_F_bastionBreaker_I_ECF_nomas";
    side=2;
    displayName="SF Sniper";
    uniformClass="SC_JumpsuitColonistColonialGuard";
    weapons[]={"Rangefinder","AET_F_bastionBreaker_I_ECF_SC_Rifle_SSR55_SC_TSO55bipod_01_F_blk","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    respawnWeapons[]={"Rangefinder","AET_F_bastionBreaker_I_ECF_SC_Rifle_SSR55_SC_TSO55bipod_01_F_blk","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","sc_trojanrespirator"};
    respawnItems[]={"FirstAidKit","FirstAidKit","sc_trojanrespirator"};
    magazines[]={"SC_15Rnd_45HP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SC_5Rnd_50HV_Mag","SC_5Rnd_50HV_Mag","SC_5Rnd_50HV_Mag","SC_5Rnd_50HV_Mag","SC_5Rnd_50HV_Mag","SC_5Rnd_50HV_Mag"};
    respawnMagazines[]={"SC_15Rnd_45HP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SC_5Rnd_50HV_Mag","SC_5Rnd_50HV_Mag","SC_5Rnd_50HV_Mag","SC_5Rnd_50HV_Mag","SC_5Rnd_50HV_Mag","SC_5Rnd_50HV_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Rangefinder","SC_MMPHelmetCommon","SC_WarfighterVest","G_Balaclava_TI_blk_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Rangefinder","SC_MMPHelmetCommon","SC_WarfighterVest","G_Balaclava_TI_blk_F"};
    backpack="";
  };

  class AET_F_bastionBreaker_I_ECF_SF_Spotter: I_Soldier_M_F
  {
    faction="AET_F_bastionBreaker_I_ECF_nomas";
    side=2;
    displayName="SF Spotter";
    uniformClass="SC_JumpsuitColonistColonialGuard";
    weapons[]={"Rangefinder","AET_F_bastionBreaker_I_ECF_SC_Rifle_SSR55C_SC_TSO55bipod_01_F_blk","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    respawnWeapons[]={"Rangefinder","AET_F_bastionBreaker_I_ECF_SC_Rifle_SSR55C_SC_TSO55bipod_01_F_blk","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","sc_trojanrespirator"};
    respawnItems[]={"FirstAidKit","FirstAidKit","sc_trojanrespirator"};
    magazines[]={"SC_15Rnd_45HP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SC_5Rnd_50HV_Mag","SC_5Rnd_50HV_Mag","SC_5Rnd_50HV_Mag","SC_5Rnd_50HV_Mag","SC_5Rnd_50HV_Mag","SC_5Rnd_50HV_Mag"};
    respawnMagazines[]={"SC_15Rnd_45HP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SC_5Rnd_50HV_Mag","SC_5Rnd_50HV_Mag","SC_5Rnd_50HV_Mag","SC_5Rnd_50HV_Mag","SC_5Rnd_50HV_Mag","SC_5Rnd_50HV_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Rangefinder","SC_MMPHelmetCommon","SC_WarfighterVest","G_Balaclava_TI_blk_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Rangefinder","SC_MMPHelmetCommon","SC_WarfighterVest","G_Balaclava_TI_blk_F"};
    backpack="";
  };

  class AET_F_bastionBreaker_I_ECF_SF_Team_Leader: I_Soldier_TL_F
  {
    faction="AET_F_bastionBreaker_I_ECF_nomas";
    side=2;
    displayName="SF Team Leader";
    uniformClass="SC_JumpsuitColonistColonialGuard";
    weapons[]={"Binocular","AET_F_bastionBreaker_I_ECF_arifle_MSBS65_GL_black_F_muzzle_snds_65_TI_blk_Facc_pointer_IRoptic_ico_01_black_f","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    respawnWeapons[]={"Binocular","AET_F_bastionBreaker_I_ECF_arifle_MSBS65_GL_black_F_muzzle_snds_65_TI_blk_Facc_pointer_IRoptic_ico_01_black_f","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","TKE_IntegratedNVGs"};
    respawnItems[]={"FirstAidKit","FirstAidKit","TKE_IntegratedNVGs"};
    magazines[]={"SC_15Rnd_45HP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","SmokeShellPurple","SmokeShellPurple","SmokeShellYellow","SmokeShellYellow","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareRed_F","UGL_FlareRed_F","UGL_FlareRed_F","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
    respawnMagazines[]={"SC_15Rnd_45HP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","SmokeShellPurple","SmokeShellPurple","SmokeShellYellow","SmokeShellYellow","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareRed_F","UGL_FlareRed_F","UGL_FlareRed_F","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SC_MMPHelmetCommon","SC_WarfighterVest","SC_MMPGasmask"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","SC_MMPHelmetCommon","SC_WarfighterVest","SC_MMPGasmask"};
    backpack="AET_F_bastionBreaker_I_ECF_SF_Team_Leader_pack";
  };

  class AET_F_bastionBreaker_I_ECF_SF_Rifleman_SG: I_soldier_F
  {
    faction="AET_F_bastionBreaker_I_ECF_nomas";
    side=2;
    displayName="SF Rifleman SG";
    uniformClass="SC_JumpsuitColonistColonialGuard";
    weapons[]={"Binocular","AET_F_bastionBreaker_I_ECF_arifle_MSBS65_black_F_muzzle_snds_65_TI_blk_Facc_pointer_IRoptic_ico_01_black_f","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    respawnWeapons[]={"Binocular","AET_F_bastionBreaker_I_ECF_arifle_MSBS65_black_F_muzzle_snds_65_TI_blk_Facc_pointer_IRoptic_ico_01_black_f","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","TKE_IntegratedNVGs"};
    respawnItems[]={"FirstAidKit","FirstAidKit","TKE_IntegratedNVGs"};
    magazines[]={"SC_15Rnd_45HP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer"};
    respawnMagazines[]={"SC_15Rnd_45HP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","SC_MMPHelmetCommon","SC_WarfighterVest","SC_MMPGasmask"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","SC_MMPHelmetCommon","SC_WarfighterVest","SC_MMPGasmask"};
    backpack="";
  };

  class AET_F_bastionBreaker_I_ECF_SF_Rifleman: I_soldier_F
  {
    faction="AET_F_bastionBreaker_I_ECF_nomas";
    side=2;
    displayName="SF Rifleman";
    uniformClass="SC_JumpsuitColonistColonialGuard";
    weapons[]={"Binocular","AET_F_bastionBreaker_I_ECF_arifle_MSBS65_UBS_black_F_muzzle_snds_65_TI_blk_Facc_pointer_IRoptic_ico_01_black_f","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    respawnWeapons[]={"Binocular","AET_F_bastionBreaker_I_ECF_arifle_MSBS65_UBS_black_F_muzzle_snds_65_TI_blk_Facc_pointer_IRoptic_ico_01_black_f","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","TKE_IntegratedNVGs"};
    respawnItems[]={"FirstAidKit","FirstAidKit","TKE_IntegratedNVGs"};
    magazines[]={"SC_15Rnd_45HP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","6Rnd_12Gauge_Slug","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Pellets"};
    respawnMagazines[]={"SC_15Rnd_45HP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","6Rnd_12Gauge_Slug","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Pellets"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","SC_MMPHelmetCommon","SC_WarfighterVest","SC_MMPGasmask"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","SC_MMPHelmetCommon","SC_WarfighterVest","SC_MMPGasmask"};
    backpack="";
  };

  class AET_F_bastionBreaker_I_ECF_SF_Marksman: I_Soldier_M_F
  {
    faction="AET_F_bastionBreaker_I_ECF_nomas";
    side=2;
    displayName="SF Marksman";
    uniformClass="SC_JumpsuitColonistColonialGuard";
    weapons[]={"Binocular","AET_F_bastionBreaker_I_ECF_arifle_MSBS65_Mark_black_F_muzzle_snds_65_TI_blk_Facc_pointer_IRoptic_ico_01_black_fbipod_01_F_blk","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    respawnWeapons[]={"Binocular","AET_F_bastionBreaker_I_ECF_arifle_MSBS65_Mark_black_F_muzzle_snds_65_TI_blk_Facc_pointer_IRoptic_ico_01_black_fbipod_01_F_blk","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","TKE_IntegratedNVGs"};
    respawnItems[]={"FirstAidKit","FirstAidKit","TKE_IntegratedNVGs"};
    magazines[]={"SC_15Rnd_45HP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer"};
    respawnMagazines[]={"SC_15Rnd_45HP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","SC_MMPHelmetCommon","SC_WarfighterVest","SC_MMPGasmask"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","SC_MMPHelmetCommon","SC_WarfighterVest","SC_MMPGasmask"};
    backpack="";
  };

  class AET_F_bastionBreaker_I_ECF_SF_AT_Specialist: I_Soldier_AT_F
  {
    faction="AET_F_bastionBreaker_I_ECF_nomas";
    side=2;
    displayName="SF AT Specialist";
    uniformClass="SC_JumpsuitColonistColonialGuard";
    weapons[]={"Binocular","AET_F_bastionBreaker_I_ECF_arifle_MSBS65_UBS_black_F_muzzle_snds_65_TI_blk_Facc_pointer_IRoptic_ico_01_black_f","AET_F_bastionBreaker_I_ECF_SC_MPML_SC_MPML_Scope","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    respawnWeapons[]={"Binocular","AET_F_bastionBreaker_I_ECF_arifle_MSBS65_UBS_black_F_muzzle_snds_65_TI_blk_Facc_pointer_IRoptic_ico_01_black_f","AET_F_bastionBreaker_I_ECF_SC_MPML_SC_MPML_Scope","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","TKE_IntegratedNVGs"};
    respawnItems[]={"FirstAidKit","FirstAidKit","TKE_IntegratedNVGs"};
    magazines[]={"SC_15Rnd_45HP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","6Rnd_12Gauge_Slug","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Pellets","SC_MPML_M_AT","SC_MPML_M_AT","SC_MPML_M_HE"};
    respawnMagazines[]={"SC_15Rnd_45HP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","6Rnd_12Gauge_Slug","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Pellets","SC_MPML_M_AT","SC_MPML_M_AT","SC_MPML_M_HE"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","SC_MMPHelmetCommon","SC_WarfighterVest","SC_MMPGasmask"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","SC_MMPHelmetCommon","SC_WarfighterVest","SC_MMPGasmask"};
    backpack="AET_F_bastionBreaker_I_ECF_SF_AT_Specialist_pack";
  };

  class AET_F_bastionBreaker_I_ECF_SF_Medic: I_medic_F
  {
    faction="AET_F_bastionBreaker_I_ECF_nomas";
    side=2;
    displayName="SF Medic";
    uniformClass="SC_JumpsuitColonistColonialGuard";
    weapons[]={"Binocular","AET_F_bastionBreaker_I_ECF_arifle_MSBS65_black_F_muzzle_snds_65_TI_blk_Facc_pointer_IRoptic_ico_01_black_f","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    respawnWeapons[]={"Binocular","AET_F_bastionBreaker_I_ECF_arifle_MSBS65_black_F_muzzle_snds_65_TI_blk_Facc_pointer_IRoptic_ico_01_black_f","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","TKE_IntegratedNVGs","Medikit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","TKE_IntegratedNVGs","Medikit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
    magazines[]={"SC_15Rnd_45HP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer"};
    respawnMagazines[]={"SC_15Rnd_45HP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","SC_MMPHelmetCommon","SC_WarfighterVest","SC_MMPGasmask"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","SC_MMPHelmetCommon","SC_WarfighterVest","SC_MMPGasmask"};
    backpack="AET_F_bastionBreaker_I_ECF_SF_Medic_pack";
  };

  class AET_F_bastionBreaker_I_ECF_SF_AA_Specialist: I_Soldier_AA_F
  {
    faction="AET_F_bastionBreaker_I_ECF_nomas";
    side=2;
    displayName="SF AA Specialist";
    uniformClass="SC_JumpsuitColonistColonialGuard";
    weapons[]={"Binocular","AET_F_bastionBreaker_I_ECF_arifle_MSBS65_UBS_black_F_muzzle_snds_65_TI_blk_Facc_pointer_IRoptic_ico_01_black_f","AET_F_bastionBreaker_I_ECF_launch_B_Titan_olive_F","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    respawnWeapons[]={"Binocular","AET_F_bastionBreaker_I_ECF_arifle_MSBS65_UBS_black_F_muzzle_snds_65_TI_blk_Facc_pointer_IRoptic_ico_01_black_f","AET_F_bastionBreaker_I_ECF_launch_B_Titan_olive_F","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","TKE_IntegratedNVGs"};
    respawnItems[]={"FirstAidKit","FirstAidKit","TKE_IntegratedNVGs"};
    magazines[]={"SC_15Rnd_45HP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","6Rnd_12Gauge_Slug","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Pellets"};
    respawnMagazines[]={"SC_15Rnd_45HP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","6Rnd_12Gauge_Slug","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Pellets"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","SC_MMPHelmetCommon","SC_WarfighterVest","SC_MMPGasmask"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","SC_MMPHelmetCommon","SC_WarfighterVest","SC_MMPGasmask"};
    backpack="";
  };

  class AET_F_bastionBreaker_I_ECF_Helicopter_Pilot: I_pilot_F
  {
    faction="AET_F_bastionBreaker_I_ECF_nomas";
    side=2;
    displayName="Helicopter Pilot";
    uniformClass="SC_JumpsuitColonistColonialGuard";
    weapons[]={"AET_F_bastionBreaker_I_ECF_SC_Rifle_Ghoul_acc_flashlightoptic_Yorris","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    respawnWeapons[]={"AET_F_bastionBreaker_I_ECF_SC_Rifle_Ghoul_acc_flashlightoptic_Yorris","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SC_15Rnd_45HP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","RD_45Rnd_45HP_Mag","RD_45Rnd_45HP_Mag","RD_45Rnd_45HP_Mag","RD_45Rnd_45HP_Mag"};
    respawnMagazines[]={"SC_15Rnd_45HP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","RD_45Rnd_45HP_Mag","RD_45Rnd_45HP_Mag","RD_45Rnd_45HP_Mag","RD_45Rnd_45HP_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_PilotHelmetHeli_B","SC_ColonistRigColonialGuard","G_Balaclava_TI_blk_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_PilotHelmetHeli_B","SC_ColonistRigColonialGuard","G_Balaclava_TI_blk_F"};
    backpack="";
  };

  class AET_F_bastionBreaker_I_ECF_Pilot: I_pilot_F
  {
    faction="AET_F_bastionBreaker_I_ECF_nomas";
    side=2;
    displayName="Pilot";
    uniformClass="U_I_pilotCoveralls";
    weapons[]={"AET_F_bastionBreaker_I_ECF_SC_Rifle_Ghoul_acc_flashlightoptic_Yorris","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    respawnWeapons[]={"AET_F_bastionBreaker_I_ECF_SC_Rifle_Ghoul_acc_flashlightoptic_Yorris","AET_F_bastionBreaker_I_ECF_SC_Pistol_SSP9","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SC_15Rnd_45HP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","RD_45Rnd_45HP_Mag","RD_45Rnd_45HP_Mag","RD_45Rnd_45HP_Mag","RD_45Rnd_45HP_Mag"};
    respawnMagazines[]={"SC_15Rnd_45HP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","RD_45Rnd_45HP_Mag","RD_45Rnd_45HP_Mag","RD_45Rnd_45HP_Mag","RD_45Rnd_45HP_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_PilotHelmetFighter_O","SC_ColonistRigColonialGuard","G_Balaclava_TI_blk_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_PilotHelmetFighter_O","SC_ColonistRigColonialGuard","G_Balaclava_TI_blk_F"};
    backpack="";
  };

  class AET_F_bastionBreaker_I_ECF_TC_15_Bearcat_SHORAD: TKE_Ext_Bearcat_AA
  {
    faction="AET_F_bastionBreaker_I_ECF_nomas";
    side=2;
    displayName="TC 15 Bearcat SHORAD";
    hiddenSelectionsTextures[]={"tke_ext_apc\data\apc_green_co.paa"};
    crew="AET_F_bastionBreaker_I_ECF_Crewman";
    typicalCargo[]={"AET_F_bastionBreaker_I_ECF_Crewman"};
  };

  class AET_F_bastionBreaker_I_ECF_TC_15_Bearcat_APC: TKE_Ext_Bearcat_Unarmed
  {
    faction="AET_F_bastionBreaker_I_ECF_nomas";
    side=2;
    displayName="TC 15 Bearcat APC";
    hiddenSelectionsTextures[]={"tke_ext_apc\data\apc_green_co.paa"};
    crew="AET_F_bastionBreaker_I_ECF_Crewman";
    typicalCargo[]={"AET_F_bastionBreaker_I_ECF_Crewman"};
  };

  class AET_F_bastionBreaker_I_ECF_TC_15_Bearcat_FSV: TKE_Ext_Bearcat_Cannon
  {
    faction="AET_F_bastionBreaker_I_ECF_nomas";
    side=2;
    displayName="TC 15 Bearcat FSV";
    hiddenSelectionsTextures[]={"tke_ext_apc\data\apc_green_co.paa"};
    crew="AET_F_bastionBreaker_I_ECF_Crewman";
    typicalCargo[]={"AET_F_bastionBreaker_I_ECF_Crewman"};
  };

  class AET_F_bastionBreaker_I_ECF_TC_15_Bearcat_IFV: TKE_Ext_Bearcat_Autocannon
  {
    faction="AET_F_bastionBreaker_I_ECF_nomas";
    side=2;
    displayName="TC 15 Bearcat IFV";
    hiddenSelectionsTextures[]={"tke_ext_apc\data\apc_green_co.paa"};
    crew="AET_F_bastionBreaker_I_ECF_Crewman";
    typicalCargo[]={"AET_F_bastionBreaker_I_ECF_Crewman"};
  };

  class AET_F_bastionBreaker_I_ECF_AH_44_A_Dragonfly: TKE_Ext_Dragonfly_A
  {
    faction="AET_F_bastionBreaker_I_ECF_nomas";
    side=2;
    displayName="AH 44 A Dragonfly";
    hiddenSelectionsTextures[]={"tke_ext_heli\data\heli_grey_co.paa","tke_ext_heli\data\heli1_grey_co.paa"};
    crew="AET_F_bastionBreaker_I_ECF_Helicopter_Pilot";
    typicalCargo[]={"AET_F_bastionBreaker_I_ECF_Helicopter_Pilot"};
  };

  class AET_F_bastionBreaker_I_ECF_AH_44_S_Dragonfly: TKE_Ext_Dragonfly_S
  {
    faction="AET_F_bastionBreaker_I_ECF_nomas";
    side=2;
    displayName="AH 44 S Dragonfly";
    hiddenSelectionsTextures[]={"tke_ext_heli\data\heli_grey_co.paa","tke_ext_heli\data\heli1_grey_co.paa"};
    crew="AET_F_bastionBreaker_I_ECF_Helicopter_Pilot";
    typicalCargo[]={"AET_F_bastionBreaker_I_ECF_Helicopter_Pilot"};
  };

  class AET_F_bastionBreaker_I_ECF_General_Utility_Shuttle_A: TKE_Ext_GUSA
  {
    faction="AET_F_bastionBreaker_I_ECF_nomas";
    side=2;
    displayName="General Utility Shuttle A";
    hiddenSelectionsTextures[]={"tke_ext_shuttle\data\shuttle_green_co.paa"};
    crew="AET_F_bastionBreaker_I_ECF_Pilot";
    typicalCargo[]={"AET_F_bastionBreaker_I_ECF_Pilot"};
  };

  class AET_F_bastionBreaker_I_ECF_General_Utility_Shuttle_M: TKE_Ext_GUSM
  {
    faction="AET_F_bastionBreaker_I_ECF_nomas";
    side=2;
    displayName="General Utility Shuttle M";
    hiddenSelectionsTextures[]={"tke_ext_shuttle\data\shuttle_green_co.paa"};
    crew="AET_F_bastionBreaker_I_ECF_Pilot";
    typicalCargo[]={"AET_F_bastionBreaker_I_ECF_Pilot"};
  };

  class AET_F_bastionBreaker_I_ECF_G10_MRAP: SCEXT_Dingo_SE
  {
    faction="AET_F_bastionBreaker_I_ECF_nomas";
    side=2;
    displayName="G10 MRAP";
    hiddenSelectionsTextures[]={"sc_wheeled\data\gator\body_black_co.paa","sc_wheeled\data\gator\doors_co.paa","sc_wheeled\data\gator\compartment_co.paa","sc_wheeled\data\gator\frame_co.paa"};
    crew="AET_F_bastionBreaker_I_ECF_Crewman";
    typicalCargo[]={"AET_F_bastionBreaker_I_ECF_Crewman"};
  };

  class AET_F_bastionBreaker_I_ECF_G10_MRAP_A: SCEXT_Dingo_A_SE
  {
    faction="AET_F_bastionBreaker_I_ECF_nomas";
    side=2;
    displayName="G10 MRAP A";
    hiddenSelectionsTextures[]={"sc_wheeled\data\gator\body_black_co.paa","sc_wheeled\data\gator\doors_co.paa","sc_wheeled\data\gator\compartment_co.paa","sc_wheeled\data\ferret\details_black_co.paa","sc_wheeled\data\gator\frame_co.paa"};
    crew="AET_F_bastionBreaker_I_ECF_Crewman";
    typicalCargo[]={"AET_F_bastionBreaker_I_ECF_Crewman"};
  };

  class AET_F_bastionBreaker_I_ECF_G12_Truck_Transport_Armed: SCEXT_Gator_TC_A_SE
  {
    faction="AET_F_bastionBreaker_I_ECF_nomas";
    side=2;
    displayName="G12 Truck Transport Armed";
    hiddenSelectionsTextures[]={"sc_wheeled\data\gator\body_black_co.paa","sc_wheeled\data\gator\doors_co.paa","sc_wheeled\data\gator\compartment_co.paa","sc_wheeled\data\ferret\details_black_co.paa"};
    crew="AET_F_bastionBreaker_I_ECF_Crewman";
    typicalCargo[]={"AET_F_bastionBreaker_I_ECF_Crewman"};
  };

  class AET_F_bastionBreaker_I_ECF_G12_Truck_Transport_Closed: SC_Gator_TC_SE
  {
    faction="AET_F_bastionBreaker_I_ECF_nomas";
    side=2;
    displayName="G12 Truck Transport Closed";
    hiddenSelectionsTextures[]={"sc_wheeled\data\gator\body_black_co.paa","sc_wheeled\data\gator\doors_co.paa","sc_wheeled\data\gator\compartment_co.paa"};
    crew="AET_F_bastionBreaker_I_ECF_Crewman";
    typicalCargo[]={"AET_F_bastionBreaker_I_ECF_Crewman"};
  };

  class AET_F_bastionBreaker_I_ECF_G12_Truck_Transport_Open: SC_Gator_TO_SE
  {
    faction="AET_F_bastionBreaker_I_ECF_nomas";
    side=2;
    displayName="G12 Truck Transport Open";
    hiddenSelectionsTextures[]={"sc_wheeled\data\gator\body_black_co.paa","sc_wheeled\data\gator\doors_co.paa","sc_wheeled\data\gator\frame_co.paa"};
    crew="AET_F_bastionBreaker_I_ECF_Crewman";
    typicalCargo[]={"AET_F_bastionBreaker_I_ECF_Crewman"};
  };

  class AET_F_bastionBreaker_I_ECF_UT_53_I_Comanche_Dropship: SC_EXT_Comanche_SE
  {
    faction="AET_F_bastionBreaker_I_ECF_nomas";
    side=2;
    displayName="UT 53 I Comanche Dropship";
    hiddenSelectionsTextures[]={"sc_ext_heli\data\textures\body_black_co.paa","sc_ext_heli\data\textures\details_co.paa","sc_ext_heli\data\textures\light_co.paa"};
    crew="AET_F_bastionBreaker_I_ECF_Helicopter_Pilot";
    typicalCargo[]={"AET_F_bastionBreaker_I_ECF_Helicopter_Pilot"};
  };

  class AET_F_bastionBreaker_I_ECF_UT_53_V_Comanche_Dropship: SC_EXT_Comanche_V_SE
  {
    faction="AET_F_bastionBreaker_I_ECF_nomas";
    side=2;
    displayName="UT 53 V Comanche Dropship";
    hiddenSelectionsTextures[]={"sc_ext_heli\data\textures\body_black_co.paa","sc_ext_heli\data\textures\details_co.paa","sc_ext_heli\data\textures\light_co.paa"};
    crew="AET_F_bastionBreaker_I_ECF_Helicopter_Pilot";
    typicalCargo[]={"AET_F_bastionBreaker_I_ECF_Helicopter_Pilot"};
  };


  class AET_F_bastionBreaker_I_ECF_Medic_pack: SC_PTC
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_Medikit {count=1;name="Medikit";};
     class _xx_FirstAidKit {count=10;name="FirstAidKit";};
    };
    class TransportWeapons{};
  };


  class AET_F_bastionBreaker_I_ECF_AT_Specialist_pack: SC_WarbotRocketRack
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_SC_MPML_M_AT {count=2;magazine="SC_MPML_M_AT";};
     class _xx_SC_MPML_M_HE {count=1;magazine="SC_MPML_M_HE";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class AET_F_bastionBreaker_I_ECF_Machine_Gunner_pack: SC_RebornUnits_Machinegunner_pack
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_SC_200Rnd_338_Mag {count=4;magazine="SC_200Rnd_338_Mag";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class AET_F_bastionBreaker_I_ECF_UAV_Operator_pack: I_UAV_01_backpack_F
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class AET_F_bastionBreaker_I_ECF_Squad_Leader_pack: SC_ColonistRucksack
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_SmokeShellPurple {count=2;magazine="SmokeShellPurple";};
     class _xx_SmokeShellYellow {count=2;magazine="SmokeShellYellow";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class AET_F_bastionBreaker_I_ECF_Skimmer_Drone_Man_pack: SC_RebornUnits_Skimmer_pack
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_SC_200Rnd_338_MagBastard {count=8;magazine="SC_200Rnd_338_MagBastard";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class AET_F_bastionBreaker_I_ECF_SF_Team_Leader_pack: SC_EnforcerRucksack
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_SmokeShellPurple {count=2;magazine="SmokeShellPurple";};
     class _xx_SmokeShellYellow {count=2;magazine="SmokeShellYellow";};
     class _xx_1Rnd_HE_Grenade_shell {count=4;magazine="1Rnd_HE_Grenade_shell";};
     class _xx_UGL_FlareRed_F {count=3;magazine="UGL_FlareRed_F";};
     class _xx_1Rnd_SmokePurple_Grenade_shell {count=3;magazine="1Rnd_SmokePurple_Grenade_shell";};
     class _xx_1Rnd_SmokeYellow_Grenade_shell {count=3;magazine="1Rnd_SmokeYellow_Grenade_shell";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class AET_F_bastionBreaker_I_ECF_SF_AT_Specialist_pack: SC_WarbotRocketRack
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_SC_MPML_M_AT {count=2;magazine="SC_MPML_M_AT";};
     class _xx_SC_MPML_M_HE {count=1;magazine="SC_MPML_M_HE";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class AET_F_bastionBreaker_I_ECF_SF_Medic_pack: SC_PTC
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_Medikit {count=1;name="Medikit";};
     class _xx_FirstAidKit {count=10;name="FirstAidKit";};
    };
    class TransportWeapons{};
  };

};

//////////////// Paste cfgGroups after this line //////////////// 
class cfgGroups
{  
  class INDEP
  {
    name="Independent";
    class nomas
    {
      name="ECF - Bastion Breaker";

      class Infantry
      {
        name="Infantry";

        class AET_F_bastionBreaker_I_ECF_R_Rifle_Squad_AT
        {
          name="Rifle Squad AT";
          faction="AET_F_bastionBreaker_I_ECF_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Medic";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_AT_Specialist";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit7
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
        };
        class AET_F_bastionBreaker_I_ECF_R_Rifle_Squad
        {
          name="Rifle Squad";
          faction="AET_F_bastionBreaker_I_ECF_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Medic";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit7
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
        };
        class AET_F_bastionBreaker_I_ECF_R_Fire_Team_MG
        {
          name="Fire Team MG";
          faction="AET_F_bastionBreaker_I_ECF_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class AET_F_bastionBreaker_I_ECF_R_Fire_Team_Rifle
        {
          name="Fire Team Rifle";
          faction="AET_F_bastionBreaker_I_ECF_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class AET_F_bastionBreaker_I_ECF_R_Skimmer_Team
        {
          name="Skimmer Team";
          faction="AET_F_bastionBreaker_I_ECF_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_UAV_Operator";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Skimmer_Drone_Man";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Skimmer_Drone_Man";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Skimmer_Drone_Man";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class AET_F_bastionBreaker_I_ECF_R_Patrol
        {
          name="Patrol";
          faction="AET_F_bastionBreaker_I_ECF_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
        };
        class AET_F_bastionBreaker_I_ECF_R_SF_Sniper_Team
        {
          name="SF Sniper Team";
          faction="AET_F_bastionBreaker_I_ECF_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_SF_Sniper";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_SF_Spotter";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
        };
        class AET_F_bastionBreaker_I_ECF_R_SF_Team_AT
        {
          name="SF Team AT";
          faction="AET_F_bastionBreaker_I_ECF_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_SF_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_SF_Medic";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_SF_AT_Specialist";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_SF_Rifleman_SG";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_SF_Rifleman";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
        };
        class AET_F_bastionBreaker_I_ECF_R_SF_Team
        {
          name="SF Team";
          faction="AET_F_bastionBreaker_I_ECF_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_SF_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_SF_Medic";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_SF_Rifleman_SG";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_SF_Rifleman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_SF_Rifleman";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
        };
        class AET_F_bastionBreaker_I_ECF_R_SF_Patrol
        {
          name="SF Patrol";
          faction="AET_F_bastionBreaker_I_ECF_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_SF_Rifleman";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_SF_Rifleman";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
        };
      };
      class Motorized
      {
        name="Motorized";

        class AET_F_bastionBreaker_I_ECF_R_TC_15_Bearcat_APC_AT
        {
          name="TC 15 Bearcat APC AT";
          faction="AET_F_bastionBreaker_I_ECF_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_TC_15_Bearcat_APC";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Medic";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
          class Unit4
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-60,0};
          };
          class Unit5
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-75,0};
          };
          class Unit6
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-90,0};
          };
          class Unit7
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-105,0};
          };
          class Unit8
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-120,0};
          };
        };
        class AET_F_bastionBreaker_I_ECF_R_TC_15_Bearcat_APC
        {
          name="TC 15 Bearcat APC";
          faction="AET_F_bastionBreaker_I_ECF_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_TC_15_Bearcat_APC";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Medic";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
          class Unit4
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_AT_Specialist";
            rank="PRIVATE";
            position[]={0,-60,0};
          };
          class Unit5
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-75,0};
          };
          class Unit6
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-90,0};
          };
          class Unit7
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-105,0};
          };
          class Unit8
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-120,0};
          };
        };
        class AET_F_bastionBreaker_I_ECF_R_G10_MRAP
        {
          name="G10 MRAP";
          faction="AET_F_bastionBreaker_I_ECF_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_G10_MRAP";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
          class Unit4
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-60,0};
          };
        };
        class AET_F_bastionBreaker_I_ECF_R_G10_MRAP_A
        {
          name="G10 MRAP A";
          faction="AET_F_bastionBreaker_I_ECF_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_G10_MRAP_A";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
        };
        class AET_F_bastionBreaker_I_ECF_R_G12_Truck_Transport_Armed
        {
          name="G12 Truck Transport Armed";
          faction="AET_F_bastionBreaker_I_ECF_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_G12_Truck_Transport_Armed";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Medic";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
          class Unit4
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-60,0};
          };
          class Unit5
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-75,0};
          };
          class Unit6
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-90,0};
          };
          class Unit7
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-105,0};
          };
          class Unit8
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-120,0};
          };
        };
        class AET_F_bastionBreaker_I_ECF_R_G12_Truck_Transport_Closed
        {
          name="G12 Truck Transport Closed";
          faction="AET_F_bastionBreaker_I_ECF_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_G12_Truck_Transport_Closed";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Medic";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
          class Unit4
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-60,0};
          };
          class Unit5
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-75,0};
          };
          class Unit6
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-90,0};
          };
          class Unit7
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-105,0};
          };
          class Unit8
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-120,0};
          };
        };
        class AET_F_bastionBreaker_I_ECF_R_G12_Truck_Transport_Open
        {
          name="G12 Truck Transport Open";
          faction="AET_F_bastionBreaker_I_ECF_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_G12_Truck_Transport_Open";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Medic";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
          class Unit4
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-60,0};
          };
          class Unit5
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-75,0};
          };
          class Unit6
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
            rank="PRIVATE";
            position[]={0,-90,0};
          };
          class Unit7
          {
            side=2;
            vehicle="AET_F_bastionBreaker_I_ECF_Rifleman";
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
