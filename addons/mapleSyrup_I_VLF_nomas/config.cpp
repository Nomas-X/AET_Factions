class cfgPatches
{
  class AET_F_mapleSyrup_I_VLF_nomas
  {
	skipWhenMissingDependencies = 1;
    units[]={"AET_F_mapleSyrup_I_VLF_Assistant_Machine_Gunner","AET_F_mapleSyrup_I_VLF_Machine_Gunner","AET_F_mapleSyrup_I_VLF_Medic","AET_F_mapleSyrup_I_VLF_Helicopter_Pilot","AET_F_mapleSyrup_I_VLF_Marksman","AET_F_mapleSyrup_I_VLF_Anti_Air","AET_F_mapleSyrup_I_VLF_Anti_Tank_NLAW","AET_F_mapleSyrup_I_VLF_rifleman_1","AET_F_mapleSyrup_I_VLF_Rifleman_AT","AET_F_mapleSyrup_I_VLF_Anti_Tank_RPG","AET_F_mapleSyrup_I_VLF_Squad_Leader","AET_F_mapleSyrup_I_VLF_Anti_Air_Assistant","AET_F_mapleSyrup_I_VLF_Crewman","AET_F_mapleSyrup_I_VLF_Crewman_Light","AET_F_mapleSyrup_I_VLF_rifleman_2","AET_F_mapleSyrup_I_VLF_MT_LB_ZU_23","AET_F_mapleSyrup_I_VLF_MT_LB_PKT","AET_F_mapleSyrup_I_VLF_BMP_2","AET_F_mapleSyrup_I_VLF_BMP_1","AET_F_mapleSyrup_I_VLF_BTR_60","AET_F_mapleSyrup_I_VLF_GAZ_66","AET_F_mapleSyrup_I_VLF_Land_Rover_Transport_Closed","AET_F_mapleSyrup_I_VLF_Land_Rover_Transport_Open","AET_F_mapleSyrup_I_VLF_Land_Rover_Opentop_9K38_AA","AET_F_mapleSyrup_I_VLF_Land_Rover_WMIK_DShKM","AET_F_mapleSyrup_I_VLF_Ural_4320","AET_F_mapleSyrup_I_VLF_T_55A","AET_F_mapleSyrup_I_VLF_Mil_Mi_8_Transport","AET_F_mapleSyrup_I_VLF_KamAZ_5350"};
    weapons[]={"AET_F_mapleSyrup_I_VLF_UK3CB_RK62","AET_F_mapleSyrup_I_VLF_rhs_weap_makarov_pm","AET_F_mapleSyrup_I_VLF_rhs_weap_pkm","AET_F_mapleSyrup_I_VLF_UK3CB_SVD_OLD_rhs_acc_pso1m2","AET_F_mapleSyrup_I_VLF_rhs_weap_igla","AET_F_mapleSyrup_I_VLF_ACE_launch_NLAW_ready_F","AET_F_mapleSyrup_I_VLF_rhs_weap_m72a7","AET_F_mapleSyrup_I_VLF_rhs_weap_rpg7"};
    requiredVersion=0.1;
    requiredAddons[]={"A3_Weapons_F_Items","A3_Weapons_F","tfar_handhelds","UK3CB_Factions_Weapons2_RK62","rhs_c_weapons","UK3CB_Factions_CHD_W_B","rhs_c_troops","A3_Characters_F_Enoch","UK3CB_Factions_LSM_B","ace_medical_treatment","rhsgref_c_troops","UK3CB_Factions_Weapons_SVD_OLD","UK3CB_Factions_CW_SOV_O_LATE","A3_Characters_F","ace_disposable","rhsusf_c_weapons"};
  };
};

class cfgFactionClasses
{
  class AET_F_mapleSyrup_I_VLF_nomas
  {
    icon="";
    displayName="Virolahti Liberation Front - Maple Syrup";
    side=2;
    priority=1;
  };
};


class cfgWeapons
{
  class UK3CB_RK62;
  class rhs_weap_makarov_pm;
  class rhs_weap_pkm;
  class UK3CB_SVD_OLD;
  class rhs_weap_igla;
  class ACE_launch_NLAW_ready_F;
  class rhs_weap_m72a7;
  class rhs_weap_rpg7;

  class AET_F_mapleSyrup_I_VLF_UK3CB_RK62: UK3CB_RK62
  {
    displayName="Valmet Rk.62";
    scope=1;
    class LinkedItems
    {
    };
  };

  class AET_F_mapleSyrup_I_VLF_rhs_weap_makarov_pm: rhs_weap_makarov_pm
  {
    displayName="PM";
    scope=1;
    class LinkedItems
    {
    };
  };

  class AET_F_mapleSyrup_I_VLF_rhs_weap_pkm: rhs_weap_pkm
  {
    displayName="PKM";
    scope=1;
    class LinkedItems
    {
    };
  };

  class AET_F_mapleSyrup_I_VLF_UK3CB_SVD_OLD_rhs_acc_pso1m2: UK3CB_SVD_OLD
  {
    displayName="SVD";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="rhs_acc_pso1m2";
      };
    };
  };

  class AET_F_mapleSyrup_I_VLF_rhs_weap_igla: rhs_weap_igla
  {
    displayName="9K38 Igla";
    scope=1;
    class LinkedItems
    {
    };
  };

  class AET_F_mapleSyrup_I_VLF_ACE_launch_NLAW_ready_F: ACE_launch_NLAW_ready_F
  {
    displayName="NLAW";
    scope=1;
    class LinkedItems
    {
    };
  };

  class AET_F_mapleSyrup_I_VLF_rhs_weap_m72a7: rhs_weap_m72a7
  {
    displayName="M72A7";
    scope=1;
    class LinkedItems
    {
    };
  };

  class AET_F_mapleSyrup_I_VLF_rhs_weap_rpg7: rhs_weap_rpg7
  {
    displayName="RPG-7V2";
    scope=1;
    class LinkedItems
    {
    };
  };

};

