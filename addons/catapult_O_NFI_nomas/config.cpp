class cfgPatches
{
  class AET_F_catapult_O_NFI_nomas
  {
	skipWhenMissingDependencies = 1;
    units[]={"AET_F_catapult_O_NFI_Helicopter_Pilot","AET_F_catapult_O_NFI_Squad_Leader","AET_F_catapult_O_NFI_Team_Leader","AET_F_catapult_O_NFI_Medic","AET_F_catapult_O_NFI_Autorifleman","AET_F_catapult_O_NFI_Marksman","AET_F_catapult_O_NFI_Anti_Tank_Specialist","AET_F_catapult_O_NFI_Anti_Air_Specialist","AET_F_catapult_O_NFI_Rifleman","AET_F_catapult_O_NFI_Rifleman_Light","AET_F_catapult_O_NFI_Crewman","AET_F_catapult_O_NFI_Officer","AET_F_catapult_O_NFI_Breacher","AET_F_catapult_O_NFI_Crewman_Light","AET_F_catapult_O_NFI_Sniper","AET_F_catapult_O_NFI_Spotter","AET_F_catapult_O_NFI_M413_Bison_MGS","AET_F_catapult_O_NFI_M412_Bison_IFV","AET_F_catapult_O_NFI_M112_Wet_Patrol_Craft_LAAG","AET_F_catapult_O_NFI_M112_Wet_Patrol_Craft_Unarmed","AET_F_catapult_O_NFI_M12_APC","AET_F_catapult_O_NFI_M12_LRV_LAAG","AET_F_catapult_O_NFI_M12_TD","AET_F_catapult_O_NFI_M12_APC_VBIED","AET_F_catapult_O_NFI_M12_FAV_VBIED","AET_F_catapult_O_NFI_M12_FAV","AET_F_catapult_O_NFI_M12A1_LRV_Rocket","AET_F_catapult_O_NFI_M12R_AA","AET_F_catapult_O_NFI_M274R_Mongoose","AET_F_catapult_O_NFI_AV_14_Hornet","AET_F_catapult_O_NFI_D77H_TCI_Pelican","AET_F_catapult_O_NFI_D77H_TCI_AV_Pelican","AET_F_catapult_O_NFI_M493_APC_Oryx_M37_RCWS","AET_F_catapult_O_NFI_M494_Oryx_IFV","AET_F_catapult_O_NFI_AIE_486H_MMG_Low","AET_F_catapult_O_NFI_AIE_486H_MMG","AET_F_catapult_O_NFI_AT_Rocket_Turret","AET_F_catapult_O_NFI_AU_44","AET_F_catapult_O_NFI_FG75_Anti_Tank_Gun","AET_F_catapult_O_NFI_M41_LAAG_Turret","AET_F_catapult_O_NFI_M79_AA_Turret","AET_F_catapult_O_NFI_LAU_65D_SGM_151","AET_F_catapult_O_NFI_M247H_Shield","AET_F_catapult_O_NFI_M493_APC_Oryx_M37","AET_F_catapult_O_NFI_M808B_Scorpion_MBT"};
    weapons[]={"AET_F_catapult_O_NFI_OPTRE_M7","AET_F_catapult_O_NFI_OPTRE_M6G","AET_F_catapult_O_NFI_OPTRE_M26_GL_F","AET_F_catapult_O_NFI_OPTRE_M26_F","AET_F_catapult_O_NFI_OPTRE_M26_LMG_F","AET_F_catapult_O_NFI_OPTRE_M295_BMR","AET_F_catapult_O_NFI_OPTRE_M44_Lykoi_Semi_Disposable_AT_Grey","AET_F_catapult_O_NFI_OPTRE_M26_Shotgun_F","AET_F_catapult_O_NFI_OPTRE_SRS99C"};
    requiredVersion=0.1;
    requiredAddons[]={"A3_Weapons_F_Items","A3_Weapons_F","OPTRE_Weapons_SMG","OPTRE_M6GGNR","TCF_OPFOR_Frieden","A3_Characters_F","CuratorOnly_Characters_F_OPFOR","OPTRE_Weapons_MG_M26","OPTRE_Weapons_DMR","OPTRE_Weapons_AT_M44_Lykoi","TCF_OPFOR_Seccessionist","ace_explosives","ace_rangecard","ace_kestrel4500","OPTRE_Weapons_Items","OPTRE_Weapons_Sniper"};
  };
};

class cfgFactionClasses
{
  class AET_F_catapult_O_NFI_nomas
  {
    icon="";
    displayName="NFI - Catapult";
    side=0;
    priority=1;
  };
};


class cfgWeapons
{
  class OPTRE_M7;
  class OPTRE_M6G;
  class OPTRE_M26_GL_F;
  class OPTRE_M26_F;
  class OPTRE_M26_LMG_F;
  class OPTRE_M295_BMR;
  class OPTRE_M44_Lykoi_Semi_Disposable_AT_Grey;
  class OPTRE_M26_Shotgun_F;
  class OPTRE_SRS99C;

  class AET_F_catapult_O_NFI_OPTRE_M7: OPTRE_M7
  {
    displayName="M7 Caseless SMG";
    scope=1;
    class LinkedItems
    {
    };
  };

  class AET_F_catapult_O_NFI_OPTRE_M6G: OPTRE_M6G
  {
    displayName="M6G Magnum";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="OPTRE_M6G_Scope";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="OPTRE_M6G_Laser";
      };
    };
  };

  class AET_F_catapult_O_NFI_OPTRE_M26_GL_F: OPTRE_M26_GL_F
  {
    displayName="M26 GL";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="OPTRE_M26_LMG_Comp";
      };
    };
  };

  class AET_F_catapult_O_NFI_OPTRE_M26_F: OPTRE_M26_F
  {
    displayName="M26";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="OPTRE_M26_LMG_Comp";
      };
      class LinkedItemsUnder
      {
        slot="UnderBarrelSlot";
        item="OPTRE_M26_Grippod_Bipod";
      };
    };
  };

  class AET_F_catapult_O_NFI_OPTRE_M26_LMG_F: OPTRE_M26_LMG_F
  {
    displayName="M26 LMG";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="OPTRE_M26_LMG_Comp";
      };
      class LinkedItemsUnder
      {
        slot="UnderBarrelSlot";
        item="OPTRE_M26_Grippod_Bipod";
      };
    };
  };

  class AET_F_catapult_O_NFI_OPTRE_M295_BMR: OPTRE_M295_BMR
  {
    displayName="M295 BMR";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="OPTRE_BMR_Scope";
      };
    };
  };

  class AET_F_catapult_O_NFI_OPTRE_M44_Lykoi_Semi_Disposable_AT_Grey: OPTRE_M44_Lykoi_Semi_Disposable_AT_Grey
  {
    displayName="M44 Lykoi Semi Disposable AT (Grey)";
    scope=1;
    class LinkedItems
    {
    };
  };

  class AET_F_catapult_O_NFI_OPTRE_M26_Shotgun_F: OPTRE_M26_Shotgun_F
  {
    displayName="M26 Shotgun";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="OPTRE_M26_LMG_Comp";
      };
    };
  };

  class AET_F_catapult_O_NFI_OPTRE_SRS99C: OPTRE_SRS99C
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

};

