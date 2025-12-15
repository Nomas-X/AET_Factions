class cfgPatches
{
  class AET_F_remalAlGhaib_I_Tura_nomas
  {
	skipWhenMissingDependencies = 1;
    units[]={"AET_F_remalAlGhaib_I_Tura_Squad_Leader","AET_F_remalAlGhaib_I_Tura_Medic","AET_F_remalAlGhaib_I_Tura_Rifleman_2","AET_F_remalAlGhaib_I_Tura_Vehicle_Crew","AET_F_remalAlGhaib_I_Tura_Marksman","AET_F_remalAlGhaib_I_Tura_AT_Specialist","AET_F_remalAlGhaib_I_Tura_Grenadier","AET_F_remalAlGhaib_I_Tura_IED_Specialist","AET_F_remalAlGhaib_I_Tura_Rifleman_1","AET_F_remalAlGhaib_I_Tura_Machine_Gunner","AET_F_remalAlGhaib_I_Tura_Ram_1500","AET_F_remalAlGhaib_I_Tura_Ram_1500_HMG","AET_F_remalAlGhaib_I_Tura_Ram_1500_Rocket","AET_F_remalAlGhaib_I_Tura_Offroad_UP","AET_F_remalAlGhaib_I_Tura_Offroad_UP_HMG","AET_F_remalAlGhaib_I_Tura_KamAZ_ZU"};
    weapons[]={"AET_F_remalAlGhaib_I_Tura_arifle_Galat_lxWS","AET_F_remalAlGhaib_I_Tura_arifle_Galat_worn_lxWS","AET_F_remalAlGhaib_I_Tura_arifle_SLR_D_KHS_old_lxWS_optic_DMS_weathered_F","AET_F_remalAlGhaib_I_Tura_arifle_SLR_lxWS","AET_F_remalAlGhaib_I_Tura_launch_RPG7_F","AET_F_remalAlGhaib_I_Tura_arifle_SLR_GL_lxWS","AET_F_remalAlGhaib_I_Tura_LMG_S77_Desert_lxWS"};
    requiredVersion=0.1;
    requiredAddons[]={"ace_medical_treatment","A3_Weapons_F","Weapons_F_lxWS_Rifles","Characters_f_lxWS","A3_Weapons_F_Items","Weapons_1_F_lxWS_Rifles_Galat","A3_Characters_F","A3_Weapons_F_Exp_Launchers_RPG7","Weapons_1_F_lxWS_Machineguns_S77","Characters_1_f_lxWS_uniform","characters_1_F_lxWS"};
  };
};

class cfgFactionClasses
{
  class AET_F_remalAlGhaib_I_Tura_nomas
  {
    icon="";
    displayName="Tura - Remal Al-Ghaib";
    side=2;
    priority=1;
  };
};


class cfgWeapons
{
  class arifle_Galat_lxWS;
  class arifle_Galat_worn_lxWS;
  class arifle_SLR_D_KHS_old_lxWS;
  class arifle_SLR_lxWS;
  class launch_RPG7_F;
  class arifle_SLR_GL_lxWS;
  class LMG_S77_Desert_lxWS;

  class AET_F_remalAlGhaib_I_Tura_arifle_Galat_lxWS: arifle_Galat_lxWS
  {
    displayName="Galil ARM";
    scope=1;
    class LinkedItems
    {
    };
  };

  class AET_F_remalAlGhaib_I_Tura_arifle_Galat_worn_lxWS: arifle_Galat_worn_lxWS
  {
    displayName="Galil ARM (Old)";
    scope=1;
    class LinkedItems
    {
    };
  };

  class AET_F_remalAlGhaib_I_Tura_arifle_SLR_D_KHS_old_lxWS_optic_DMS_weathered_F: arifle_SLR_D_KHS_old_lxWS
  {
    displayName="FN FAL 50.00 (Desert)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_DMS_weathered_F";
      };
    };
  };

  class AET_F_remalAlGhaib_I_Tura_arifle_SLR_lxWS: arifle_SLR_lxWS
  {
    displayName="FN FAL 50.00 (Wood)";
    scope=1;
    class LinkedItems
    {
    };
  };

  class AET_F_remalAlGhaib_I_Tura_launch_RPG7_F: launch_RPG7_F
  {
    displayName="RPG-7";
    scope=1;
    class LinkedItems
    {
    };
  };

  class AET_F_remalAlGhaib_I_Tura_arifle_SLR_GL_lxWS: arifle_SLR_GL_lxWS
  {
    displayName="FN FAL 50.00 GL (Wood)";
    scope=1;
    class LinkedItems
    {
    };
  };

  class AET_F_remalAlGhaib_I_Tura_LMG_S77_Desert_lxWS: LMG_S77_Desert_lxWS
  {
    displayName="Vektor SS-77 (Desert)";
    scope=1;
    class LinkedItems
    {
    };
  };

};