class cfgVehicles
{
  class I_E_Soldier_AAR_F;
  class UK3CB_PLM_B_B_Sidor_RIF_01;
  class I_E_Soldier_AR_F;
  class I_E_Medic_F;
  class I_E_Helipilot_F;
  class I_E_soldier_M_F;
  class I_E_Soldier_AA_F;
  class I_E_Soldier_AT_F;
  class I_E_Soldier_F;
  class I_E_Soldier_LAT_F;
  class I_E_Soldier_LAT2_F;
  class I_E_Soldier_SL_F;
  class I_E_Soldier_AAA_F;
  class I_E_Crew_F;
  class UK3CB_I_MTLB_Zu23_CHK;
  class UK3CB_I_MTLB_PKT_CHK;
  class UK3CB_CHD_I_BMP2;
  class UK3CB_CHD_I_BMP1;
  class UK3CB_CHD_I_BTR60;
  class rhsgref_ins_g_gaz66;
  class UK3CB_CHD_I_LR_Softtop_Transport_Closed;
  class UK3CB_CHD_I_LR_Softtop_Transport_Open;
  class UK3CB_CHD_I_LR_Opentop_Igla_Chair;
  class UK3CB_CHD_I_LR_WMIK_DSHKM;
  class RHS_Ural_MSV_01;
  class UK3CB_NAP_O_T55;
  class UK3CB_CW_SOV_O_LATE_Mi8;
  class rhs_kamaz5350_msv;
  class DefaultEventHandlers;

  class AET_F_mapleSyrup_I_VLF_Assistant_Machine_Gunner: I_E_Soldier_AAR_F
  {
    faction="AET_F_mapleSyrup_I_VLF_nomas";
    side=2;
    displayName="Assistant Machine Gunner";
    uniformClass="UK3CB_CHD_W_B_U_CombatSmock_02";
    weapons[]={"AET_F_mapleSyrup_I_VLF_UK3CB_RK62","AET_F_mapleSyrup_I_VLF_rhs_weap_makarov_pm","Put","Throw"};
    respawnWeapons[]={"AET_F_mapleSyrup_I_VLF_UK3CB_RK62","AET_F_mapleSyrup_I_VLF_rhs_weap_makarov_pm","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_9x18_8_57N181S","rhs_100Rnd_762x54mmR_7N13","rhs_100Rnd_762x54mmR_7N13","rhs_100Rnd_762x54mmR_7N13","rhs_100Rnd_762x54mmR_7N13"};
    respawnMagazines[]={"UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_9x18_8_57N181S","rhs_100Rnd_762x54mmR_7N13","rhs_100Rnd_762x54mmR_7N13","rhs_100Rnd_762x54mmR_7N13","rhs_100Rnd_762x54mmR_7N13"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","rhs_beanie_green","rhs_6sh117_rifleman","G_Bandanna_oli"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","rhs_beanie_green","rhs_6sh117_rifleman","G_Bandanna_oli"};
    backpack="AET_F_mapleSyrup_I_VLF_Assistant_Machine_Gunner_pack";
  };

  class AET_F_mapleSyrup_I_VLF_Machine_Gunner: I_E_Soldier_AR_F
  {
    faction="AET_F_mapleSyrup_I_VLF_nomas";
    side=2;
    displayName="Machine Gunner";
    uniformClass="UK3CB_CHD_W_B_U_CombatSmock_02";
    weapons[]={"AET_F_mapleSyrup_I_VLF_rhs_weap_pkm","AET_F_mapleSyrup_I_VLF_rhs_weap_makarov_pm","Put","Throw"};
    respawnWeapons[]={"AET_F_mapleSyrup_I_VLF_rhs_weap_pkm","AET_F_mapleSyrup_I_VLF_rhs_weap_makarov_pm","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_9x18_8_57N181S","rhs_100Rnd_762x54mmR_7N13","rhs_100Rnd_762x54mmR_7N13","rhs_100Rnd_762x54mmR_7N13","rhs_100Rnd_762x54mmR_7N13"};
    respawnMagazines[]={"rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_9x18_8_57N181S","rhs_100Rnd_762x54mmR_7N13","rhs_100Rnd_762x54mmR_7N13","rhs_100Rnd_762x54mmR_7N13","rhs_100Rnd_762x54mmR_7N13"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","UK3CB_LSM_B_H_SSh68_OLI","rhs_6sh117_mg","G_Balaclava_oli"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","UK3CB_LSM_B_H_SSh68_OLI","rhs_6sh117_mg","G_Balaclava_oli"};
    backpack="AET_F_mapleSyrup_I_VLF_Machine_Gunner_pack";
  };

  class AET_F_mapleSyrup_I_VLF_Medic: I_E_Medic_F
  {
    faction="AET_F_mapleSyrup_I_VLF_nomas";
    side=2;
    displayName="Medic";
    uniformClass="UK3CB_CHD_W_B_U_CombatSmock_02";
    weapons[]={"AET_F_mapleSyrup_I_VLF_UK3CB_RK62","AET_F_mapleSyrup_I_VLF_rhs_weap_makarov_pm","Put","Throw"};
    respawnWeapons[]={"AET_F_mapleSyrup_I_VLF_UK3CB_RK62","AET_F_mapleSyrup_I_VLF_rhs_weap_makarov_pm","Put","Throw"};
    items[]={"FirstAidKit"};
    magazines[]={"UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_9x18_8_57N181S"};
    respawnMagazines[]={"UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_9x18_8_57N181S"};
    respawnItems[]={"FirstAidKit"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","rhsgref_hat_M1951","rhs_6sh117_rifleman","rhs_scarf"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","rhsgref_hat_M1951","rhs_6sh117_rifleman","rhs_scarf"};
    backpack="AET_F_mapleSyrup_I_VLF_Medic_pack";
  };

  class AET_F_mapleSyrup_I_VLF_Helicopter_Pilot: I_E_Helipilot_F
  {
    faction="AET_F_mapleSyrup_I_VLF_nomas";
    side=2;
    displayName="Helicopter Pilot";
    uniformClass="UK3CB_CHD_W_B_U_CombatSmock_03";
    weapons[]={"AET_F_mapleSyrup_I_VLF_rhs_weap_makarov_pm","Put","Throw"};
    respawnWeapons[]={"AET_F_mapleSyrup_I_VLF_rhs_weap_makarov_pm","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_9x18_8_57N181S","rhs_mag_nspn_red","rhs_mag_nspn_red"};
    respawnMagazines[]={"rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_9x18_8_57N181S","rhs_mag_nspn_red","rhs_mag_nspn_red"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","rhs_zsh7a_mike_green_alt","rhs_6sh117_rifleman"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","rhs_zsh7a_mike_green_alt","rhs_6sh117_rifleman"};
    backpack="";
  };