class cfgVehicles
{
  class O_helipilot_F;
  class O_Soldier_SL_F;
  class TCF_ANPRC_560_Black;
  class O_Soldier_TL_F;
  class O_medic_F;
  class TCF_wnato_kitbag;
  class O_Soldier_AR_F;
  class O_soldier_M_F;
  class O_Soldier_AT_F;
  class O_Soldier_AA_F;
  class O_Soldier_F;
  class O_Soldier_lite_F;
  class O_crew_F;
  class O_officer_F;
  class O_sniper_F;
  class O_spotter_F;
  class OPTRE_M413_MGS_INS;
  class OPTRE_M412_IFV_INS;
  class optre_catfish_ins_mg_f;
  class optre_catfish_ins_unarmed_f;
  class Car_F;
  class OPTRE_M12_Base : Car_F
  {
	class Turrets;
  };
  class OPTRE_M12_ins_APC : OPTRE_M12_Base
  {
	class Turrets : Turrets
	{
		class CargoTurret_02;
	};
  };
  class OPTRE_M12_LRV_ins;
  class OPTRE_M12_TD_ins;
  class OPTRE_M12_VBIED_Big;
  class OPTRE_M12_VBIED;
  class OPTRE_M12_FAV_ins;
  class OPTRE_M12A1_LRV_ins;
  class OPTRE_M12R_AA_ins;
  class OPTRE_M274_ATV_Ins;
  class OPTRE_UNSC_hornet_ins;
  class OPTRE_Pelican_unarmed_ins;
  class OPTRE_Pelican_armed_ins;
  class OPTRE_M493_M37_RCWS_Ins;
  class OPTRE_M494_INS;
  class OPTRE_AIE_486H_Low_Static_HMG_Innie;
  class OPTRE_AIE_486H_Static_HMG_Innie;
  class OPTRE_Static_ATGM_Ins;
  class OPTRE_AU_44_INS_Mortar;
  class OPTRE_Static_FG75;
  class OPTRE_Static_M41_Ins;
  class OPTRE_Static_AA_Ins;
  class TCF_FRI_LAU;
  class TCF_M247H_FRI;
  class OPTRE_M493_M37_Ins;
  class OPTRE_M808B_INS;

