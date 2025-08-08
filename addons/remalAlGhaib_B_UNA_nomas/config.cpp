class cfgPatches
{
  class AET_F_remalAlGhaib_B_UNA_nomas
  {
	skipWhenMissingDependencies = 1;
    units[]={"AET_F_remalAlGhaib_B_UNA_Squad_Leader","AET_F_remalAlGhaib_B_UNA_Grenadeir","AET_F_remalAlGhaib_B_UNA_Medic","AET_F_remalAlGhaib_B_UNA_Machine_Gunner","AET_F_remalAlGhaib_B_UNA_Autorifleman","AET_F_remalAlGhaib_B_UNA_AT_Specialist","AET_F_remalAlGhaib_B_UNA_Vehicle_Crew","AET_F_remalAlGhaib_B_UNA_Rifleman","AET_F_remalAlGhaib_B_UNA_MATV","AET_F_remalAlGhaib_B_UNA_Offroad","AET_F_remalAlGhaib_B_UNA_Offroad_UP","AET_F_remalAlGhaib_B_UNA_Ram_1500","AET_F_remalAlGhaib_B_UNA_Ram_1500_MMG"};
    weapons[]={"AET_F_remalAlGhaib_B_UNA_arifle_Velko_50rnd_MRCO_lxWS_saber_light_lxWS","AET_F_remalAlGhaib_B_UNA_hgun_ACPC2_F","AET_F_remalAlGhaib_B_UNA_arifle_VelkoR5_GL_lxWS_saber_light_lxWS","AET_F_remalAlGhaib_B_UNA_arifle_Velko_lxWS_saber_light_lxWS","AET_F_remalAlGhaib_B_UNA_LMG_S77_Compact_MRCO_lxWS_saber_light_lxWS","AET_F_remalAlGhaib_B_UNA_LMG_Mk200_F_saber_light_lxWS","AET_F_remalAlGhaib_B_UNA_arifle_Velko_50rnd_ACO_lxWS_saber_light_lxWS","AET_F_remalAlGhaib_B_UNA_launch_RPG32_tan_lxWS"};
    requiredVersion=0.1;
    requiredAddons[]={"ace_medical_treatment","A3_Weapons_F","A3_Weapons_F_Pistols_ACPC2","Characters_f_lxWS","Characters_f_lxWS_headgear","A3_Weapons_F_Items","Weapons_1_F_lxWS_Rifles_Velko","characters_1_F_lxWS","Weapons_F_lxWS_Rifles","A3_Weapons_F_Machineguns_M200","Weapons_1_F_lxWS_Launchers_rpg32"};
  };
};

class cfgFactionClasses
{
  class AET_F_remalAlGhaib_B_UNA_nomas
  {
    icon="";
    displayName="UNA - Remal Al-Ghaib";
    side=1;
    priority=1;
  };
};


class cfgWeapons
{
  class arifle_Velko_50rnd_MRCO_lxWS;
  class hgun_ACPC2_F;
  class arifle_VelkoR5_GL_lxWS;
  class arifle_Velko_lxWS;
  class LMG_S77_Compact_MRCO_lxWS;
  class LMG_Mk200_F;
  class arifle_Velko_50rnd_ACO_lxWS;
  class launch_RPG32_tan_lxWS;