  class AET_F_mapleSyrup_I_VLF_Marksman: I_E_soldier_M_F
  {
    faction="AET_F_mapleSyrup_I_VLF_nomas";
    side=2;
    displayName="Marksman";
    uniformClass="UK3CB_CW_SOV_O_Late_U_VDV_Spetsnaz_Uniform_Gorka_02_KLMK";
    weapons[]={"AET_F_mapleSyrup_I_VLF_UK3CB_SVD_OLD_rhs_acc_pso1m2","AET_F_mapleSyrup_I_VLF_rhs_weap_makarov_pm","Put","Throw"};
    respawnWeapons[]={"AET_F_mapleSyrup_I_VLF_UK3CB_SVD_OLD_rhs_acc_pso1m2","AET_F_mapleSyrup_I_VLF_rhs_weap_makarov_pm","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_mag_9x18_8_57N181S","uk3cb_mag_2Rnd_Igla"};
    respawnMagazines[]={"rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_mag_9x18_8_57N181S","uk3cb_mag_2Rnd_Igla"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","H_Booniehat_oli","rhs_6sh117_svd","G_Balaclava_oli"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","H_Booniehat_oli","rhs_6sh117_svd","G_Balaclava_oli"};
    backpack="AET_F_mapleSyrup_I_VLF_Marksman_pack";
  };

  class AET_F_mapleSyrup_I_VLF_Anti_Air: I_E_Soldier_AA_F
  {
    faction="AET_F_mapleSyrup_I_VLF_nomas";
    side=2;
    displayName="Anti Air";
    uniformClass="UK3CB_CW_SOV_O_Late_U_VDV_Spetsnaz_Uniform_Gorka_02_KLMK";
    weapons[]={"AET_F_mapleSyrup_I_VLF_UK3CB_RK62","AET_F_mapleSyrup_I_VLF_rhs_weap_igla","AET_F_mapleSyrup_I_VLF_rhs_weap_makarov_pm","Put","Throw"};
    respawnWeapons[]={"AET_F_mapleSyrup_I_VLF_UK3CB_RK62","AET_F_mapleSyrup_I_VLF_rhs_weap_igla","AET_F_mapleSyrup_I_VLF_rhs_weap_makarov_pm","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_9x18_8_57N181S","rhs_mag_9k38_rocket"};
    respawnMagazines[]={"UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_9x18_8_57N181S","rhs_mag_9k38_rocket"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","UK3CB_LSM_B_H_SSh68_OLI","rhs_6sh117_rifleman","G_Bandanna_oli"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","UK3CB_LSM_B_H_SSh68_OLI","rhs_6sh117_rifleman","G_Bandanna_oli"};
    backpack="";
  };

  class AET_F_mapleSyrup_I_VLF_Anti_Tank_NLAW: I_E_Soldier_AT_F
  {
    faction="AET_F_mapleSyrup_I_VLF_nomas";
    side=2;
    displayName="Anti Tank NLAW";
    uniformClass="UK3CB_CHD_W_B_U_CombatSmock_01";
    weapons[]={"AET_F_mapleSyrup_I_VLF_UK3CB_RK62","AET_F_mapleSyrup_I_VLF_ACE_launch_NLAW_ready_F","AET_F_mapleSyrup_I_VLF_rhs_weap_makarov_pm","Put","Throw"};
    respawnWeapons[]={"AET_F_mapleSyrup_I_VLF_UK3CB_RK62","AET_F_mapleSyrup_I_VLF_ACE_launch_NLAW_ready_F","AET_F_mapleSyrup_I_VLF_rhs_weap_makarov_pm","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_9x18_8_57N181S","NLAW_F"};
    respawnMagazines[]={"UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_9x18_8_57N181S","NLAW_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","rhsgref_helmet_pasgt_olive","rhs_6sh117_rifleman","rhs_balaclava"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","rhsgref_helmet_pasgt_olive","rhs_6sh117_rifleman","rhs_balaclava"};
    backpack="";
  };

  class AET_F_mapleSyrup_I_VLF_rifleman_1: I_E_Soldier_F
  {
    faction="AET_F_mapleSyrup_I_VLF_nomas";
    side=2;
    displayName="Rifleman 1";
    uniformClass="UK3CB_CHD_W_B_U_CombatSmock_03";
    weapons[]={"AET_F_mapleSyrup_I_VLF_UK3CB_RK62","AET_F_mapleSyrup_I_VLF_rhs_weap_makarov_pm","Put","Throw"};
    respawnWeapons[]={"AET_F_mapleSyrup_I_VLF_UK3CB_RK62","AET_F_mapleSyrup_I_VLF_rhs_weap_makarov_pm","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_9x18_8_57N181S"};
    respawnMagazines[]={"UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_9x18_8_57N181S"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","rhs_beanie_green","rhs_6sh117_rifleman","G_Bandanna_oli"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","rhs_beanie_green","rhs_6sh117_rifleman","G_Bandanna_oli"};
    backpack="";
  };

  class AET_F_mapleSyrup_I_VLF_Rifleman_AT: I_E_Soldier_LAT_F
  {
    faction="AET_F_mapleSyrup_I_VLF_nomas";
    side=2;
    displayName="Rifleman AT";
    uniformClass="UK3CB_CHD_W_B_U_CombatSmock_01";
    weapons[]={"AET_F_mapleSyrup_I_VLF_UK3CB_RK62","AET_F_mapleSyrup_I_VLF_rhs_weap_m72a7","AET_F_mapleSyrup_I_VLF_rhs_weap_makarov_pm","Put","Throw"};
    respawnWeapons[]={"AET_F_mapleSyrup_I_VLF_UK3CB_RK62","AET_F_mapleSyrup_I_VLF_rhs_weap_m72a7","AET_F_mapleSyrup_I_VLF_rhs_weap_makarov_pm","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_9x18_8_57N181S"};
    respawnMagazines[]={"UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_9x18_8_57N181S"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","rhsgref_helmet_pasgt_olive","rhs_6sh117_rifleman","G_Bandanna_oli"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","rhsgref_helmet_pasgt_olive","rhs_6sh117_rifleman","G_Bandanna_oli"};
    backpack="";
  };