class cfgVehicles
{
  class I_SFIA_enforcer_lxWS;
  class I_SFIA_medic2_lxWS;
  class B_FieldPack_oli_Medic_1_lxWS;
  class I_SFIA_scout_lxWS;
  class I_SFIA_hireling_lxWS;
  class B_Kitbag_cbr_Hireling_1_lxWS;
  class I_SFIA_defector_lxWS;
  class I_SFIA_thug_lxWS;
  class B_FieldPack_khk_Bandit_2_lxWS;
  class I_Tura_HeavyGunner_lxWS;
  class I_Tura_Pickup_01_RF;
  class I_Tura_Pickup_01_hmg_rf;
  class I_Tura_Pickup_01_Rocket_rf;
  class I_Tura_Offroad_armor_lxWS;
  class I_Tura_Offroad_armor_armed_lxWS;
  class I_Tura_Truck_02_aa_lxWS;

  class AET_F_remalAlGhaib_I_Tura_Squad_Leader: I_SFIA_enforcer_lxWS
  {
    faction="AET_F_remalAlGhaib_I_Tura_nomas";
    side=2;
    displayName="Squad Leader";
    uniformClass="U_lxWS_Djella_02_Grey";
    weapons[]={"AET_F_remalAlGhaib_I_Tura_arifle_Galat_lxWS","Put","Throw"};
    respawnWeapons[]={"AET_F_remalAlGhaib_I_Tura_arifle_Galat_lxWS","Put","Throw"};
    items[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"75Rnd_762x39_Mag_F","75Rnd_762x39_Mag_F","75Rnd_762x39_Mag_F","MiniGrenade","MiniGrenade"};
    respawnMagazines[]={"75Rnd_762x39_Mag_F","75Rnd_762x39_Mag_F","75Rnd_762x39_Mag_F","MiniGrenade","MiniGrenade"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","lxWS_H_turban_02_sand_bandit","V_lxWS_HarnessO_oli"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","lxWS_H_turban_02_sand_bandit","V_lxWS_HarnessO_oli"};
    backpack="";
	scope=2;
  };

  class AET_F_remalAlGhaib_I_Tura_Medic: I_SFIA_medic2_lxWS
  {
    faction="AET_F_remalAlGhaib_I_Tura_nomas";
    side=2;
    displayName="Medic";
    uniformClass="U_lxWS_Djella_03_Green";
    weapons[]={"AET_F_remalAlGhaib_I_Tura_arifle_Galat_worn_lxWS","Put","Throw"};
    respawnWeapons[]={"AET_F_remalAlGhaib_I_Tura_arifle_Galat_worn_lxWS","Put","Throw"};
    items[]={"FirstAidKit","Medikit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","Medikit","FirstAidKit"};
    magazines[]={"30Rnd_762x39_Mag_worn_lxWS","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F"};
    respawnMagazines[]={"30Rnd_762x39_Mag_worn_lxWS","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","lxWS_H_turban_02_black_bandit","G_Bandanna_Oli"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","lxWS_H_turban_02_black_bandit","G_Bandanna_Oli"};
    backpack="AET_F_remalAlGhaib_I_Tura_Medic_pack";
	scope=2;
  };

  class AET_F_remalAlGhaib_I_Tura_Rifleman_2: I_SFIA_scout_lxWS
  {
    faction="AET_F_remalAlGhaib_I_Tura_nomas";
    side=2;
    displayName="Rifleman 2";
    uniformClass="U_lxWS_SFIA_deserter";
    weapons[]={"AET_F_remalAlGhaib_I_Tura_arifle_Galat_lxWS","Put","Throw"};
    respawnWeapons[]={"AET_F_remalAlGhaib_I_Tura_arifle_Galat_lxWS","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"30Rnd_762x39_Mag_F","SmokeShellGreen","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","SmokeShellOrange","SmokeShellPurple"};
    respawnMagazines[]={"30Rnd_762x39_Mag_F","SmokeShellGreen","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","SmokeShellOrange","SmokeShellPurple"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","lxWS_H_turban_03_green","V_lxWS_HarnessO_oli"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","lxWS_H_turban_03_green","V_lxWS_HarnessO_oli"};
    backpack="";
	scope=2;
  };