  class AET_F_remalAlGhaib_B_UNA_arifle_Velko_50rnd_MRCO_lxWS_saber_light_lxWS: arifle_Velko_50rnd_MRCO_lxWS
  {
    displayName="Vektor R4";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="saber_light_lxWS";
      };
    };
  };

  class AET_F_remalAlGhaib_B_UNA_hgun_ACPC2_F: hgun_ACPC2_F
  {
    displayName="Custom Covert II";
    scope=1;
    class LinkedItems
    {
    };
  };

  class AET_F_remalAlGhaib_B_UNA_arifle_VelkoR5_GL_lxWS_saber_light_lxWS: arifle_VelkoR5_GL_lxWS
  {
    displayName="Vektor R5 Carbine GL";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="saber_light_lxWS";
      };
    };
  };

  class AET_F_remalAlGhaib_B_UNA_arifle_Velko_lxWS_saber_light_lxWS: arifle_Velko_lxWS
  {
    displayName="Vektor R4";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="saber_light_lxWS";
      };
    };
  };

  class AET_F_remalAlGhaib_B_UNA_LMG_S77_Compact_MRCO_lxWS_saber_light_lxWS: LMG_S77_Compact_MRCO_lxWS
  {
    displayName="Vektor SS-77 Compact";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="saber_light_lxWS";
      };
    };
  };

  class AET_F_remalAlGhaib_B_UNA_LMG_Mk200_F_saber_light_lxWS: LMG_Mk200_F
  {
    displayName="Stoner 99 LMG";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="saber_light_lxWS";
      };
    };
  };

  class AET_F_remalAlGhaib_B_UNA_arifle_Velko_50rnd_ACO_lxWS_saber_light_lxWS: arifle_Velko_50rnd_ACO_lxWS
  {
    displayName="Vektor R4";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="saber_light_lxWS";
      };
    };
  };

  class AET_F_remalAlGhaib_B_UNA_launch_RPG32_tan_lxWS: launch_RPG32_tan_lxWS
  {
    displayName="RPG-32 (Sand)";
    scope=1;
    class LinkedItems
    {
    };
  };

};

class cfgVehicles
{
  class B_UN_Soldier_TL_lxWS;
  class B_UN_Soldier_GL_lxWS;
  class B_UN_medic_lxWS;
  class B_AssaultPack_cbr;
  class B_UN_HeavyGunner_lxWS;
  class B_UN_soldier_AR_lxWS;
  class B_UN_soldier_LAT2_lxWS;
  class B_FieldPack_cbr_LAT2_lxWS;
  class B_UN_Soldier_lite_lxWS;
  class B_UN_Soldier_lxWS;
  class B_UN_MRAP_01_lxWS;
  class B_UN_Offroad_lxWS;
  class B_UN_Offroad_Armor_lxWS;
  class B_UN_Pickup_rf;
  class B_UN_Pickup_mmg_rf;

  class AET_F_remalAlGhaib_B_UNA_Squad_Leader: B_UN_Soldier_TL_lxWS
  {
    faction="AET_F_remalAlGhaib_B_UNA_nomas";
    side=1;
    displayName="Squad Leader";
    uniformClass="U_lxWS_UN_Camo3";
    weapons[]={"Binocular","AET_F_remalAlGhaib_B_UNA_arifle_Velko_50rnd_MRCO_lxWS_saber_light_lxWS","AET_F_remalAlGhaib_B_UNA_hgun_ACPC2_F","Put","Throw"};
    respawnWeapons[]={"Binocular","AET_F_remalAlGhaib_B_UNA_arifle_Velko_50rnd_MRCO_lxWS_saber_light_lxWS","AET_F_remalAlGhaib_B_UNA_hgun_ACPC2_F","Put","Throw"};
    items[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
    respawnMagazines[]={"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","lxWS_H_PASGT_goggles_UN_F","V_lxWS_UN_Vest_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","lxWS_H_PASGT_goggles_UN_F","V_lxWS_UN_Vest_F"};
    backpack="";
  };

  class AET_F_remalAlGhaib_B_UNA_Grenadeir: B_UN_Soldier_GL_lxWS
  {
    faction="AET_F_remalAlGhaib_B_UNA_nomas";
    side=1;
    displayName="Grenadeir";
    uniformClass="U_lxWS_UN_Camo2";
    weapons[]={"AET_F_remalAlGhaib_B_UNA_arifle_VelkoR5_GL_lxWS_saber_light_lxWS","AET_F_remalAlGhaib_B_UNA_hgun_ACPC2_F","Put","Throw"};
    respawnWeapons[]={"AET_F_remalAlGhaib_B_UNA_arifle_VelkoR5_GL_lxWS_saber_light_lxWS","AET_F_remalAlGhaib_B_UNA_hgun_ACPC2_F","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","1Rnd_SmokeOrange_Grenade_shell","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell"};
    respawnMagazines[]={"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","1Rnd_SmokeOrange_Grenade_shell","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","lxWS_H_PASGT_goggles_UN_F","V_lxWS_UN_Vest_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","lxWS_H_PASGT_goggles_UN_F","V_lxWS_UN_Vest_F"};
    backpack="";
  };