  class AET_F_mapleSyrup_I_VLF_Anti_Tank_RPG: I_E_Soldier_LAT2_F
  {
    faction="AET_F_mapleSyrup_I_VLF_nomas";
    side=2;
    displayName="Anti Tank RPG";
    uniformClass="UK3CB_CHD_W_B_U_CombatSmock_01";
    weapons[]={"AET_F_mapleSyrup_I_VLF_UK3CB_RK62","AET_F_mapleSyrup_I_VLF_rhs_weap_rpg7","AET_F_mapleSyrup_I_VLF_rhs_weap_makarov_pm","Put","Throw"};
    respawnWeapons[]={"AET_F_mapleSyrup_I_VLF_UK3CB_RK62","AET_F_mapleSyrup_I_VLF_rhs_weap_rpg7","AET_F_mapleSyrup_I_VLF_rhs_weap_makarov_pm","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_9x18_8_57N181S","rhs_rpg7_OG7V_mag","rhs_rpg7_PG7VM_mag"};
    respawnMagazines[]={"UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_9x18_8_57N181S","rhs_rpg7_OG7V_mag","rhs_rpg7_PG7VM_mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","UK3CB_LSM_B_H_SSh68_OLI","rhs_6sh117_rifleman","rhs_balaclava"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","UK3CB_LSM_B_H_SSh68_OLI","rhs_6sh117_rifleman","rhs_balaclava"};
    backpack="AET_F_mapleSyrup_I_VLF_Anti_Tank_RPG_pack";
  };

  class AET_F_mapleSyrup_I_VLF_Squad_Leader: I_E_Soldier_SL_F
  {
    faction="AET_F_mapleSyrup_I_VLF_nomas";
    side=2;
    displayName="Squad Leader";
    uniformClass="UK3CB_CW_SOV_O_Late_U_VDV_Spetsnaz_Uniform_Gorka_02_KLMK";
    weapons[]={"AET_F_mapleSyrup_I_VLF_UK3CB_RK62","AET_F_mapleSyrup_I_VLF_rhs_weap_makarov_pm","Put","Throw"};
    respawnWeapons[]={"AET_F_mapleSyrup_I_VLF_UK3CB_RK62","AET_F_mapleSyrup_I_VLF_rhs_weap_makarov_pm","Put","Throw"};
    items[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_9x18_8_57N181S"};
    respawnMagazines[]={"UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_9x18_8_57N181S"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","UK3CB_LSM_B_H_SSh68_OLI","rhs_6sh117_nco","G_Balaclava_oli"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","UK3CB_LSM_B_H_SSh68_OLI","rhs_6sh117_nco","G_Balaclava_oli"};
    backpack="";
  };

  class AET_F_mapleSyrup_I_VLF_Anti_Air_Assistant: I_E_Soldier_AAA_F
  {
    faction="AET_F_mapleSyrup_I_VLF_nomas";
    side=2;
    displayName="Anti Air Assistant";
    uniformClass="UK3CB_CW_SOV_O_Late_U_VDV_Spetsnaz_Uniform_Gorka_02_KLMK";
    weapons[]={"AET_F_mapleSyrup_I_VLF_UK3CB_RK62","AET_F_mapleSyrup_I_VLF_rhs_weap_makarov_pm","Put","Throw"};
    respawnWeapons[]={"AET_F_mapleSyrup_I_VLF_UK3CB_RK62","AET_F_mapleSyrup_I_VLF_rhs_weap_makarov_pm","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_9x18_8_57N181S","uk3cb_mag_2Rnd_Igla"};
    respawnMagazines[]={"UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_9x18_8_57N181S","uk3cb_mag_2Rnd_Igla"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","UK3CB_LSM_B_H_SSh68_OLI","rhs_6sh117_rifleman","G_Bandanna_oli"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","UK3CB_LSM_B_H_SSh68_OLI","rhs_6sh117_rifleman","G_Bandanna_oli"};
    backpack="AET_F_mapleSyrup_I_VLF_Anti_Air_Assistant_pack";
  };

  class AET_F_mapleSyrup_I_VLF_Crewman: I_E_Crew_F
  {
    faction="AET_F_mapleSyrup_I_VLF_nomas";
    side=2;
    displayName="Crewman";
    uniformClass="UK3CB_CW_SOV_O_Late_U_VDV_Spetsnaz_Uniform_Gorka_02_KLMK";
    weapons[]={"AET_F_mapleSyrup_I_VLF_UK3CB_RK62","AET_F_mapleSyrup_I_VLF_rhs_weap_makarov_pm","Put","Throw"};
    respawnWeapons[]={"AET_F_mapleSyrup_I_VLF_UK3CB_RK62","AET_F_mapleSyrup_I_VLF_rhs_weap_makarov_pm","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_9x18_8_57N181S"};
    respawnMagazines[]={"UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_9x18_8_57N181S"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","rhs_tsh4_ess","rhs_6sh117_rifleman","G_Bandanna_oli"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","rhs_tsh4_ess","rhs_6sh117_rifleman","G_Bandanna_oli"};
    backpack="";
  };

  class AET_F_mapleSyrup_I_VLF_Crewman_Light: I_E_Soldier_F
  {
    faction="AET_F_mapleSyrup_I_VLF_nomas";
    side=2;
    displayName="Crewman Light";
    uniformClass="UK3CB_CW_SOV_O_Late_U_VDV_Spetsnaz_Uniform_Gorka_02_KLMK";
    weapons[]={"AET_F_mapleSyrup_I_VLF_UK3CB_RK62","AET_F_mapleSyrup_I_VLF_rhs_weap_makarov_pm","Put","Throw"};
    respawnWeapons[]={"AET_F_mapleSyrup_I_VLF_UK3CB_RK62","AET_F_mapleSyrup_I_VLF_rhs_weap_makarov_pm","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_9x18_8_57N181S"};
    respawnMagazines[]={"UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_9x18_8_57N181S"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","UK3CB_LSM_B_H_SSh68_OLI","rhs_6sh117_rifleman","G_Bandanna_oli"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","UK3CB_LSM_B_H_SSh68_OLI","rhs_6sh117_rifleman","G_Bandanna_oli"};
    backpack="";
  };