  class AET_F_catapult_O_NFI_Helicopter_Pilot: O_helipilot_F
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="Helicopter Pilot";
    uniformClass="TCF_FRI_uni_Base";
    weapons[]={"OPTRE_Binoculars","AET_F_catapult_O_NFI_OPTRE_M7","AET_F_catapult_O_NFI_OPTRE_M6G","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","AET_F_catapult_O_NFI_OPTRE_M7","AET_F_catapult_O_NFI_OPTRE_M6G","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_48Rnd_5x23mm_Mag","OPTRE_48Rnd_5x23mm_Mag","OPTRE_48Rnd_5x23mm_Mag","OPTRE_48Rnd_5x23mm_Mag"};
    respawnMagazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_48Rnd_5x23mm_Mag","OPTRE_48Rnd_5x23mm_Mag","OPTRE_48Rnd_5x23mm_Mag","OPTRE_48Rnd_5x23mm_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","H_CrewHelmetHeli_B","TCF_FRI_Rig","OPTRE_NVG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","H_CrewHelmetHeli_B","TCF_FRI_Rig","OPTRE_NVG"};
    backpack="";
  };

  class AET_F_catapult_O_NFI_Squad_Leader: O_Soldier_SL_F
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="Squad Leader";
    uniformClass="TCF_FRI_uni_Base";
    weapons[]={"OPTRE_Binoculars","AET_F_catapult_O_NFI_OPTRE_M26_GL_F","AET_F_catapult_O_NFI_OPTRE_M6G","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","AET_F_catapult_O_NFI_OPTRE_M26_GL_F","AET_F_catapult_O_NFI_OPTRE_M6G","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Blue","OPTRE_M2_Smoke_Blue","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
    respawnMagazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Blue","OPTRE_M2_Smoke_Blue","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG_UAB_UL","OPTRE_Binoculars","TCF_Frihelm","TCF_FRI_Vest_UP","TCF_URB_UP_Shemagh","OPTRE_NVG_UAB_UL"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG_UAB_UL","OPTRE_Binoculars","TCF_Frihelm","TCF_FRI_Vest_UP","TCF_URB_UP_Shemagh","OPTRE_NVG_UAB_UL"};
    backpack="AET_F_catapult_O_NFI_Squad_Leader_pack";
  };

  class AET_F_catapult_O_NFI_Team_Leader: O_Soldier_TL_F
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="Team Leader";
    uniformClass="TCF_FRI_uni_Base";
    weapons[]={"OPTRE_Binoculars","AET_F_catapult_O_NFI_OPTRE_M26_F","AET_F_catapult_O_NFI_OPTRE_M6G","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","AET_F_catapult_O_NFI_OPTRE_M26_F","AET_F_catapult_O_NFI_OPTRE_M6G","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Blue","OPTRE_M2_Smoke_Blue","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow"};
    respawnMagazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Blue","OPTRE_M2_Smoke_Blue","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG_UAB","OPTRE_Binoculars","TCF_Frihelm","TCF_FRI_Vest_UP","TCF_URB_UP_Shemagh","OPTRE_NVG_UAB"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG_UAB","OPTRE_Binoculars","TCF_Frihelm","TCF_FRI_Vest_UP","TCF_URB_UP_Shemagh","OPTRE_NVG_UAB"};
    backpack="";
  };

  class AET_F_catapult_O_NFI_Medic: O_medic_F
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="Medic";
    uniformClass="TCF_FRI_uni_Base";
    weapons[]={"OPTRE_Binoculars","AET_F_catapult_O_NFI_OPTRE_M26_F","AET_F_catapult_O_NFI_OPTRE_M6G","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","AET_F_catapult_O_NFI_OPTRE_M26_F","AET_F_catapult_O_NFI_OPTRE_M6G","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","Medikit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","Medikit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
    magazines[]={"OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
    respawnMagazines[]={"OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG_UAB","OPTRE_Binoculars","TCF_Frihelm","TCF_FRI_Vest_UP","TCF_URB_Shemagh","OPTRE_NVG_UAB"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG_UAB","OPTRE_Binoculars","TCF_Frihelm","TCF_FRI_Vest_UP","TCF_URB_Shemagh","OPTRE_NVG_UAB"};
    backpack="AET_F_catapult_O_NFI_Medic_pack";
  };

  class AET_F_catapult_O_NFI_Autorifleman: O_Soldier_AR_F
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="Autorifleman";
    uniformClass="TCF_FRI_uni_Base";
    weapons[]={"OPTRE_Binoculars","AET_F_catapult_O_NFI_OPTRE_M26_LMG_F","AET_F_catapult_O_NFI_OPTRE_M6G","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","AET_F_catapult_O_NFI_OPTRE_M26_LMG_F","AET_F_catapult_O_NFI_OPTRE_M6G","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_80Rnd_762x51_Mag","OPTRE_80Rnd_762x51_Mag","OPTRE_80Rnd_762x51_Mag","OPTRE_80Rnd_762x51_Mag","OPTRE_80Rnd_762x51_Mag","OPTRE_80Rnd_762x51_Mag","OPTRE_80Rnd_762x51_Mag","OPTRE_80Rnd_762x51_Mag","OPTRE_80Rnd_762x51_Mag","OPTRE_80Rnd_762x51_Mag","OPTRE_80Rnd_762x51_Mag","OPTRE_80Rnd_762x51_Mag","OPTRE_80Rnd_762x51_Mag","OPTRE_80Rnd_762x51_Mag","OPTRE_80Rnd_762x51_Mag","OPTRE_80Rnd_762x51_Mag"};
    respawnMagazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_80Rnd_762x51_Mag","OPTRE_80Rnd_762x51_Mag","OPTRE_80Rnd_762x51_Mag","OPTRE_80Rnd_762x51_Mag","OPTRE_80Rnd_762x51_Mag","OPTRE_80Rnd_762x51_Mag","OPTRE_80Rnd_762x51_Mag","OPTRE_80Rnd_762x51_Mag","OPTRE_80Rnd_762x51_Mag","OPTRE_80Rnd_762x51_Mag","OPTRE_80Rnd_762x51_Mag","OPTRE_80Rnd_762x51_Mag","OPTRE_80Rnd_762x51_Mag","OPTRE_80Rnd_762x51_Mag","OPTRE_80Rnd_762x51_Mag","OPTRE_80Rnd_762x51_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG_UAB","OPTRE_Binoculars","TCF_Frihelm","TCF_FRI_Vest","VES_HUD_Balaclava_G_Black","OPTRE_NVG_UAB"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG_UAB","OPTRE_Binoculars","TCF_Frihelm","TCF_FRI_Vest","VES_HUD_Balaclava_G_Black","OPTRE_NVG_UAB"};
    backpack="AET_F_catapult_O_NFI_Autorifleman_pack";
  };

  class AET_F_catapult_O_NFI_Marksman: O_soldier_M_F
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="Marksman";
    uniformClass="TCF_FRI_uni_Base";
    weapons[]={"OPTRE_Binoculars","AET_F_catapult_O_NFI_OPTRE_M295_BMR","AET_F_catapult_O_NFI_OPTRE_M6G","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","AET_F_catapult_O_NFI_OPTRE_M295_BMR","AET_F_catapult_O_NFI_OPTRE_M6G","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_25Rnd_762x51_AP_Mag","OPTRE_25Rnd_762x51_Mag","OPTRE_25Rnd_762x51_Mag","OPTRE_25Rnd_762x51_Mag","OPTRE_25Rnd_762x51_Mag","OPTRE_25Rnd_762x51_Mag","OPTRE_25Rnd_762x51_Mag","OPTRE_25Rnd_762x51_Mag","OPTRE_25Rnd_762x51_Mag"};
    respawnMagazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_25Rnd_762x51_AP_Mag","OPTRE_25Rnd_762x51_Mag","OPTRE_25Rnd_762x51_Mag","OPTRE_25Rnd_762x51_Mag","OPTRE_25Rnd_762x51_Mag","OPTRE_25Rnd_762x51_Mag","OPTRE_25Rnd_762x51_Mag","OPTRE_25Rnd_762x51_Mag","OPTRE_25Rnd_762x51_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG_UAB","OPTRE_Binoculars","TCF_Frihelm","TCF_FRI_Vest","G_Bandanna_blk","OPTRE_NVG_UAB"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG_UAB","OPTRE_Binoculars","TCF_Frihelm","TCF_FRI_Vest","G_Bandanna_blk","OPTRE_NVG_UAB"};
    backpack="";
  };

  class AET_F_catapult_O_NFI_Anti_Tank_Specialist: O_Soldier_AT_F
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="Anti Tank Specialist";
    uniformClass="TCF_FRI_uni_Base";
    weapons[]={"OPTRE_Binoculars","AET_F_catapult_O_NFI_OPTRE_M26_F","AET_F_catapult_O_NFI_OPTRE_M44_Lykoi_Semi_Disposable_AT_Grey","AET_F_catapult_O_NFI_OPTRE_M6G","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","AET_F_catapult_O_NFI_OPTRE_M26_F","AET_F_catapult_O_NFI_OPTRE_M44_Lykoi_Semi_Disposable_AT_Grey","AET_F_catapult_O_NFI_OPTRE_M6G","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M44_Lykoi_HEAT_mag"};
    respawnMagazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M44_Lykoi_HEAT_mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG_UAB","OPTRE_Binoculars","TCF_Frihelm","TCF_FRI_Vest","VES_HUD_Balaclava_Black","OPTRE_NVG_UAB"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG_UAB","OPTRE_Binoculars","TCF_Frihelm","TCF_FRI_Vest","VES_HUD_Balaclava_Black","OPTRE_NVG_UAB"};
    backpack="";
  };

  class AET_F_catapult_O_NFI_Anti_Air_Specialist: O_Soldier_AA_F
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="Anti Air Specialist";
    uniformClass="TCF_FRI_uni_Base";
    weapons[]={"OPTRE_Binoculars","AET_F_catapult_O_NFI_OPTRE_M26_F","AET_F_catapult_O_NFI_OPTRE_M44_Lykoi_Semi_Disposable_AT_Grey","AET_F_catapult_O_NFI_OPTRE_M6G","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","AET_F_catapult_O_NFI_OPTRE_M26_F","AET_F_catapult_O_NFI_OPTRE_M44_Lykoi_Semi_Disposable_AT_Grey","AET_F_catapult_O_NFI_OPTRE_M6G","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M44_Lykoi_AA_mag"};
    respawnMagazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M44_Lykoi_AA_mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG_UAB","OPTRE_Binoculars","TCF_Frihelm","TCF_FRI_Vest","VES_HUD_Balaclava_Black","OPTRE_NVG_UAB"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG_UAB","OPTRE_Binoculars","TCF_Frihelm","TCF_FRI_Vest","VES_HUD_Balaclava_Black","OPTRE_NVG_UAB"};
    backpack="";
  };

  class AET_F_catapult_O_NFI_Rifleman: O_Soldier_F
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="Rifleman";
    uniformClass="TCF_FRI_uni_Base";
    weapons[]={"OPTRE_Binoculars","AET_F_catapult_O_NFI_OPTRE_M26_F","AET_F_catapult_O_NFI_OPTRE_M6G","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","AET_F_catapult_O_NFI_OPTRE_M26_F","AET_F_catapult_O_NFI_OPTRE_M6G","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag"};
    respawnMagazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG_UAB","OPTRE_Binoculars","TCF_Frihelm","TCF_FRI_Vest","TCF_URB_UP_Shemagh","OPTRE_NVG_UAB"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG_UAB","OPTRE_Binoculars","TCF_Frihelm","TCF_FRI_Vest","TCF_URB_UP_Shemagh","OPTRE_NVG_UAB"};
    backpack="";
  };

  class AET_F_catapult_O_NFI_Rifleman_Light: O_Soldier_lite_F
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="Rifleman Light";
    uniformClass="TCF_FRI_uni_Base";
    weapons[]={"OPTRE_Binoculars","AET_F_catapult_O_NFI_OPTRE_M26_F","AET_F_catapult_O_NFI_OPTRE_M6G","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","AET_F_catapult_O_NFI_OPTRE_M26_F","AET_F_catapult_O_NFI_OPTRE_M6G","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag"};
    respawnMagazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","TCF_MC_Regular","TCF_FRI_Vest","TCF_URB_UP_Shemagh","OPTRE_NVG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","TCF_MC_Regular","TCF_FRI_Vest","TCF_URB_UP_Shemagh","OPTRE_NVG"};
    backpack="";
  };

  class AET_F_catapult_O_NFI_Crewman: O_crew_F
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="Crewman";
    uniformClass="TCF_FRI_uni_Base";
    weapons[]={"OPTRE_Binoculars","AET_F_catapult_O_NFI_OPTRE_M7","AET_F_catapult_O_NFI_OPTRE_M6G","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","AET_F_catapult_O_NFI_OPTRE_M7","AET_F_catapult_O_NFI_OPTRE_M6G","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_48Rnd_5x23mm_Mag","OPTRE_48Rnd_5x23mm_Mag","OPTRE_48Rnd_5x23mm_Mag","OPTRE_48Rnd_5x23mm_Mag"};
    respawnMagazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_48Rnd_5x23mm_Mag","OPTRE_48Rnd_5x23mm_Mag","OPTRE_48Rnd_5x23mm_Mag","OPTRE_48Rnd_5x23mm_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","TCF_SU_Sniper","TCF_FRI_Rig","OPTRE_NVG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","TCF_SU_Sniper","TCF_FRI_Rig","OPTRE_NVG"};
    backpack="";
  };

  class AET_F_catapult_O_NFI_Officer: O_officer_F
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="Officer";
    uniformClass="TCF_FRI_uni_Base";
    weapons[]={"OPTRE_Binoculars","AET_F_catapult_O_NFI_OPTRE_M26_F","AET_F_catapult_O_NFI_OPTRE_M6G","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","AET_F_catapult_O_NFI_OPTRE_M26_F","AET_F_catapult_O_NFI_OPTRE_M6G","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag"};
    respawnMagazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","Frieden_Grey_beret","TCF_FRI_Vest","TCF_URB_UP_Shemagh","OPTRE_NVG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","Frieden_Grey_beret","TCF_FRI_Vest","TCF_URB_UP_Shemagh","OPTRE_NVG"};
    backpack="";
  };

  class AET_F_catapult_O_NFI_Breacher: O_Soldier_F
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="Breacher";
    uniformClass="TCF_FRI_uni_Base";
    weapons[]={"OPTRE_Binoculars","AET_F_catapult_O_NFI_OPTRE_M26_Shotgun_F","AET_F_catapult_O_NFI_OPTRE_M6G","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","AET_F_catapult_O_NFI_OPTRE_M26_Shotgun_F","AET_F_catapult_O_NFI_OPTRE_M6G","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
    magazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","C7_Remote_Mag","C7_Remote_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_12Rnd_12Gauge_Pellets","OPTRE_12Rnd_12Gauge_Pellets","OPTRE_12Rnd_12Gauge_Pellets","OPTRE_12Rnd_12Gauge_Pellets"};
    respawnMagazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","C7_Remote_Mag","C7_Remote_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_12Rnd_12Gauge_Pellets","OPTRE_12Rnd_12Gauge_Pellets","OPTRE_12Rnd_12Gauge_Pellets","OPTRE_12Rnd_12Gauge_Pellets"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG_UAB","OPTRE_Binoculars","TCF_Frihelm","TCF_FRI_Vest_UP","VES_HUD_Balaclava_G_Joker","OPTRE_NVG_UAB"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG_UAB","OPTRE_Binoculars","TCF_Frihelm","TCF_FRI_Vest_UP","VES_HUD_Balaclava_G_Joker","OPTRE_NVG_UAB"};
    backpack="";
  };

  class AET_F_catapult_O_NFI_Crewman_Light: O_Soldier_lite_F
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="Crewman Light";
    uniformClass="TCF_FRI_uni_Base";
    weapons[]={"OPTRE_Binoculars","AET_F_catapult_O_NFI_OPTRE_M26_F","AET_F_catapult_O_NFI_OPTRE_M6G","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","AET_F_catapult_O_NFI_OPTRE_M26_F","AET_F_catapult_O_NFI_OPTRE_M6G","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag"};
    respawnMagazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG_UAB","OPTRE_Binoculars","TCF_Frihelm","TCF_FRI_Vest","TCF_URB_UP_Shemagh","OPTRE_NVG_UAB"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG_UAB","OPTRE_Binoculars","TCF_Frihelm","TCF_FRI_Vest","TCF_URB_UP_Shemagh","OPTRE_NVG_UAB"};
    backpack="";
  };

  class AET_F_catapult_O_NFI_Sniper: O_sniper_F
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="Sniper";
    uniformClass="TCF_FRI_uni_Base";
    weapons[]={"OPTRE_Smartfinder","AET_F_catapult_O_NFI_OPTRE_SRS99C","AET_F_catapult_O_NFI_OPTRE_M6G","Put","Throw"};
    respawnWeapons[]={"OPTRE_Smartfinder","AET_F_catapult_O_NFI_OPTRE_SRS99C","AET_F_catapult_O_NFI_OPTRE_M6G","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","ACE_RangeCard","ACE_Kestrel4500"};
    respawnItems[]={"FirstAidKit","FirstAidKit","ACE_RangeCard","ACE_Kestrel4500"};
    magazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag"};
    respawnMagazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG_MVI","OPTRE_Smartfinder","TCF_Frihelm","TCF_FRI_Vest","TCF_URB_UP_Shemagh","OPTRE_NVG_MVI"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG_MVI","OPTRE_Smartfinder","TCF_Frihelm","TCF_FRI_Vest","TCF_URB_UP_Shemagh","OPTRE_NVG_MVI"};
    backpack="";
  };

  class AET_F_catapult_O_NFI_Spotter: O_spotter_F
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="Spotter";
    uniformClass="TCF_FRI_uni_Base";
    weapons[]={"OPTRE_Smartfinder","AET_F_catapult_O_NFI_OPTRE_M295_BMR","AET_F_catapult_O_NFI_OPTRE_M6G","Put","Throw"};
    respawnWeapons[]={"OPTRE_Smartfinder","AET_F_catapult_O_NFI_OPTRE_M295_BMR","AET_F_catapult_O_NFI_OPTRE_M6G","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","ACE_RangeCard","ACE_Kestrel4500"};
    respawnItems[]={"FirstAidKit","FirstAidKit","ACE_RangeCard","ACE_Kestrel4500"};
    magazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_25Rnd_762x51_AP_Mag","OPTRE_25Rnd_762x51_Mag","OPTRE_25Rnd_762x51_Mag","OPTRE_25Rnd_762x51_Mag","OPTRE_25Rnd_762x51_Mag","OPTRE_25Rnd_762x51_Mag","OPTRE_25Rnd_762x51_Mag","OPTRE_25Rnd_762x51_Mag","OPTRE_25Rnd_762x51_Mag"};
    respawnMagazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_25Rnd_762x51_AP_Mag","OPTRE_25Rnd_762x51_Mag","OPTRE_25Rnd_762x51_Mag","OPTRE_25Rnd_762x51_Mag","OPTRE_25Rnd_762x51_Mag","OPTRE_25Rnd_762x51_Mag","OPTRE_25Rnd_762x51_Mag","OPTRE_25Rnd_762x51_Mag","OPTRE_25Rnd_762x51_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG_MVI","OPTRE_Smartfinder","TCF_Frihelm","TCF_FRI_Vest","G_Bandanna_blk","OPTRE_NVG_MVI"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG_MVI","OPTRE_Smartfinder","TCF_Frihelm","TCF_FRI_Vest","G_Bandanna_blk","OPTRE_NVG_MVI"};
    backpack="";
  };

  class AET_F_catapult_O_NFI_M413_Bison_MGS: OPTRE_M413_MGS_INS
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="M413 Bison MGS";
    hiddenSelectionsTextures[]={"optre_vehicles\bison\data\innie\bison_body_woodland_co.paa","optre_vehicles\bison\data\innie\bison_misc_woodland_co.paa","optre_vehicles\bison\data\bison_wheelscannon_co.paa","optre_vehicles\bison\data\bison_seats_co.paa","optre_vehicles\bison\data\bison_interior_co.paa","optre_vehicles\bison\data\bison_mfcdscreens_co.paa","optre_vehicles\bison\data\bison_90mm_co.paa"};
    crew="AET_F_catapult_O_NFI_Crewman_Light";
    typicalCargo[]={"AET_F_catapult_O_NFI_Crewman"};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
	class TransportBackpacks {};
  };

  class AET_F_catapult_O_NFI_M412_Bison_IFV: OPTRE_M412_IFV_INS
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="M412 Bison IFV";
    hiddenSelectionsTextures[]={"optre_vehicles\bison\data\innie\bison_body_woodland_co.paa","optre_vehicles\bison\data\innie\bison_misc_woodland_co.paa","optre_vehicles\bison\data\bison_wheelscannon_co.paa","optre_vehicles\bison\data\bison_seats_co.paa","optre_vehicles\bison\data\bison_interior_co.paa","optre_vehicles\bison\data\bison_mfcdscreens_co.paa","optre_vehicles\bison\data\bison_90mm_co.paa"};
    crew="AET_F_catapult_O_NFI_Crewman";
    typicalCargo[]={"AET_F_catapult_O_NFI_Crewman"};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
	class TransportBackpacks {};
  };

  class AET_F_catapult_O_NFI_M112_Wet_Patrol_Craft_LAAG: optre_catfish_ins_mg_f
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="M112 Wet Patrol Craft LAAG";
    hiddenSelectionsTextures[]={"optre_vehicles\catfish\data\optre_catfish_boat_innie_co.paa","optre_vehicles\catfish\data\optre_catfish_interior_co.paa","optre_vehicles\catfish\data\optre_catfish_seats_co.paa","optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa","optre_vehicles\warthog\data\turrets\m12_turret_co.paa","optre_vehicles\warthog\data\turrets\sight_co.paa","optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"};
    crew="AET_F_catapult_O_NFI_Crewman_Light";
    typicalCargo[]={"AET_F_catapult_O_NFI_Crewman_Light"};
  };

  class AET_F_catapult_O_NFI_M112_Wet_Patrol_Craft_Unarmed: optre_catfish_ins_unarmed_f
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="M112 Wet Patrol Craft Unarmed";
    hiddenSelectionsTextures[]={"optre_vehicles\catfish\data\optre_catfish_boat_innie_co.paa"};
    crew="AET_F_catapult_O_NFI_Crewman_Light";
    typicalCargo[]={"AET_F_catapult_O_NFI_Crewman_Light"};
  };

  class AET_F_catapult_O_NFI_M12_APC: OPTRE_M12_ins_APC
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="M12 APC";
    hiddenSelectionsTextures[]={"optre_vehicles\warthog\data\ins\m12hogmaav_extupper_innie2_co.paa","optre_vehicles\warthog\data\night\m12hogmaav_extunder_night_co.paa","optre_vehicles\warthog\data\indapc_lopo_co.paa","optre_vehicles\warthog\data\decals_ca.paa","optre_vehicles\warthog\data\m12hogmaav_interior_co.paa","optre_vehicles\warthog\data\apc_ind_det1_lopo_co.paa"};
    crew="AET_F_catapult_O_NFI_Crewman_Light";
    typicalCargo[]={"AET_F_catapult_O_NFI_Crewman_Light"};
	class Turrets : Turrets
	{
		class CargoTurret_02 : CargoTurret_02
		{
			gunnerType="AET_F_catapult_O_NFI_Autorifleman";
		};
	};
  };

  class AET_F_catapult_O_NFI_M12_LRV_LAAG: OPTRE_M12_LRV_ins
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="M12 LRV LAAG";
    hiddenSelectionsTextures[]={"optre_vehicles\warthog\data\ins\m12hogmaav_extupper_innie2_co.paa","optre_vehicles\warthog\data\night\m12hogmaav_extunder_night_co.paa","optre_vehicles\warthog\data\ins\m12_turret_ins3_co.paa","optre_vehicles\warthog\data\decals_ca.paa","optre_vehicles\warthog\data\m12hogmaav_interior_co.paa","optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa","optre_vehicles\warthog\data\turrets\sight_co.paa"};
    crew="AET_F_catapult_O_NFI_Crewman_Light";
    typicalCargo[]={"AET_F_catapult_O_NFI_Crewman_Light"};
  };

  class AET_F_catapult_O_NFI_M12_TD: OPTRE_M12_TD_ins
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="M12 TD";
    hiddenSelectionsTextures[]={"optre_vehicles\warthog\data\ins\m12hogmaav_extupper_innie2_co.paa","optre_vehicles\warthog\data\night\m12hogmaav_extunder_night_co.paa","optre_vehicles\warthog\data\night\transp_lopo_night_co.paa","optre_vehicles\warthog\data\night\hog_apc_night_co.paa","optre_weapons_turrets\fg75\data\cannon_co.paa","optre_weapons_turrets\fg75\data\carriage_co.paa","optre_vehicles\warthog\data\decals_ca.paa","optre_vehicles\warthog\data\m12hogmaav_interior_co.paa","optre_weapons_turrets\fg75\data\console_co.paa"};
    crew="AET_F_catapult_O_NFI_Crewman_Light";
    typicalCargo[]={"AET_F_catapult_O_NFI_Crewman_Light"};
  };

  class AET_F_catapult_O_NFI_M12_APC_VBIED: OPTRE_M12_VBIED_Big
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="M12 APC VBIED";
    hiddenSelectionsTextures[]={"optre_vehicles\warthog\data\ins\m12hogmaav_extupper_innie2_co.paa","optre_vehicles\warthog\data\night\m12hogmaav_extunder_night_co.paa","optre_vehicles\warthog\data\decals_ca.paa","optre_vehicles\warthog\data\m12hogmaav_interior_co.paa","optre_vehicles\warthog\data\indapc_lopo_co.paa","optre_vehicles\warthog\data\apc_ind_det1_lopo_co.paa"};
    crew="AET_F_catapult_O_NFI_Crewman_Light";
    typicalCargo[]={"AET_F_catapult_O_NFI_Crewman_Light"};
  };

  class AET_F_catapult_O_NFI_M12_FAV_VBIED: OPTRE_M12_VBIED
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="M12 FAV VBIED";
    hiddenSelectionsTextures[]={"optre_vehicles\warthog\data\ins\m12hogmaav_extupper_innie2_co.paa","optre_vehicles\warthog\data\night\m12hogmaav_extunder_night_co.paa","optre_vehicles\warthog\data\decals_ca.paa","optre_vehicles\warthog\data\m12hogmaav_interior_co.paa"};
    crew="AET_F_catapult_O_NFI_Crewman_Light";
    typicalCargo[]={"AET_F_catapult_O_NFI_Crewman_Light"};
  };

  class AET_F_catapult_O_NFI_M12_FAV: OPTRE_M12_FAV_ins
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="M12 FAV";
    hiddenSelectionsTextures[]={"optre_vehicles\warthog\data\ins\m12hogmaav_extupper_innie2_co.paa","optre_vehicles\warthog\data\night\m12hogmaav_extunder_night_co.paa","optre_vehicles\warthog\data\decals_ca.paa","optre_vehicles\warthog\data\m12hogmaav_interior_co.paa",""};
    crew="AET_F_catapult_O_NFI_Crewman_Light";
    typicalCargo[]={"AET_F_catapult_O_NFI_Crewman_Light"};
  };

  class AET_F_catapult_O_NFI_M12A1_LRV_Rocket: OPTRE_M12A1_LRV_ins
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="M12A1 LRV Rocket";
    hiddenSelectionsTextures[]={"optre_vehicles\warthog\data\ins\m12hogmaav_extupper_innie2_co.paa","optre_vehicles\warthog\data\night\m12hogmaav_extunder_night_co.paa","optre_vehicles\warthog\data\ins\m12_turret_ins3_co.paa","optre_vehicles\warthog\data\decals_ca.paa","optre_vehicles\warthog\data\m12hogmaav_interior_co.paa","optre_vehicles\warthog\data\turrets\m39_turret_co.paa","optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",""};
    crew="AET_F_catapult_O_NFI_Crewman_Light";
    typicalCargo[]={"AET_F_catapult_O_NFI_Crewman_Light"};
  };

  class AET_F_catapult_O_NFI_M12R_AA: OPTRE_M12R_AA_ins
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="M12R AA";
    hiddenSelectionsTextures[]={"optre_vehicles\warthog\data\ins\m12hogmaav_extupper_innie2_co.paa","optre_vehicles\warthog\data\night\m12hogmaav_extunder_night_co.paa","optre_vehicles\warthog\data\ins\m79_turret_ins3_co.paa","optre_vehicles\warthog\data\decals_ca.paa","optre_vehicles\warthog\data\m12hogmaav_interior_co.paa",""};
    crew="AET_F_catapult_O_NFI_Crewman_Light";
    typicalCargo[]={"AET_F_catapult_O_NFI_Crewman_Light"};
  };

  class AET_F_catapult_O_NFI_M274R_Mongoose: OPTRE_M274_ATV_Ins
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="M274R Mongoose";
    hiddenSelectionsTextures[]={"optre_vehicles\mongoose\data\body1_ins_co.paa","optre_vehicles\mongoose\data\body2_ins_co.paa",""};
    crew="AET_F_catapult_O_NFI_Crewman_Light";
    typicalCargo[]={"AET_F_catapult_O_NFI_Crewman_Light"};
  };

  class AET_F_catapult_O_NFI_AV_14_Hornet: OPTRE_UNSC_hornet_ins
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="AV 14 Hornet";
    hiddenSelectionsTextures[]={"optre_vehicles_air\hornet\data\hornet_hull_innie_co.paa","","",""};
    crew="AET_F_catapult_O_NFI_Helicopter_Pilot";
    typicalCargo[]={"AET_F_catapult_O_NFI_Helicopter_Pilot"};
  };

  class AET_F_catapult_O_NFI_D77H_TCI_Pelican: OPTRE_Pelican_unarmed_ins
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="D77H TCI Pelican";
    hiddenSelectionsTextures[]={"optre_vehicles\pelican\data\innie\pelicanexterior_woodland_co.paa","","","","",""};
    crew="AET_F_catapult_O_NFI_Helicopter_Pilot";
    typicalCargo[]={"AET_F_catapult_O_NFI_Helicopter_Pilot"};
  };

  class AET_F_catapult_O_NFI_D77H_TCI_AV_Pelican: OPTRE_Pelican_armed_ins
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="D77H TCI AV Pelican";
    hiddenSelectionsTextures[]={"optre_vehicles\pelican\data\innie\pelicanexterior_woodland_co.paa","","","",""};
    crew="AET_F_catapult_O_NFI_Helicopter_Pilot";
    typicalCargo[]={"AET_F_catapult_O_NFI_Helicopter_Pilot"};
  };

  class AET_F_catapult_O_NFI_M493_APC_Oryx_M37_RCWS: OPTRE_M493_M37_RCWS_Ins
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="M493 APC Oryx M37 RCWS";
    hiddenSelectionsTextures[]={"optre_vehicles_tracked\oryx\data\texture\ins\oryx_armor_woodland_co.paa","optre_vehicles_tracked\oryx\data\texture\ins\oryx_main_woodland_co.paa","optre_vehicles_tracked\oryx\data\texture\ins\oryx_net_ins_ca.paa","optre_vehicles_tracked\oryx\data\texture\ins\oryx_net_ins_ca.paa","optre_vehicles_tracked\oryx\data\texture\ins\oryx_net_ins_ca.paa","optre_vehicles_tracked\oryx\data\texture\ins\oryx_turret_woodland_co.paa","optre_vehicles_tracked\oryx\data\texture\ins\scorp_mg_ins_co.paa",""};
    crew="AET_F_catapult_O_NFI_Crewman";
    typicalCargo[]={"AET_F_catapult_O_NFI_Crewman"};
  };

  class AET_F_catapult_O_NFI_M494_Oryx_IFV: OPTRE_M494_INS
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="M494 Oryx IFV";
    hiddenSelectionsTextures[]={"optre_vehicles_tracked\oryx\data\texture\ins\oryx_armor_woodland_co.paa","optre_vehicles_tracked\oryx\data\texture\ins\oryx_main_woodland_co.paa","optre_vehicles_tracked\oryx\data\texture\ins\oryx_net_ins_ca.paa","optre_vehicles_tracked\oryx\data\texture\ins\oryx_net_ins_ca.paa","optre_vehicles_tracked\oryx\data\texture\ins\oryx_net_ins_ca.paa","optre_vehicles_tracked\oryx\data\texture\ins\oryx_turret_woodland_co.paa","optre_vehicles_tracked\oryx\data\texture\ins\scorp_mg_ins_co.paa",""};
    crew="AET_F_catapult_O_NFI_Crewman";
    typicalCargo[]={"AET_F_catapult_O_NFI_Crewman"};
  };

  class AET_F_catapult_O_NFI_AIE_486H_MMG_Low: OPTRE_AIE_486H_Low_Static_HMG_Innie
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="AIE 486H MMG Low";
    hiddenSelectionsTextures[]={"optre_weapons_turrets\aie_486h\data\innie\aie_woodland2_co.paa","optre_weapons_turrets\aie_486h\data\tripod_co.paa","optre_weapons_turrets\aie_486h\data\innie\decal1_ca.paa"};
    crew="AET_F_catapult_O_NFI_Crewman_Light";
    typicalCargo[]={"AET_F_catapult_O_NFI_Crewman_Light"};
  };

  class AET_F_catapult_O_NFI_AIE_486H_MMG: OPTRE_AIE_486H_Static_HMG_Innie
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="AIE 486H MMG";
    hiddenSelectionsTextures[]={"optre_weapons_turrets\aie_486h\data\innie\aie_woodland_co.paa","optre_weapons_turrets\aie_486h\data\tripod_co.paa","optre_weapons_turrets\aie_486h\data\innie\decal2_ca.paa"};
    crew="AET_F_catapult_O_NFI_Crewman_Light";
    typicalCargo[]={"AET_F_catapult_O_NFI_Crewman_Light"};
  };

  class AET_F_catapult_O_NFI_AT_Rocket_Turret: OPTRE_Static_ATGM_Ins
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="AT Rocket Turret";
    hiddenSelectionsTextures[]={"optre_vehicles\warthog\data\ins\m12_turret_ins3_co.paa"};
    crew="AET_F_catapult_O_NFI_Crewman_Light";
    typicalCargo[]={"AET_F_catapult_O_NFI_Crewman_Light"};
  };

  class AET_F_catapult_O_NFI_AU_44: OPTRE_AU_44_INS_Mortar
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="AU 44";
    hiddenSelectionsTextures[]={"optre_weapons_turrets\au_44_mortar\data\camos\innie\mortar_co.paa","optre_weapons_turrets\au_44_mortar\data\computer_screen.paa"};
    crew="AET_F_catapult_O_NFI_Crewman_Light";
    typicalCargo[]={"AET_F_catapult_O_NFI_Crewman_Light"};
  };

  class AET_F_catapult_O_NFI_FG75_Anti_Tank_Gun: OPTRE_Static_FG75
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="FG75 Anti Tank Gun";
    hiddenSelectionsTextures[]={};
    crew="AET_F_catapult_O_NFI_Crewman_Light";
    typicalCargo[]={"AET_F_catapult_O_NFI_Crewman_Light"};
  };

  class AET_F_catapult_O_NFI_M41_LAAG_Turret: OPTRE_Static_M41_Ins
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="M41 LAAG Turret";
    hiddenSelectionsTextures[]={"optre_vehicles\warthog\data\ins\m12_turret_ins3_co.paa"};
    crew="AET_F_catapult_O_NFI_Crewman_Light";
    typicalCargo[]={"AET_F_catapult_O_NFI_Crewman_Light"};
  };

  class AET_F_catapult_O_NFI_M79_AA_Turret: OPTRE_Static_AA_Ins
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="M79 AA Turret";
    hiddenSelectionsTextures[]={"optre_vehicles\warthog\data\ins\m79_turret_ins3_co.paa"};
    crew="AET_F_catapult_O_NFI_Crewman_Light";
    typicalCargo[]={"AET_F_catapult_O_NFI_Crewman_Light"};
  };

  class AET_F_catapult_O_NFI_LAU_65D_SGM_151: TCF_FRI_LAU
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="LAU 65D SGM 151";
    hiddenSelectionsTextures[]={};
    crew="AET_F_catapult_O_NFI_Crewman_Light";
    typicalCargo[]={"AET_F_catapult_O_NFI_Crewman_Light"};
  };

  class AET_F_catapult_O_NFI_M247H_Shield: TCF_M247H_FRI
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="M247H Shield";
    hiddenSelectionsTextures[]={};
    crew="AET_F_catapult_O_NFI_Crewman_Light";
    typicalCargo[]={"AET_F_catapult_O_NFI_Crewman_Light"};
  };

  class AET_F_catapult_O_NFI_M493_APC_Oryx_M37: OPTRE_M493_M37_Ins
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="M493 APC Oryx M37";
    hiddenSelectionsTextures[]={"optre_vehicles_tracked\oryx\data\texture\ins\oryx_armor_woodland_co.paa","optre_vehicles_tracked\oryx\data\texture\ins\oryx_main_woodland_co.paa","optre_vehicles_tracked\oryx\data\texture\ins\oryx_net_ins_ca.paa","optre_vehicles_tracked\oryx\data\texture\ins\oryx_net_ins_ca.paa","optre_vehicles_tracked\oryx\data\texture\ins\oryx_net_ins_ca.paa","optre_vehicles_tracked\oryx\data\texture\ins\oryx_turret_woodland_co.paa","optre_vehicles_tracked\oryx\data\texture\ins\scorp_mg_ins_co.paa",""};
    crew="AET_F_catapult_O_NFI_Crewman";
    typicalCargo[]={"AET_F_catapult_O_NFI_Crewman"};
  };

  class AET_F_catapult_O_NFI_M808B_Scorpion_MBT: OPTRE_M808B_INS
  {
    faction="AET_F_catapult_O_NFI_nomas";
    side=0;
    displayName="M808B Scorpion MBT";
    hiddenSelectionsTextures[]={"optre_vehicles_tracked\scorpion\data\texture\ins\scorp_base_ins_co.paa","optre_vehicles_tracked\scorpion\data\texture\ins\scorp_tur_ins_co.paa","optre_vehicles_tracked\scorpion\data\texture\ins\det_3_ins_co.paa","optre_vehicles_tracked\scorpion\data\texture\ins\scorp_insdecals_ca.paa","optre_vehicles_tracked\scorpion\data\texture\ins\scorp_net_ins_ca.paa","optre_vehicles_tracked\scorpion\data\texture\ins\scorp_net_ins_ca.paa","optre_vehicles_tracked\scorpion\data\texture\ins\mine_roller_ins_co.paa"};
    crew="AET_F_catapult_O_NFI_Crewman";
    typicalCargo[]={"AET_F_catapult_O_NFI_Crewman"};
  };

  class AET_F_catapult_O_NFI_Squad_Leader_pack: TCF_ANPRC_560_Black
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class AET_F_catapult_O_NFI_Medic_pack: TCF_wnato_kitbag
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


  class AET_F_catapult_O_NFI_Autorifleman_pack: TCF_wnato_kitbag
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_OPTRE_80Rnd_762x51_Mag {count=10;magazine="OPTRE_80Rnd_762x51_Mag";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };

};