  class AET_F_remalAlGhaib_B_UNA_Medic: B_UN_medic_lxWS
  {
    faction="AET_F_remalAlGhaib_B_UNA_nomas";
    side=1;
    displayName="Medic";
    uniformClass="U_lxWS_UN_Camo3";
    weapons[]={"AET_F_remalAlGhaib_B_UNA_arifle_Velko_lxWS_saber_light_lxWS","AET_F_remalAlGhaib_B_UNA_hgun_ACPC2_F","Put","Throw"};
    respawnWeapons[]={"AET_F_remalAlGhaib_B_UNA_arifle_Velko_lxWS_saber_light_lxWS","AET_F_remalAlGhaib_B_UNA_hgun_ACPC2_F","Put","Throw"};
    items[]={"FirstAidKit","Medikit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","Medikit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
    magazines[]={"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
    respawnMagazines[]={"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","lxWS_H_ssh40_un","V_lxWS_UN_Vest_Lite_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","lxWS_H_ssh40_un","V_lxWS_UN_Vest_Lite_F"};
    backpack="AET_F_remalAlGhaib_B_UNA_Medic_pack";
  };

  class AET_F_remalAlGhaib_B_UNA_Machine_Gunner: B_UN_HeavyGunner_lxWS
  {
    faction="AET_F_remalAlGhaib_B_UNA_nomas";
    side=1;
    displayName="Machine Gunner";
    uniformClass="U_lxWS_UN_Camo3";
    weapons[]={"AET_F_remalAlGhaib_B_UNA_LMG_S77_Compact_MRCO_lxWS_saber_light_lxWS","AET_F_remalAlGhaib_B_UNA_hgun_ACPC2_F","Put","Throw"};
    respawnWeapons[]={"AET_F_remalAlGhaib_B_UNA_LMG_S77_Compact_MRCO_lxWS_saber_light_lxWS","AET_F_remalAlGhaib_B_UNA_hgun_ACPC2_F","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"Chemlight_green","HandGrenade","SmokeShellGreen","100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_Tracer_lxWS","9Rnd_45ACP_Mag","SmokeShell","Chemlight_green"};
    respawnMagazines[]={"Chemlight_green","HandGrenade","SmokeShellGreen","100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_Tracer_lxWS","9Rnd_45ACP_Mag","SmokeShell","Chemlight_green"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","lxWS_H_PASGT_goggles_UN_F","V_lxWS_UN_Vest_F","G_Bandanna_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","lxWS_H_PASGT_goggles_UN_F","V_lxWS_UN_Vest_F","G_Bandanna_tan"};
    backpack="";
  };

  class AET_F_remalAlGhaib_B_UNA_Autorifleman: B_UN_soldier_AR_lxWS
  {
    faction="AET_F_remalAlGhaib_B_UNA_nomas";
    side=1;
    displayName="Autorifleman";
    uniformClass="U_lxWS_UN_Camo3";
    weapons[]={"AET_F_remalAlGhaib_B_UNA_LMG_Mk200_F_saber_light_lxWS","AET_F_remalAlGhaib_B_UNA_hgun_ACPC2_F","Put","Throw"};
    respawnWeapons[]={"AET_F_remalAlGhaib_B_UNA_LMG_Mk200_F_saber_light_lxWS","AET_F_remalAlGhaib_B_UNA_hgun_ACPC2_F","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellGreen","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","Chemlight_green","Chemlight_green"};
    respawnMagazines[]={"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellGreen","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","Chemlight_green","Chemlight_green"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","lxWS_H_PASGT_goggles_UN_F","V_lxWS_UN_Vest_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","lxWS_H_PASGT_goggles_UN_F","V_lxWS_UN_Vest_F"};
    backpack="";
  };

  class AET_F_remalAlGhaib_B_UNA_AT_Specialist: B_UN_soldier_LAT2_lxWS
  {
    faction="AET_F_remalAlGhaib_B_UNA_nomas";
    side=1;
    displayName="AT Specialist";
    uniformClass="U_lxWS_UN_Camo3";
    weapons[]={"AET_F_remalAlGhaib_B_UNA_arifle_Velko_50rnd_ACO_lxWS_saber_light_lxWS","AET_F_remalAlGhaib_B_UNA_launch_RPG32_tan_lxWS","AET_F_remalAlGhaib_B_UNA_hgun_ACPC2_F","Put","Throw"};
    respawnWeapons[]={"AET_F_remalAlGhaib_B_UNA_arifle_Velko_50rnd_ACO_lxWS_saber_light_lxWS","AET_F_remalAlGhaib_B_UNA_launch_RPG32_tan_lxWS","AET_F_remalAlGhaib_B_UNA_hgun_ACPC2_F","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","RPG32_F","RPG32_F","RPG32_HE_F","RPG32_HE_F"};
    respawnMagazines[]={"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","RPG32_F","RPG32_F","RPG32_HE_F","RPG32_HE_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","lxWS_H_ssh40_un","V_lxWS_UN_Vest_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","lxWS_H_ssh40_un","V_lxWS_UN_Vest_F"};
    backpack="AET_F_remalAlGhaib_B_UNA_AT_Specialist_pack";
  };

  class AET_F_remalAlGhaib_B_UNA_Vehicle_Crew: B_UN_Soldier_lite_lxWS
  {
    faction="AET_F_remalAlGhaib_B_UNA_nomas";
    side=1;
    displayName="Vehicle Crew";
    uniformClass="U_lxWS_UN_Camo3";
    weapons[]={"AET_F_remalAlGhaib_B_UNA_arifle_Velko_50rnd_ACO_lxWS_saber_light_lxWS","AET_F_remalAlGhaib_B_UNA_hgun_ACPC2_F","Put","Throw"};
    respawnWeapons[]={"AET_F_remalAlGhaib_B_UNA_arifle_Velko_50rnd_ACO_lxWS_saber_light_lxWS","AET_F_remalAlGhaib_B_UNA_hgun_ACPC2_F","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
    respawnMagazines[]={"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","lxWS_H_ssh40_un","V_lxWS_UN_Vest_Lite_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","lxWS_H_ssh40_un","V_lxWS_UN_Vest_Lite_F"};
    backpack="";
  };

  class AET_F_remalAlGhaib_B_UNA_Rifleman: B_UN_Soldier_lxWS
  {
    faction="AET_F_remalAlGhaib_B_UNA_nomas";
    side=1;
    displayName="Rifleman";
    uniformClass="U_lxWS_UN_Camo3";
    weapons[]={"AET_F_remalAlGhaib_B_UNA_arifle_Velko_50rnd_ACO_lxWS_saber_light_lxWS","AET_F_remalAlGhaib_B_UNA_hgun_ACPC2_F","Put","Throw"};
    respawnWeapons[]={"AET_F_remalAlGhaib_B_UNA_arifle_Velko_50rnd_ACO_lxWS_saber_light_lxWS","AET_F_remalAlGhaib_B_UNA_hgun_ACPC2_F","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
    respawnMagazines[]={"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","lxWS_H_ssh40_un","V_lxWS_UN_Vest_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","lxWS_H_ssh40_un","V_lxWS_UN_Vest_F"};
    backpack="";
  };

  class AET_F_remalAlGhaib_B_UNA_MATV: B_UN_MRAP_01_lxWS
  {
    faction="AET_F_remalAlGhaib_B_UNA_nomas";
    side=1;
    displayName="MATV";
    hiddenSelectionsTextures[]={"lxws\vehicles_f_lxws\data\mrap_01\mrap_01_un_base_co.paa","lxws\vehicles_f_lxws\data\mrap_01\mrap_01_un_adds_co.paa",""};
    crew="AET_F_remalAlGhaib_B_UNA_Vehicle_Crew";
    typicalCargo[]={"AET_F_remalAlGhaib_B_UNA_Vehicle_Crew"};
  };

  class AET_F_remalAlGhaib_B_UNA_Offroad: B_UN_Offroad_lxWS
  {
    faction="AET_F_remalAlGhaib_B_UNA_nomas";
    side=1;
    displayName="Offroad";
    hiddenSelectionsTextures[]={"lxws\vehicles_f_lxws\data\offroad_01\offroad_01_ext_un_co.paa","lxws\vehicles_f_lxws\data\offroad_01\offroad_01_ext_un_co.paa","lxws\vehicles_f_lxws\offroad_01\data\offroad_01_adds_black_co.paa","lxws\vehicles_f_lxws\offroad_01\data\offroad_01_armor_whiteun_co.paa"};
    crew="AET_F_remalAlGhaib_B_UNA_Vehicle_Crew";
    typicalCargo[]={"AET_F_remalAlGhaib_B_UNA_Vehicle_Crew"};
  };

  class AET_F_remalAlGhaib_B_UNA_Offroad_UP: B_UN_Offroad_Armor_lxWS
  {
    faction="AET_F_remalAlGhaib_B_UNA_nomas";
    side=1;
    displayName="Offroad UP";
    hiddenSelectionsTextures[]={"lxws\vehicles_f_lxws\data\offroad_01\offroad_01_ext_un_co.paa","lxws\vehicles_f_lxws\data\offroad_01\offroad_01_ext_un_co.paa","lxws\vehicles_f_lxws\offroad_01\data\offroad_01_adds_black_co.paa","lxws\vehicles_f_lxws\offroad_01\data\offroad_01_armor_whiteun_co.paa"};
    crew="AET_F_remalAlGhaib_B_UNA_Vehicle_Crew";
    typicalCargo[]={"AET_F_remalAlGhaib_B_UNA_Vehicle_Crew"};
  };

  class AET_F_remalAlGhaib_B_UNA_Ram_1500: B_UN_Pickup_rf
  {
    faction="AET_F_remalAlGhaib_B_UNA_nomas";
    side=1;
    displayName="Ram 1500";
    hiddenSelectionsTextures[]={"lxrf\vehicles_rf\pickup_01\data\pickup_01_ext_una_co.paa","lxrf\vehicles_rf\pickup_01\data\pickup_01_adds_water_co.paa","lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\vehicles_rf\pickup_01\data\pickup_01_aat_co.paa","lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa","lxrf\vehicles_rf\pickup_01\data\pickup_01_service_white_co.paa"};
    crew="AET_F_remalAlGhaib_B_UNA_Vehicle_Crew";
    typicalCargo[]={"AET_F_remalAlGhaib_B_UNA_Vehicle_Crew"};
  };

  class AET_F_remalAlGhaib_B_UNA_Ram_1500_MMG: B_UN_Pickup_mmg_rf
  {
    faction="AET_F_remalAlGhaib_B_UNA_nomas";
    side=1;
    displayName="Ram 1500 MMG";
    hiddenSelectionsTextures[]={"lxrf\vehicles_rf\pickup_01\data\pickup_01_ext_una_co.paa","lxrf\vehicles_rf\pickup_01\data\pickup_01_adds_water_co.paa","lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\vehicles_rf\pickup_01\data\pickup_01_aat_co.paa","lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa","lxrf\vehicles_rf\pickup_01\data\pickup_01_service_white_co.paa"};
    crew="AET_F_remalAlGhaib_B_UNA_Vehicle_Crew";
    typicalCargo[]={"AET_F_remalAlGhaib_B_UNA_Vehicle_Crew"};
  };


  class AET_F_remalAlGhaib_B_UNA_Medic_pack: B_AssaultPack_cbr
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


  class AET_F_remalAlGhaib_B_UNA_AT_Specialist_pack: B_FieldPack_cbr_LAT2_lxWS
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_RPG32_F {count=2;magazine="RPG32_F";};
     class _xx_RPG32_HE_F {count=2;magazine="RPG32_HE_F";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };

};

//////////////// Paste cfgGroups after this line //////////////// 
class cfgGroups
{  
  class WEST
  {
    name="BLUFOR";
    class nomas
    {
      name="UNA - Remal Al-Ghaib";

      class Infantry
      {
        name="Infantry";

        class AET_F_remalAlGhaib_B_UNA_B_Weapons_Squad
        {
          name="Weapons Squad";
          faction="AET_F_remalAlGhaib_B_UNA_nomas";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Grenadeir";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Medic";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Autorifleman";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_AT_Specialist";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Rifleman";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit7
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Rifleman";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
        };
        class AET_F_remalAlGhaib_B_UNA_B_Rifle_Squad
        {
          name="Rifle Squad";
          faction="AET_F_remalAlGhaib_B_UNA_nomas";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Grenadeir";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Medic";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Autorifleman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Rifleman";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Rifleman";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Rifleman";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit7
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Rifleman";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
        };
        class AET_F_remalAlGhaib_B_UNA_B_Fire_Team_GL
        {
          name="Fire Team GL";
          faction="AET_F_remalAlGhaib_B_UNA_nomas";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Grenadeir";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Rifleman";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Rifleman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class AET_F_remalAlGhaib_B_UNA_B_Fire_Team_AR
        {
          name="Fire Team AR";
          faction="AET_F_remalAlGhaib_B_UNA_nomas";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Autorifleman";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Rifleman";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Rifleman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class AET_F_remalAlGhaib_B_UNA_B_Patrol
        {
          name="Patrol";
          faction="AET_F_remalAlGhaib_B_UNA_nomas";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Rifleman";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Rifleman";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
        };
      };
      class Motorized
      {
        name="Motorized";

        class AET_F_remalAlGhaib_B_UNA_B_MATV
        {
          name="MATV";
          faction="AET_F_remalAlGhaib_B_UNA_nomas";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_MATV";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Rifleman";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Rifleman";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
        };
        class AET_F_remalAlGhaib_B_UNA_B_Offroad
        {
          name="Offroad";
          faction="AET_F_remalAlGhaib_B_UNA_nomas";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Offroad";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Autorifleman";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Rifleman";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
          class Unit4
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Rifleman";
            rank="PRIVATE";
            position[]={0,-60,0};
          };
        };
        class AET_F_remalAlGhaib_B_UNA_B_Offroad_UP
        {
          name="Offroad UP";
          faction="AET_F_remalAlGhaib_B_UNA_nomas";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Offroad_UP";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Autorifleman";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Rifleman";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
          class Unit4
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Rifleman";
            rank="PRIVATE";
            position[]={0,-60,0};
          };
        };
        class AET_F_remalAlGhaib_B_UNA_B_Ram_1500
        {
          name="Ram 1500";
          faction="AET_F_remalAlGhaib_B_UNA_nomas";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Ram_1500";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Autorifleman";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Rifleman";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
          class Unit4
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Rifleman";
            rank="PRIVATE";
            position[]={0,-60,0};
          };
        };
        class AET_F_remalAlGhaib_B_UNA_B_Ram_1500_MMG
        {
          name="Ram 1500 MMG";
          faction="AET_F_remalAlGhaib_B_UNA_nomas";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Ram_1500_MMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Autorifleman";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Rifleman";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
          class Unit4
          {
            side=1;
            vehicle="AET_F_remalAlGhaib_B_UNA_Rifleman";
            rank="PRIVATE";
            position[]={0,-60,0};
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