  class AET_F_mapleSyrup_I_VLF_rifleman_2: I_E_Soldier_F
  {
    faction="AET_F_mapleSyrup_I_VLF_nomas";
    side=2;
    displayName="Rifleman 2";
    uniformClass="UK3CB_CW_SOV_O_Late_U_VDV_Spetsnaz_Uniform_Gorka_02_KLMK";
    weapons[]={"AET_F_mapleSyrup_I_VLF_UK3CB_RK62","AET_F_mapleSyrup_I_VLF_rhs_weap_makarov_pm","Put","Throw"};
    respawnWeapons[]={"AET_F_mapleSyrup_I_VLF_UK3CB_RK62","AET_F_mapleSyrup_I_VLF_rhs_weap_makarov_pm","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_9x18_8_57N181S"};
    respawnMagazines[]={"UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_9x18_8_57N181S"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","rhsgref_hat_M1951","rhs_6sh117_rifleman","rhs_scarf"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","rhsgref_hat_M1951","rhs_6sh117_rifleman","rhs_scarf"};
    backpack="";
  };

  class AET_F_mapleSyrup_I_VLF_MT_LB_ZU_23: UK3CB_I_MTLB_Zu23_CHK
  {
    faction="AET_F_mapleSyrup_I_VLF_nomas";
    side=2;
    displayName="MT LB ZU 23";
    hiddenSelectionsTextures[]={"uk3cb_factions\addons\uk3cb_factions_vehicles\apc\uk3cb_factions_vehicles_mtlb\data\body_1_fdf_co.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\apc\uk3cb_factions_vehicles_mtlb\data\pk_mod_fdf_co.paa"};
    crew="AET_F_mapleSyrup_I_VLF_Crewman";
    typicalCargo[]={"AET_F_mapleSyrup_I_VLF_Crewman","AET_F_mapleSyrup_I_VLF_Crewman","AET_F_mapleSyrup_I_VLF_Crewman","AET_F_mapleSyrup_I_VLF_Crewman"};
	textureList[]={"FDF", 1};
  };

  class AET_F_mapleSyrup_I_VLF_MT_LB_PKT: UK3CB_I_MTLB_PKT_CHK
  {
    faction="AET_F_mapleSyrup_I_VLF_nomas";
    side=2;
    displayName="MT LB PKT";
    hiddenSelectionsTextures[]={"uk3cb_factions\addons\uk3cb_factions_vehicles\apc\uk3cb_factions_vehicles_mtlb\data\body_1_fdf_co.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\apc\uk3cb_factions_vehicles_mtlb\data\pk_mod_fdf_co.paa"};
    crew="AET_F_mapleSyrup_I_VLF_Crewman";
    typicalCargo[]={"AET_F_mapleSyrup_I_VLF_Crewman"};
	textureList[]={"FDF", 1};
  };

  class AET_F_mapleSyrup_I_VLF_BMP_2: UK3CB_CHD_I_BMP2
  {
    faction="AET_F_mapleSyrup_I_VLF_nomas";
    side=2;
    displayName="BMP 2";
    hiddenSelectionsTextures[]={"uk3cb_factions\addons\uk3cb_factions_vehicles\apc\uk3cb_factions_vehicles_bmp\data\oli_bmp_1_co.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\apc\uk3cb_factions_vehicles_bmp\data\oli_bmp_2_co.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\apc\uk3cb_factions_vehicles_bmp\data\oli_bmp_3_co.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\apc\uk3cb_factions_vehicles_bmp\data\oli_bmp_4_co.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\apc\uk3cb_factions_vehicles_bmp\data\oli_bmp_5_co.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\apc\uk3cb_factions_vehicles_bmp\data\oli_bmp_6_co.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\decal\no_ca.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\decal\no_ca.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\decal\no_ca.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\decal\no_ca.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\decal\no_ca.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\decal\no_ca.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\decal\no_ca.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\decal\no_ca.paa"};
    crew="AET_F_mapleSyrup_I_VLF_Crewman";
    typicalCargo[]={"AET_F_mapleSyrup_I_VLF_Crewman"};
	textureList[]={"Olive", 1};
  };

  class AET_F_mapleSyrup_I_VLF_BMP_1: UK3CB_CHD_I_BMP1
  {
    faction="AET_F_mapleSyrup_I_VLF_nomas";
    side=2;
    displayName="BMP 1";
    hiddenSelectionsTextures[]={"uk3cb_factions\addons\uk3cb_factions_vehicles\apc\uk3cb_factions_vehicles_bmp\data\oli_bmp_1_co.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\apc\uk3cb_factions_vehicles_bmp\data\oli_bmp_2_co.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\apc\uk3cb_factions_vehicles_bmp\data\oli_bmp_3_co.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\apc\uk3cb_factions_vehicles_bmp\data\oli_bmp_4_co.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\apc\uk3cb_factions_vehicles_bmp\data\oli_bmp_5_co.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\apc\uk3cb_factions_vehicles_bmp\data\oli_bmp_6_co.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\decal\no_ca.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\decal\no_ca.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\decal\no_ca.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\decal\no_ca.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\decal\no_ca.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\decal\no_ca.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\decal\no_ca.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\decal\no_ca.paa"};
    crew="AET_F_mapleSyrup_I_VLF_Crewman";
    typicalCargo[]={"AET_F_mapleSyrup_I_VLF_Crewman"};
	textureList[]={"Olive", 1};
  };