  class AET_F_remalAlGhaib_I_Tura_Vehicle_Crew: I_SFIA_scout_lxWS
  {
    faction="AET_F_remalAlGhaib_I_Tura_nomas";
    side=2;
    displayName="Vehicle Crew";
    uniformClass="U_lxWS_Djella_03_Green";
    weapons[]={"AET_F_remalAlGhaib_I_Tura_arifle_Galat_lxWS","Put","Throw"};
    respawnWeapons[]={"AET_F_remalAlGhaib_I_Tura_arifle_Galat_lxWS","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"30Rnd_762x39_Mag_worn_lxWS","MiniGrenade","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","MiniGrenade"};
    respawnMagazines[]={"30Rnd_762x39_Mag_worn_lxWS","MiniGrenade","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","MiniGrenade"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","lxWS_H_turban_04_green","V_lxWS_TacVestIR_oli","G_Bandanna_Oli"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","lxWS_H_turban_04_green","V_lxWS_TacVestIR_oli","G_Bandanna_Oli"};
    backpack="";
	scope=2;
  };

  class AET_F_remalAlGhaib_I_Tura_Marksman: I_SFIA_scout_lxWS
  {
    faction="AET_F_remalAlGhaib_I_Tura_nomas";
    side=2;
    displayName="Marksman";
    uniformClass="U_lxWS_Djella_02_Sand";
    weapons[]={"AET_F_remalAlGhaib_I_Tura_arifle_SLR_D_KHS_old_lxWS_optic_DMS_weathered_F","Put","Throw"};
    respawnWeapons[]={"AET_F_remalAlGhaib_I_Tura_arifle_SLR_D_KHS_old_lxWS_optic_DMS_weathered_F","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","MiniGrenade","MiniGrenade"};
    respawnMagazines[]={"20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","MiniGrenade","MiniGrenade"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","lxWS_H_turban_02_sand","V_Chestrig_khk"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","lxWS_H_turban_02_sand","V_Chestrig_khk"};
    backpack="";
	scope=2;
  };