//////////////// Paste cfgGroups after this line //////////////// 

class cfgGroups
{  
  class EAST
  {
    name="OPFOR";
    class AET_F_catapult_O_NFI_F
    {
      name="NFI - Catapult";

      class Infantry
      {
        name="Infantry";

        class AET_F_catapult_O_NFI_O_Fire_Team
        {
          name="Fire Team";
          faction="AET_F_catapult_O_NFI_nomas";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Rifleman";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Rifleman";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Rifleman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class AET_F_catapult_O_NFI_O_Support_Team
        {
          name="Support Team";
          faction="AET_F_catapult_O_NFI_nomas";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Autorifleman";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Rifleman";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Rifleman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class AET_F_catapult_O_NFI_O_Anti_Tank_Team
        {
          name="Anti Tank Team";
          faction="AET_F_catapult_O_NFI_nomas";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Anti_Tank_Specialist";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Anti_Tank_Specialist";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Rifleman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class AET_F_catapult_O_NFI_O_Patrol
        {
          name="Patrol";
          faction="AET_F_catapult_O_NFI_nomas";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Rifleman_Light";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Rifleman_Light";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
        };
        class AET_F_catapult_O_NFI_O_Sniper_Team
        {
          name="Sniper Team";
          faction="AET_F_catapult_O_NFI_nomas";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Sniper";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Spotter";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
        };
        class AET_F_catapult_O_NFI_O_Rifle_Squad
        {
          name="Rifle Squad";
          faction="AET_F_catapult_O_NFI_nomas";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Team_Leader";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Medic";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Rifleman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Autorifleman";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Marksman";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Breacher";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit7
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Rifleman";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
        };
        class AET_F_catapult_O_NFI_O_Weapons_Squad
        {
          name="Weapons Squad";
          faction="AET_F_catapult_O_NFI_nomas";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Team_Leader";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Medic";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Rifleman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Autorifleman";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Marksman";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Breacher";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit7
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Anti_Tank_Specialist";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
        };
      };
      class Motorized
      {
        name="Motorized";

        class AET_F_catapult_O_NFI_O_M12_APC
        {
          name="M12 APC";
          faction="AET_F_catapult_O_NFI_nomas";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_M12_APC";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Marksman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Rifleman";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Rifleman";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
          class Unit4
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-60,0};
          };
          class Unit5
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Team_Leader";
            rank="PRIVATE";
            position[]={0,-75,0};
          };
          class Unit6
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Medic";
            rank="PRIVATE";
            position[]={0,-90,0};
          };
          class Unit7
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Rifleman";
            rank="PRIVATE";
            position[]={0,-105,0};
          };
          class Unit8
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Autorifleman";
            rank="PRIVATE";
            position[]={0,-120,0};
          };
        };
      };
      class Mechanized
      {
        name="Mechanized";

        class AET_F_catapult_O_NFI_O_M412_Bison_IFV
        {
          name="M412 Bison IFV";
          faction="AET_F_catapult_O_NFI_nomas";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_M412_Bison_IFV";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Marksman";
            rank="MAJOR";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Rifleman";
            rank="MAJOR";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Rifleman";
            rank="MAJOR";
            position[]={0,-45,0};
          };
          class Unit4
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Squad_Leader";
            rank="MAJOR";
            position[]={0,-60,0};
          };
          class Unit5
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Team_Leader";
            rank="MAJOR";
            position[]={0,-75,0};
          };
          class Unit6
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Medic";
            rank="MAJOR";
            position[]={0,-90,0};
          };
          class Unit7
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Rifleman";
            rank="MAJOR";
            position[]={0,-105,0};
          };
          class Unit8
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Autorifleman";
            rank="MAJOR";
            position[]={0,-120,0};
          };
        };
        class AET_F_catapult_O_NFI_O_M413_Bison_MGS
        {
          name="M413 Bison MGS";
          faction="AET_F_catapult_O_NFI_nomas";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_M413_Bison_MGS";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Marksman";
            rank="MAJOR";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Rifleman";
            rank="MAJOR";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Rifleman";
            rank="MAJOR";
            position[]={0,-45,0};
          };
          class Unit4
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Squad_Leader";
            rank="MAJOR";
            position[]={0,-60,0};
          };
          class Unit5
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Team_Leader";
            rank="MAJOR";
            position[]={0,-75,0};
          };
          class Unit6
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Medic";
            rank="MAJOR";
            position[]={0,-90,0};
          };
          class Unit7
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Rifleman";
            rank="MAJOR";
            position[]={0,-105,0};
          };
          class Unit8
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Autorifleman";
            rank="MAJOR";
            position[]={0,-120,0};
          };
        };
        class AET_F_catapult_O_NFI_O_M493_APC_Oryx_M37
        {
          name="M493 APC Oryx M37";
          faction="AET_F_catapult_O_NFI_nomas";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_M493_APC_Oryx_M37";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Marksman";
            rank="MAJOR";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Rifleman";
            rank="MAJOR";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Rifleman";
            rank="MAJOR";
            position[]={0,-45,0};
          };
          class Unit4
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Squad_Leader";
            rank="MAJOR";
            position[]={0,-60,0};
          };
          class Unit5
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Team_Leader";
            rank="MAJOR";
            position[]={0,-75,0};
          };
          class Unit6
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Medic";
            rank="MAJOR";
            position[]={0,-90,0};
          };
          class Unit7
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Rifleman";
            rank="MAJOR";
            position[]={0,-105,0};
          };
          class Unit8
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Autorifleman";
            rank="MAJOR";
            position[]={0,-120,0};
          };
        };
        class AET_F_catapult_O_NFI_O_M493_APC_Oryx_M37_RCWS
        {
          name="M493 APC Oryx M37 RCWS";
          faction="AET_F_catapult_O_NFI_nomas";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_M493_APC_Oryx_M37_RCWS";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Marksman";
            rank="MAJOR";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Rifleman";
            rank="MAJOR";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Rifleman";
            rank="MAJOR";
            position[]={0,-45,0};
          };
          class Unit4
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Squad_Leader";
            rank="MAJOR";
            position[]={0,-60,0};
          };
          class Unit5
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Team_Leader";
            rank="MAJOR";
            position[]={0,-75,0};
          };
          class Unit6
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Medic";
            rank="MAJOR";
            position[]={0,-90,0};
          };
          class Unit7
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Rifleman";
            rank="MAJOR";
            position[]={0,-105,0};
          };
          class Unit8
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Autorifleman";
            rank="MAJOR";
            position[]={0,-120,0};
          };
        };
        class AET_F_catapult_O_NFI_O_M494_Oryx_IFV
        {
          name="M494 Oryx IFV";
          faction="AET_F_catapult_O_NFI_nomas";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_M494_Oryx_IFV";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Team_Leader";
            rank="MAJOR";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Medic";
            rank="MAJOR";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Rifleman";
            rank="MAJOR";
            position[]={0,-45,0};
          };
          class Unit4
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Autorifleman";
            rank="MAJOR";
            position[]={0,-60,0};
          };
          class Unit5
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Marksman";
            rank="MAJOR";
            position[]={0,-75,0};
          };
          class Unit6
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Rifleman";
            rank="MAJOR";
            position[]={0,-90,0};
          };
          class Unit7
          {
            side=0;
            vehicle="AET_F_catapult_O_NFI_Rifleman";
            rank="MAJOR";
            position[]={0,-105,0};
          };
        };
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