  class AET_F_mapleSyrup_I_VLF_BTR_60: UK3CB_CHD_I_BTR60
  {
    faction="AET_F_mapleSyrup_I_VLF_nomas";
    side=2;
    displayName="BTR 60";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_a2port_armor\data\btr60_body_co.paa","rhsafrf\addons\rhs_a2port_armor\data\btr60_details_co.paa","","rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa","rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa"};
    crew="AET_F_mapleSyrup_I_VLF_Crewman_Light";
    typicalCargo[]={"AET_F_mapleSyrup_I_VLF_Crewman_Light"};
	textureList[]={"OLIVE", 1};
  };

  class AET_F_mapleSyrup_I_VLF_GAZ_66: rhsgref_ins_g_gaz66
  {
    faction="AET_F_mapleSyrup_I_VLF_nomas";
    side=2;
    displayName="GAZ 66";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_gaz66\data\gaz66_co.paa","rhsafrf\addons\rhs_gaz66\data\tent_co.paa","rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_kung_co.paa","rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_ap2kung_co.paa","rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_repkung_co.paa","rhsafrf\addons\rhs_decals\data\numbers\default\7_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\3_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\8_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\8_ca.paa","","","",""};
    crew="AET_F_mapleSyrup_I_VLF_Crewman_Light";
    typicalCargo[]={"AET_F_mapleSyrup_I_VLF_Crewman_Light"};
	textureList[]={"standard", 1};
  };

  class AET_F_mapleSyrup_I_VLF_Land_Rover_Transport_Closed: UK3CB_CHD_I_LR_Softtop_Transport_Closed
  {
    faction="AET_F_mapleSyrup_I_VLF_nomas";
    side=2;
    displayName="Land Rover Transport Closed";
    hiddenSelectionsTextures[]={"uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_landrover\data\green_lr_base_co.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_landrover\data\green_lr_special_co.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_landrover\data\green_lr_mg-spg9_co.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_landrover\data\civ_lr_glass_ca.paa"};
    crew="AET_F_mapleSyrup_I_VLF_Crewman_Light";
    typicalCargo[]={"AET_F_mapleSyrup_I_VLF_Crewman_Light"};
	textureList[]={"Green", 1};
  };

  class AET_F_mapleSyrup_I_VLF_Land_Rover_Transport_Open: UK3CB_CHD_I_LR_Softtop_Transport_Open
  {
    faction="AET_F_mapleSyrup_I_VLF_nomas";
    side=2;
    displayName="Land Rover Transport Open";
    hiddenSelectionsTextures[]={"uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_landrover\data\green_lr_base_co.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_landrover\data\green_lr_special_co.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_landrover\data\green_lr_mg-spg9_co.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_landrover\data\civ_lr_glass_ca.paa"};
    crew="AET_F_mapleSyrup_I_VLF_Crewman_Light";
    typicalCargo[]={"AET_F_mapleSyrup_I_VLF_Crewman_Light"};
	textureList[]={"Green", 1};
  };

  class AET_F_mapleSyrup_I_VLF_Land_Rover_Opentop_9K38_AA: UK3CB_CHD_I_LR_Opentop_Igla_Chair
  {
    faction="AET_F_mapleSyrup_I_VLF_nomas";
    side=2;
    displayName="Land Rover Opentop 9K38 AA";
    hiddenSelectionsTextures[]={"uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_landrover\data\green_lr_base_co.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_landrover\data\green_lr_special_co.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_landrover\data\green_lr_mg-spg9_co.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_landrover\data\civ_lr_glass_ca.paa"};
    crew="AET_F_mapleSyrup_I_VLF_Crewman_Light";
    typicalCargo[]={"AET_F_mapleSyrup_I_VLF_Crewman_Light"};
	textureList[]={"Green", 1};
  };

  class AET_F_mapleSyrup_I_VLF_Land_Rover_WMIK_DShKM: UK3CB_CHD_I_LR_WMIK_DSHKM
  {
    faction="AET_F_mapleSyrup_I_VLF_nomas";
    side=2;
    displayName="Land Rover WMIK DShKM";
    hiddenSelectionsTextures[]={"uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_landrover\data\green_lr_base_co.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_landrover\data\green_lr_special_co.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_landrover\data\green_lr_mg-spg9_co.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_landrover\data\civ_lr_glass_ca.paa"};
    crew="AET_F_mapleSyrup_I_VLF_Crewman_Light";
    typicalCargo[]={"AET_F_mapleSyrup_I_VLF_Crewman_Light"};
	textureList[]={"Green", 1};
  };

  class AET_F_mapleSyrup_I_VLF_Ural_4320: RHS_Ural_MSV_01
  {
    faction="AET_F_mapleSyrup_I_VLF_nomas";
    side=2;
    displayName="Ural 4320";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_co.paa","rhsafrf\addons\rhs_decals\data\numbers\default\1_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\7_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\6_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\2_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","","",""};
    crew="AET_F_mapleSyrup_I_VLF_Crewman_Light";
    typicalCargo[]={"AET_F_mapleSyrup_I_VLF_Crewman_Light"};
	textureList[]={"AET_F_mapleSyrup_I_VLF_Ural_4320_Texture", 1};
	class textureSources
	{
		// This texture source will be available for every defined factions
		class AET_F_mapleSyrup_I_VLF_Ural_4320_Texture
		{
			// Display name of the texture
			displayName = "Olive (No Symbol)";
			// Author of the texture
			author = "RHS";
			// Paths to the texture files, in the same order as the hidden selections
			textures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_co.paa","rhsafrf\addons\rhs_decals\data\numbers\default\1_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\7_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\6_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\2_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","","",""};
			// This source should be available for the following factions
			factions[] = {};
		};
	};
	class EventHandlers: DefaultEventHandlers 
	{
		init = "";
	};
  };

  class AET_F_mapleSyrup_I_VLF_T_55A: UK3CB_NAP_O_T55
  {
    faction="AET_F_mapleSyrup_I_VLF_nomas";
    side=2;
    displayName="T 55A";
    hiddenSelectionsTextures[]={"uk3cb_factions\addons\uk3cb_factions_vehicles\armour\uk3cb_factions_vehicles_t-series\t55\data\t55_body_fdf_co.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\armour\uk3cb_factions_vehicles_t-series\t55\data\t55_tower_fdf_co.paa"};
    crew="AET_F_mapleSyrup_I_VLF_Crewman";
    typicalCargo[]={"AET_F_mapleSyrup_I_VLF_Crewman"};
	textureList[]={"FDF", 1};
  };