  class AET_F_remalAlGhaib_I_Tura_AT_Specialist: I_SFIA_hireling_lxWS
  {
    faction="AET_F_remalAlGhaib_I_Tura_nomas";
    side=2;
    displayName="AT Specialist";
    uniformClass="U_lxWS_Djella_02_Brown";
    weapons[]={"AET_F_remalAlGhaib_I_Tura_arifle_SLR_lxWS","AET_F_remalAlGhaib_I_Tura_launch_RPG7_F","Put","Throw"};
    respawnWeapons[]={"AET_F_remalAlGhaib_I_Tura_arifle_SLR_lxWS","AET_F_remalAlGhaib_I_Tura_launch_RPG7_F","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"RPG7_F","RPG7_F","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS"};
    respawnMagazines[]={"RPG7_F","RPG7_F","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","lxWS_H_turban_03_black"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","lxWS_H_turban_03_black"};
    backpack="AET_F_remalAlGhaib_I_Tura_AT_Specialist_pack";
	scope=2;
  };

  class AET_F_remalAlGhaib_I_Tura_Grenadier: I_SFIA_defector_lxWS
  {
    faction="AET_F_remalAlGhaib_I_Tura_nomas";
    side=2;
    displayName="Grenadier";
    uniformClass="U_lxWS_SFIA_soldier_1";
    weapons[]={"AET_F_remalAlGhaib_I_Tura_arifle_SLR_GL_lxWS","Put","Throw"};
    respawnWeapons[]={"AET_F_remalAlGhaib_I_Tura_arifle_SLR_GL_lxWS","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","SmokeShell","1Rnd_40mm_HE_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_58mm_AT_lxWS"};
    respawnMagazines[]={"20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","SmokeShell","1Rnd_40mm_HE_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_58mm_AT_lxWS"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","lxWS_H_turban_02_green_bandit","V_lxWS_TacVestIR_oli","G_Bandanna_blk"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","lxWS_H_turban_02_green_bandit","V_lxWS_TacVestIR_oli","G_Bandanna_blk"};
    backpack="";
	scope=2;
  };

  class AET_F_remalAlGhaib_I_Tura_IED_Specialist: I_SFIA_thug_lxWS
  {
    faction="AET_F_remalAlGhaib_I_Tura_nomas";
    side=2;
    displayName="IED Specialist";
    uniformClass="U_lxWS_Djella_02_Sand";
    weapons[]={"AET_F_remalAlGhaib_I_Tura_arifle_Galat_worn_lxWS","Put","Throw"};
    respawnWeapons[]={"AET_F_remalAlGhaib_I_Tura_arifle_Galat_worn_lxWS","Put","Throw"};
    items[]={"FirstAidKit","ToolKit"};
    respawnItems[]={"FirstAidKit","ToolKit"};
    magazines[]={"30Rnd_762x39_Mag_worn_lxWS","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","APERSTripMine_Wire_Mag","APERSTripMine_Wire_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
    respawnMagazines[]={"30Rnd_762x39_Mag_worn_lxWS","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","APERSTripMine_Wire_Mag","APERSTripMine_Wire_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","lxWS_H_turban_02_green_bandit","G_Aviator"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","lxWS_H_turban_02_green_bandit","G_Aviator"};
    backpack="AET_F_remalAlGhaib_I_Tura_IED_Specialist_pack";
	scope=2;
  };

  class AET_F_remalAlGhaib_I_Tura_Rifleman_1: I_SFIA_scout_lxWS
  {
    faction="AET_F_remalAlGhaib_I_Tura_nomas";
    side=2;
    displayName="Rifleman 1";
    uniformClass="U_lxWS_Djella_03_Green";
    weapons[]={"AET_F_remalAlGhaib_I_Tura_arifle_SLR_lxWS","Put","Throw"};
    respawnWeapons[]={"AET_F_remalAlGhaib_I_Tura_arifle_SLR_lxWS","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"MiniGrenade","MiniGrenade","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS"};
    respawnMagazines[]={"MiniGrenade","MiniGrenade","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","lxWS_H_turban_03_green","V_lxWS_TacVestIR_oli"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","lxWS_H_turban_03_green","V_lxWS_TacVestIR_oli"};
    backpack="";
	scope=2;
  };

  class AET_F_remalAlGhaib_I_Tura_Machine_Gunner: I_Tura_HeavyGunner_lxWS
  {
    faction="AET_F_remalAlGhaib_I_Tura_nomas";
    side=2;
    displayName="Machine Gunner";
    uniformClass="U_SFIA_deserter_lxWS";
    weapons[]={"AET_F_remalAlGhaib_I_Tura_LMG_S77_Desert_lxWS","Put","Throw"};
    respawnWeapons[]={"AET_F_remalAlGhaib_I_Tura_LMG_S77_Desert_lxWS","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","100Rnd_762x51_S77_Green_lxWS","100Rnd_762x51_S77_Green_lxWS","100Rnd_762x51_S77_Green_lxWS","100Rnd_762x51_S77_Green_Tracer_lxWS"};
    respawnMagazines[]={"HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","100Rnd_762x51_S77_Green_lxWS","100Rnd_762x51_S77_Green_lxWS","100Rnd_762x51_S77_Green_lxWS","100Rnd_762x51_S77_Green_Tracer_lxWS"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","lxWS_H_turban_03_green","V_lxWS_HarnessO_oli"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","lxWS_H_turban_03_green","V_lxWS_HarnessO_oli"};
    backpack="";
	scope=2;
  };

  class AET_F_remalAlGhaib_I_Tura_Ram_1500: I_Tura_Pickup_01_RF
  {
    faction="AET_F_remalAlGhaib_I_Tura_nomas";
    side=2;
    displayName="Ram 1500";
    hiddenSelectionsTextures[]={"lxrf\vehicles_rf\pickup_01\data\pickup_01_ext_sfia_co.paa","lxrf\vehicles_rf\pickup_01\data\pickup_01_adds_sfia_co.paa","lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\vehicles_rf\pickup_01\data\pickup_01_aat_co.paa","lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_tan_co.paa","lxrf\vehicles_rf\pickup_01\data\pickup_01_service_sfia_co.paa"};
    crew="AET_F_remalAlGhaib_I_Tura_Vehicle_Crew";
    typicalCargo[]={"AET_F_remalAlGhaib_I_Tura_Vehicle_Crew"};
  };

  class AET_F_remalAlGhaib_I_Tura_Ram_1500_HMG: I_Tura_Pickup_01_hmg_rf
  {
    faction="AET_F_remalAlGhaib_I_Tura_nomas";
    side=2;
    displayName="Ram 1500 HMG";
    hiddenSelectionsTextures[]={"lxrf\vehicles_rf\pickup_01\data\pickup_01_ext_sfia_co.paa","lxrf\vehicles_rf\pickup_01\data\pickup_01_adds_sfia_co.paa","lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\vehicles_rf\pickup_01\data\pickup_01_aat_co.paa","lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_tan_co.paa","lxrf\vehicles_rf\pickup_01\data\pickup_01_service_sfia_co.paa"};
    crew="AET_F_remalAlGhaib_I_Tura_Vehicle_Crew";
    typicalCargo[]={"AET_F_remalAlGhaib_I_Tura_Vehicle_Crew"};
  };

  class AET_F_remalAlGhaib_I_Tura_Ram_1500_Rocket: I_Tura_Pickup_01_Rocket_rf
  {
    faction="AET_F_remalAlGhaib_I_Tura_nomas";
    side=2;
    displayName="Ram 1500 Rocket";
    hiddenSelectionsTextures[]={"lxrf\vehicles_rf\pickup_01\data\pickup_01_ext_fia_08_co.paa","lxrf\vehicles_rf\pickup_01\data\pickup_01_adds_fia_08_co.paa","lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_tura_co.paa","lxrf\vehicles_rf\pickup_01\data\pickup_01_service_fia_08_co.paa"};
    crew="AET_F_remalAlGhaib_I_Tura_Vehicle_Crew";
    typicalCargo[]={"AET_F_remalAlGhaib_I_Tura_Vehicle_Crew"};
  };

  class AET_F_remalAlGhaib_I_Tura_Offroad_UP: I_Tura_Offroad_armor_lxWS
  {
    faction="AET_F_remalAlGhaib_I_Tura_nomas";
    side=2;
    displayName="Offroad UP";
    hiddenSelectionsTextures[]={"lxws\vehicles_f_lxws\data\offroad_01\offroad_01_ext_sfia_co.paa","lxws\vehicles_f_lxws\data\offroad_01\offroad_01_ext_sfia_co.paa","lxws\vehicles_f_lxws\offroad_01\data\offroad_01_adds_black_co.paa","lxws\vehicles_f_lxws\offroad_01\data\offroad_01_armor_sfia_co.paa"};
    crew="AET_F_remalAlGhaib_I_Tura_Vehicle_Crew";
    typicalCargo[]={"AET_F_remalAlGhaib_I_Tura_Vehicle_Crew"};
  };

  class AET_F_remalAlGhaib_I_Tura_Offroad_UP_HMG: I_Tura_Offroad_armor_armed_lxWS
  {
    faction="AET_F_remalAlGhaib_I_Tura_nomas";
    side=2;
    displayName="Offroad UP HMG";
    hiddenSelectionsTextures[]={"lxws\vehicles_f_lxws\data\offroad_01\offroad_01_ext_sfia_co.paa","lxws\vehicles_f_lxws\data\offroad_01\offroad_01_ext_sfia_co.paa","lxws\vehicles_f_lxws\offroad_01\data\offroad_01_adds_black_co.paa","lxws\vehicles_f_lxws\offroad_01\data\offroad_01_armor_sfia_co.paa"};
    crew="AET_F_remalAlGhaib_I_Tura_Vehicle_Crew";
    typicalCargo[]={"AET_F_remalAlGhaib_I_Tura_Vehicle_Crew"};
  };

  class AET_F_remalAlGhaib_I_Tura_KamAZ_ZU: I_Tura_Truck_02_aa_lxWS
  {
    faction="AET_F_remalAlGhaib_I_Tura_nomas";
    side=2;
    displayName="KamAZ ZU";
    hiddenSelectionsTextures[]={"lxws\vehicles_f_lxws\data\truck_02\truck_02_kab_sfia_co.paa","lxws\vehicles_f_lxws\truck_02\data\truck_02_cargo_olive_co.paa","a3\soft_f_beta\truck_02\data\truck_02_int_co.paa","a3\soft_f_beta\truck_02\data\truck_02_chassis_opfor_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_base_sfia_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_sfia_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_sfia_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_sfia_co.paa","lxws\vehicles_f_lxws\truck_02\data\addons_black_co.paa"};
    crew="AET_F_remalAlGhaib_I_Tura_Vehicle_Crew";
    typicalCargo[]={"AET_F_remalAlGhaib_I_Tura_Vehicle_Crew"};
  };


  class AET_F_remalAlGhaib_I_Tura_Medic_pack: B_FieldPack_oli_Medic_1_lxWS
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_30Rnd_762x39_Mag_F {count=4;magazine="30Rnd_762x39_Mag_F";};
    };
    class TransportItems
    {
     class _xx_Medikit {count=1;name="Medikit";};
     class _xx_FirstAidKit {count=1;name="FirstAidKit";};
    };
    class TransportWeapons{};
  };


  class AET_F_remalAlGhaib_I_Tura_AT_Specialist_pack: B_Kitbag_cbr_Hireling_1_lxWS
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_RPG7_F {count=2;magazine="RPG7_F";};
     class _xx_20Rnd_762x51_slr_lxWS {count=9;magazine="20Rnd_762x51_slr_lxWS";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class AET_F_remalAlGhaib_I_Tura_IED_Specialist_pack: B_FieldPack_khk_Bandit_2_lxWS
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_30Rnd_762x39_Mag_F {count=4;magazine="30Rnd_762x39_Mag_F";};
     class _xx_APERSTripMine_Wire_Mag {count=2;magazine="APERSTripMine_Wire_Mag";};
     class _xx_APERSMine_Range_Mag {count=2;magazine="APERSMine_Range_Mag";};
    };
    class TransportItems
    {
     class _xx_ToolKit {count=1;name="ToolKit";};
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
    class AET_F_remalAlGhaib_I_Tura_F
    {
      name="Tura - Remal Al-Ghaib";

      class Infantry
      {
        name="Infantry";

        class AET_F_remalAlGhaib_I_Tura_R_Rifle_Squad_AT
        {
          name="Rifle Squad AT";
          faction="AET_F_remalAlGhaib_I_Tura_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_Medic";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_Grenadier";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_IED_Specialist";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_AT_Specialist";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_Marksman";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit7
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_Rifleman_1";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
          class Unit8
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_Rifleman_2";
            rank="PRIVATE";
            position[]={0,-40,0};
          };
          class Unit9
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_Rifleman_2";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
        };
        class AET_F_remalAlGhaib_I_Tura_R_Rifle_Squad
        {
          name="Rifle Squad";
          faction="AET_F_remalAlGhaib_I_Tura_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_Medic";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_Grenadier";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_IED_Specialist";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_Marksman";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_Rifleman_1";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit7
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_Rifleman_2";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
          class Unit8
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_Rifleman_2";
            rank="PRIVATE";
            position[]={0,-40,0};
          };
          class Unit9
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_Rifleman_1";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
        };
        class AET_F_remalAlGhaib_I_Tura_R_Fire_Team_GL
        {
          name="Fire Team GL";
          faction="AET_F_remalAlGhaib_I_Tura_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_Grenadier";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_Marksman";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_Rifleman_1";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class AET_F_remalAlGhaib_I_Tura_R_Fire_Team_MG
        {
          name="Fire Team MG";
          faction="AET_F_remalAlGhaib_I_Tura_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_Marksman";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_Rifleman_1";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class AET_F_remalAlGhaib_I_Tura_R_Patrol
        {
          name="Patrol";
          faction="AET_F_remalAlGhaib_I_Tura_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_Rifleman_1";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_Rifleman_2";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
        };
      };
      class Motorized
      {
        name="Motorized";

        class AET_F_remalAlGhaib_I_Tura_R_Ram_1500
        {
          name="Ram 1500";
          faction="AET_F_remalAlGhaib_I_Tura_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_Ram_1500";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_Grenadier";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_Marksman";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_Rifleman_1";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
          class Unit4
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-60,0};
          };
          class Unit5
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_Medic";
            rank="PRIVATE";
            position[]={0,-75,0};
          };
        };
        class AET_F_remalAlGhaib_I_Tura_R_Offroad_UP
        {
          name="Offroad UP";
          faction="AET_F_remalAlGhaib_I_Tura_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_Offroad_UP";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_Grenadier";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_Marksman";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_Rifleman_1";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
          class Unit4
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-60,0};
          };
          class Unit5
          {
            side=2;
            vehicle="AET_F_remalAlGhaib_I_Tura_Medic";
            rank="PRIVATE";
            position[]={0,-75,0};
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