  class AET_F_mapleSyrup_I_VLF_Mil_Mi_8_Transport: UK3CB_CW_SOV_O_LATE_Mi8
  {
    faction="AET_F_mapleSyrup_I_VLF_nomas";
    side=2;
    displayName="Mil Mi 8 Transport";
    textures[]={"uk3cb_factions\addons\uk3cb_factions_vehicles\air\uk3cb_factions_vehicles_mi8\data\grey_mi8_body_co.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\air\uk3cb_factions_vehicles_mi8\data\grey_mi8_det_co.paa","","","","",""};
    crew="AET_F_mapleSyrup_I_VLF_Helicopter_Pilot";
    typicalCargo[]={"AET_F_mapleSyrup_I_VLF_Helicopter_Pilot"};
	textureList[]={"GREY", 1};
  };

  class AET_F_mapleSyrup_I_VLF_KamAZ_5350: rhs_kamaz5350_msv
  {
    faction="AET_F_mapleSyrup_I_VLF_nomas";
    side=2;
    displayName="KamAZ 5350";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_kamaz\data\kamaz5350_cabin_co.paa","rhsafrf\addons\rhs_kamaz\data\kamaz5350_cargo_co.paa","rhsafrf\addons\rhs_kamaz\data\kamaz5350_base_co.paa","rhsafrf\addons\rhs_kamaz\data\bed\rhs_kamaz_bed_co.paa","rhsafrf\addons\rhs_kamaz\data\bed\rhs_kamaz_cover_co.paa","rhsafrf\addons\rhs_decals\data\numbers\default\4_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\6_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\7_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\4_ca.paa","",""};
    crew="AET_F_mapleSyrup_I_VLF_Crewman_Light";
    typicalCargo[]={"AET_F_mapleSyrup_I_VLF_Crewman_Light"};
	textureList[]={"AET_F_mapleSyrup_I_VLF_KamAZ_5350_Texture", 1};
	class textureSources
	{
		// This texture source will be available for every defined factions
		class AET_F_mapleSyrup_I_VLF_KamAZ_5350_Texture
		{
			// Display name of the texture
			displayName = "Olive (No Symbol)";
			// Author of the texture
			author = "RHS";
			// Paths to the texture files, in the same order as the hidden selections
			textures[] = {"rhsafrf\addons\rhs_kamaz\data\kamaz5350_cabin_co.paa","rhsafrf\addons\rhs_kamaz\data\kamaz5350_cargo_co.paa","rhsafrf\addons\rhs_kamaz\data\kamaz5350_base_co.paa","rhsafrf\addons\rhs_kamaz\data\bed\rhs_kamaz_bed_co.paa","rhsafrf\addons\rhs_kamaz\data\bed\rhs_kamaz_cover_co.paa","rhsafrf\addons\rhs_decals\data\numbers\default\4_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\6_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\7_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\4_ca.paa","",""};
			// This source should be available for the following factions
			factions[] = {};
		};
	};
	class EventHandlers: DefaultEventHandlers 
	{
		init = "if (local (_this select 0)) then {[(_this select 0), """", [""Door_LF"",0,""Door_RF"",0,""Hatch"",0,""spare_hide"",0,""bench_hide"",0,""bench_l1_fold"",0,""bench_l2_fold"",0,""bench_r1_fold"",0,""bench_r2_fold"",0,""cover_hide"",0,""back_door"",0,""cover_end_hide"",1,""side_walls_hide"",0,""ClanLogo_Hide"",0], false] call bis_fnc_initVehicle;};";
	};
  };


  class AET_F_mapleSyrup_I_VLF_Assistant_Machine_Gunner_pack: UK3CB_PLM_B_B_Sidor_RIF_01
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_100Rnd_762x54mmR_7N13 {count=4;magazine="rhs_100Rnd_762x54mmR_7N13";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };

  class AET_F_mapleSyrup_I_VLF_Medic_pack: UK3CB_PLM_B_B_Sidor_RIF_01
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_Medikit {count=1;name="Medikit";};
    };
    class TransportWeapons{};
  };

  class AET_F_mapleSyrup_I_VLF_Machine_Gunner_pack: UK3CB_PLM_B_B_Sidor_RIF_01
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_100Rnd_762x54mmR_7N13 {count=2;magazine="rhs_100Rnd_762x54mmR_7N13";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };

  class AET_F_mapleSyrup_I_VLF_Marksman_pack: UK3CB_PLM_B_B_Sidor_RIF_01
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_uk3cb_mag_2Rnd_Igla {count=1;magazine="uk3cb_mag_2Rnd_Igla";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class AET_F_mapleSyrup_I_VLF_Anti_Tank_RPG_pack: UK3CB_PLM_B_B_Sidor_RIF_01
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_rpg7_OG7V_mag {count=1;magazine="rhs_rpg7_OG7V_mag";};
     class _xx_rhs_rpg7_PG7VM_mag {count=1;magazine="rhs_rpg7_PG7VM_mag";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class AET_F_mapleSyrup_I_VLF_Anti_Air_Assistant_pack: UK3CB_PLM_B_B_Sidor_RIF_01
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_uk3cb_mag_2Rnd_Igla {count=1;magazine="uk3cb_mag_2Rnd_Igla";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };

};

//////////////// Paste cfgGroups after this line //////////////// 

class cfgGroups
{  
  class INDEP
  {
    name="Independent";
    class AET_F_mapleSyrup_I_VLF_F
    {
      name="Virolahti Liberation Front - Maple Syrup";

      class Infantry
      {
        name="Infantry";

        class AET_F_mapleSyrup_I_VLF_R_Rifle_Squad
        {
          name="Rifle Squad";
          faction="AET_F_mapleSyrup_I_VLF_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Medic";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Assistant_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Marksman";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_rifleman_1";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_rifleman_1";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit7
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_rifleman_2";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
        };
        class AET_F_mapleSyrup_I_VLF_R_Rifle_Squad_LAT
        {
          name="Rifle Squad LAT";
          faction="AET_F_mapleSyrup_I_VLF_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Medic";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Assistant_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Marksman";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_rifleman_1";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_rifleman_2";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit7
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Rifleman_AT";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
        };
        class AET_F_mapleSyrup_I_VLF_R_Support_Team
        {
          name="Support Team";
          faction="AET_F_mapleSyrup_I_VLF_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Assistant_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Marksman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class AET_F_mapleSyrup_I_VLF_R_Anti_Tank_Team
        {
          name="Anti Tank Team";
          faction="AET_F_mapleSyrup_I_VLF_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Anti_Tank_RPG";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Rifleman_AT";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Rifleman_AT";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class AET_F_mapleSyrup_I_VLF_R_Anti_Air_Team
        {
          name="Anti Air Team";
          faction="AET_F_mapleSyrup_I_VLF_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Anti_Air";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Anti_Air_Assistant";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
        };
        class AET_F_mapleSyrup_I_VLF_R_Fire_Team
        {
          name="Fire Team";
          faction="AET_F_mapleSyrup_I_VLF_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_rifleman_1";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_rifleman_1";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_rifleman_2";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class AET_F_mapleSyrup_I_VLF_R_Fire_Team_LAT
        {
          name="Fire Team LAT";
          faction="AET_F_mapleSyrup_I_VLF_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_rifleman_1";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_rifleman_2";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Rifleman_AT";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class AET_F_mapleSyrup_I_VLF_R_Patrol
        {
          name="Patrol";
          faction="AET_F_mapleSyrup_I_VLF_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_rifleman_1";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_rifleman_2";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
        };
        class AET_F_mapleSyrup_I_VLF_R_Rifle_Squad_AT
        {
          name="Rifle Squad AT";
          faction="AET_F_mapleSyrup_I_VLF_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Medic";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Assistant_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Marksman";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_rifleman_1";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_rifleman_2";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit7
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Anti_Tank_RPG";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
        };
      };
      class Motorized
      {
        name="Motorized";

        class AET_F_mapleSyrup_I_VLF_R_Land_Rover_Transport_Closed
        {
          name="Land Rover Transport Closed";
          faction="AET_F_mapleSyrup_I_VLF_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Land_Rover_Transport_Closed";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Medic";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
          class Unit4
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Assistant_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-60,0};
          };
          class Unit5
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Marksman";
            rank="PRIVATE";
            position[]={0,-75,0};
          };
          class Unit6
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_rifleman_1";
            rank="PRIVATE";
            position[]={0,-90,0};
          };
          class Unit7
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Rifleman_AT";
            rank="PRIVATE";
            position[]={0,-105,0};
          };
        };
        class AET_F_mapleSyrup_I_VLF_R_Land_Rover_Transport_Open
        {
          name="Land Rover Transport Open";
          faction="AET_F_mapleSyrup_I_VLF_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Land_Rover_Transport_Open";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Medic";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
          class Unit4
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Assistant_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-60,0};
          };
          class Unit5
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Marksman";
            rank="PRIVATE";
            position[]={0,-75,0};
          };
          class Unit6
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_rifleman_1";
            rank="PRIVATE";
            position[]={0,-90,0};
          };
          class Unit7
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Rifleman_AT";
            rank="PRIVATE";
            position[]={0,-105,0};
          };
        };
      };
      class Mechanized
      {
        name="Mechanized";

        class AET_F_mapleSyrup_I_VLF_R_BMP_1
        {
          name="BMP 1";
          faction="AET_F_mapleSyrup_I_VLF_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_BMP_1";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Medic";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
          class Unit4
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Assistant_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-60,0};
          };
          class Unit5
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Marksman";
            rank="PRIVATE";
            position[]={0,-75,0};
          };
          class Unit6
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_rifleman_1";
            rank="PRIVATE";
            position[]={0,-90,0};
          };
          class Unit7
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_rifleman_2";
            rank="PRIVATE";
            position[]={0,-105,0};
          };
          class Unit8
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Rifleman_AT";
            rank="PRIVATE";
            position[]={0,-120,0};
          };
        };
        class AET_F_mapleSyrup_I_VLF_R_BMP_2
        {
          name="BMP 2";
          faction="AET_F_mapleSyrup_I_VLF_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_BMP_2";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Medic";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
          class Unit4
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Assistant_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-60,0};
          };
          class Unit5
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Marksman";
            rank="PRIVATE";
            position[]={0,-75,0};
          };
          class Unit6
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_rifleman_1";
            rank="PRIVATE";
            position[]={0,-90,0};
          };
          class Unit7
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_rifleman_2";
            rank="PRIVATE";
            position[]={0,-105,0};
          };
          class Unit8
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Rifleman_AT";
            rank="PRIVATE";
            position[]={0,-120,0};
          };
        };
        class AET_F_mapleSyrup_I_VLF_R_BTR_60
        {
          name="BTR 60";
          faction="AET_F_mapleSyrup_I_VLF_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_BTR_60";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Medic";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
          class Unit4
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Assistant_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-60,0};
          };
          class Unit5
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Marksman";
            rank="PRIVATE";
            position[]={0,-75,0};
          };
          class Unit6
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_rifleman_1";
            rank="PRIVATE";
            position[]={0,-90,0};
          };
          class Unit7
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_rifleman_2";
            rank="PRIVATE";
            position[]={0,-105,0};
          };
          class Unit8
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Rifleman_AT";
            rank="PRIVATE";
            position[]={0,-120,0};
          };
        };
        class AET_F_mapleSyrup_I_VLF_R_MT_LB_PKT
        {
          name="MT LB PKT";
          faction="AET_F_mapleSyrup_I_VLF_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_MT_LB_PKT";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Medic";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
          class Unit4
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Assistant_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-60,0};
          };
          class Unit5
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Marksman";
            rank="PRIVATE";
            position[]={0,-75,0};
          };
          class Unit6
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_rifleman_1";
            rank="PRIVATE";
            position[]={0,-90,0};
          };
          class Unit7
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_rifleman_2";
            rank="PRIVATE";
            position[]={0,-105,0};
          };
          class Unit8
          {
            side=2;
            vehicle="AET_F_mapleSyrup_I_VLF_Rifleman_AT";
            rank="PRIVATE";
            position[]={0,-120,0};
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
