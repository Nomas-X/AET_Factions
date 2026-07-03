class cfgPatches
{
  class AET_F_aboveAllElse_O_TKA_yepperzz
  {
	skipWhenMissingDependencies = 1;
    units[]={"AET_F_aboveAllElse_O_TKA_Squad_Leader","AET_F_aboveAllElse_O_TKA_Rifleman_1","AET_F_aboveAllElse_O_TKA_Team_Leader_1","AET_F_aboveAllElse_O_TKA_Autorifleman_1","AET_F_aboveAllElse_O_TKA_Rifleman_2","AET_F_aboveAllElse_O_TKA_Rifleman_4","AET_F_aboveAllElse_O_TKA_Rifleman_3","AET_F_aboveAllElse_O_TKA_Machine_Gunner","AET_F_aboveAllElse_O_TKA_Team_Leader_2","AET_F_aboveAllElse_O_TKA_Autorifleman_2","AET_F_aboveAllElse_O_TKA_Rifleman_6","AET_F_aboveAllElse_O_TKA_Rifleman_7","AET_F_aboveAllElse_O_TKA_Officer","AET_F_aboveAllElse_O_TKA_Marksman","AET_F_aboveAllElse_O_TKA_Helicopter_Pilot","AET_F_aboveAllElse_O_TKA_Medic","AET_F_aboveAllElse_O_TKA_Rifleman_5","AET_F_aboveAllElse_O_TKA_Rifleman_8","AET_F_aboveAllElse_O_TKA_Mil_Mi_8_Transport","AET_F_aboveAllElse_O_TKA_Mil_Mi_24P","AET_F_aboveAllElse_O_TKA_2A18M_D_30A","AET_F_aboveAllElse_O_TKA_Mil_Mi_24V"};
    weapons[]={"AET_F_aboveAllElse_O_TKA_UK3CB_FNFAL_PARA_uk3cb_optic_SUIT_FNFAL","AET_F_aboveAllElse_O_TKA_rhs_weap_ak74_rhs_acc_dtk1983","AET_F_aboveAllElse_O_TKA_rhs_weap_aks74_rhs_acc_dtk1983","AET_F_aboveAllElse_O_TKA_UK3CB_RPK_74_rhs_acc_dtkrpk","AET_F_aboveAllElse_O_TKA_UK3CB_FNFAL_PARA","AET_F_aboveAllElse_O_TKA_rhs_weap_akm_rhs_acc_dtkakm","AET_F_aboveAllElse_O_TKA_rhs_weap_pkm","AET_F_aboveAllElse_O_TKA_rhs_weap_aks74_gp25_rhs_acc_dtk1983","AET_F_aboveAllElse_O_TKA_rhs_weap_akms_rhs_acc_dtkakm","AET_F_aboveAllElse_O_TKA_rhs_weap_aks74u_rhs_acc_pgs64_74u","AET_F_aboveAllElse_O_TKA_UK3CB_SVD_OLD_rhs_acc_pso1m2","AET_F_aboveAllElse_O_TKA_U_CombatUniform_01_WDL"};
    requiredVersion=0.1;
    requiredAddons[]={"A3_Weapons_F_Items","A3_Weapons_F","tfar_handhelds","UK3CB_Factions_Weapons_FNFAL","UK3CB_Factions_Equipment_Vests","rhs_c_troops","A3_Characters_F","CuratorOnly_Characters_F_OPFOR","rhs_c_weapons","UK3CB_Factions_ADA_B","UK3CB_Factions_ANA_B","UK3CB_Factions_Weapons_RPK","UK3CB_Factions_Headgear","ace_field_rations","UK3CB_Factions_TKA_B","UK3CB_Factions_TKA_I","UK3CB_Factions_Weapons_SVD_OLD","UK3CB_Factions_Headgear2","UK3CB_Factions_TKA_O"};
  };
};

class cfgFactionClasses
{
  class AET_F_aboveAllElse_O_TKA_yepperzz
  {
    icon="";
    displayName="Mountain TKA - Above All Else";
    side=0;
    priority=1;
  };
};


class cfgWeapons
{
	class UniformItem;
	class UK3CB_TKA_B_U_CombatUniform_01_WDL;

	class AET_F_aboveAllElse_O_TKA_U_CombatUniform_01_WDL : UK3CB_TKA_B_U_CombatUniform_01_WDL
	{
		scope=2;
		scopeArsenal=2;
		weaponPoolAvailable=1;
		class itemInfo : UniformItem
		{
			uniformClass= "AET_F_aboveAllElse_O_TKA_Infantry_U_01";
			containerClass="Supply40";
			mass=60;
			modelSides[]={6};
		};	
	};

  class UK3CB_FNFAL_PARA;
  class rhs_weap_ak74;
  class rhs_weap_aks74;
  class UK3CB_RPK_74;
  class rhs_weap_akm;
  class rhs_weap_pkm;
  class rhs_weap_aks74_gp25;
  class rhs_weap_akms;
  class rhs_weap_aks74u;
  class UK3CB_SVD_OLD;

  class AET_F_aboveAllElse_O_TKA_UK3CB_FNFAL_PARA_uk3cb_optic_SUIT_FNFAL: UK3CB_FNFAL_PARA
  {
    displayName="FN FAL 50.61 'Para'";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="uk3cb_optic_SUIT_FNFAL";
      };
    };
  };

  class AET_F_aboveAllElse_O_TKA_rhs_weap_ak74_rhs_acc_dtk1983: rhs_weap_ak74
  {
    displayName="AK-74";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhs_acc_dtk1983";
      };
    };
  };

  class AET_F_aboveAllElse_O_TKA_rhs_weap_aks74_rhs_acc_dtk1983: rhs_weap_aks74
  {
    displayName="AKS-74";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhs_acc_dtk1983";
      };
    };
  };

  class AET_F_aboveAllElse_O_TKA_UK3CB_RPK_74_rhs_acc_dtkrpk: UK3CB_RPK_74
  {
    displayName="RPK-74";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhs_acc_dtkrpk";
      };
    };
  };

  class AET_F_aboveAllElse_O_TKA_UK3CB_FNFAL_PARA: UK3CB_FNFAL_PARA
  {
    displayName="FN FAL 50.61 'Para'";
    scope=1;
    class LinkedItems
    {
    };
  };

  class AET_F_aboveAllElse_O_TKA_rhs_weap_akm_rhs_acc_dtkakm: rhs_weap_akm
  {
    displayName="AKM";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhs_acc_dtkakm";
      };
    };
  };

  class AET_F_aboveAllElse_O_TKA_rhs_weap_pkm: rhs_weap_pkm
  {
    displayName="PKM";
    scope=1;
    class LinkedItems
    {
    };
  };

  class AET_F_aboveAllElse_O_TKA_rhs_weap_aks74_gp25_rhs_acc_dtk1983: rhs_weap_aks74_gp25
  {
    displayName="AKS-74 (GP-25)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhs_acc_dtk1983";
      };
    };
  };

  class AET_F_aboveAllElse_O_TKA_rhs_weap_akms_rhs_acc_dtkakm: rhs_weap_akms
  {
    displayName="AKMS";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhs_acc_dtkakm";
      };
    };
  };

  class AET_F_aboveAllElse_O_TKA_rhs_weap_aks74u_rhs_acc_pgs64_74u: rhs_weap_aks74u
  {
    displayName="AKS-74U";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhs_acc_pgs64_74u";
      };
    };
  };

  class AET_F_aboveAllElse_O_TKA_UK3CB_SVD_OLD_rhs_acc_pso1m2: UK3CB_SVD_OLD
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

};

class cfgVehicles
{
	class UK3CB_TKA_B_Infantry_U_01;

	class AET_F_aboveAllElse_O_TKA_Infantry_U_01 : UK3CB_TKA_B_Infantry_U_01
	{
		scope = 1;
		uniformClass = "AET_F_aboveAllElse_O_TKA_U_CombatUniform_01_WDL";
		modelSides[]={6};
	};

  class O_Soldier_SL_F;
  class UK3CB_UN_B_B_ASS;
  class O_Soldier_F;
  class O_Soldier_TL_F;
  class O_Soldier_AR_F;
  class O_HeavyGunner_F;
  class UK3CB_B_Largepack;
  class O_officer_F;
  class O_soldier_M_F;
  class O_helipilot_F;
  class O_medic_F;
  class rhs_medic_bag;
  class UK3CB_TKA_O_Mi8;
  class UK3CB_TKA_O_Mi_24P;
  class UK3CB_TKA_O_D30;
  class UK3CB_TKA_O_Mi_24V;

  class AET_F_aboveAllElse_O_TKA_Squad_Leader: O_Soldier_SL_F
  {
    faction="AET_F_aboveAllElse_O_TKA_yepperzz";
    side=0;
    displayName="Squad Leader";
    uniformClass="rhs_uniform_gorka_1_a";
    weapons[]={"AET_F_aboveAllElse_O_TKA_UK3CB_FNFAL_PARA_uk3cb_optic_SUIT_FNFAL","Put","Throw"};
    respawnWeapons[]={"AET_F_aboveAllElse_O_TKA_UK3CB_FNFAL_PARA_uk3cb_optic_SUIT_FNFAL","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"UK3CB_FNFAL_20rnd_762x51_G","UK3CB_FNFAL_20rnd_762x51_G","UK3CB_FNFAL_20rnd_762x51_G","UK3CB_FNFAL_20rnd_762x51_G","UK3CB_FNFAL_20rnd_762x51_G","UK3CB_FNFAL_20rnd_762x51_G","UK3CB_FNFAL_20rnd_762x51_G"};
    respawnMagazines[]={"UK3CB_FNFAL_20rnd_762x51_G","UK3CB_FNFAL_20rnd_762x51_G","UK3CB_FNFAL_20rnd_762x51_G","UK3CB_FNFAL_20rnd_762x51_G","UK3CB_FNFAL_20rnd_762x51_G","UK3CB_FNFAL_20rnd_762x51_G","UK3CB_FNFAL_20rnd_762x51_G"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_pnr1000a","rhs_beanie_green","UK3CB_V_Chestrig_TKA_BRUSH","UK3CB_G_Gloves_Green_Shemagh_Green"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_pnr1000a","rhs_beanie_green","UK3CB_V_Chestrig_TKA_BRUSH","UK3CB_G_Gloves_Green_Shemagh_Green"};
    backpack="AET_F_aboveAllElse_O_TKA_Squad_Leader_pack";
  };

  class AET_F_aboveAllElse_O_TKA_Rifleman_1: O_Soldier_F
  {
    faction="AET_F_aboveAllElse_O_TKA_yepperzz";
    side=0;
    displayName="Rifleman 1";
    uniformClass="rhs_uniform_gorka_1_a";
    weapons[]={"AET_F_aboveAllElse_O_TKA_rhs_weap_ak74_rhs_acc_dtk1983","Put","Throw"};
    respawnWeapons[]={"AET_F_aboveAllElse_O_TKA_rhs_weap_ak74_rhs_acc_dtk1983","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"MMM_mag_545x39_6L23_SideSide_7N6","MMM_mag_545x39_6L23_SideSide_7N6","MMM_mag_545x39_6L23_SideSide_7N6","MMM_mag_545x39_6L23_SideSide_7N6","MMM_mag_545x39_6L23_SideSide_7N6","MMM_mag_545x39_6L23_SideSide_7N6","MMM_mag_545x39_6L23_SideSide_7N6"};
    respawnMagazines[]={"MMM_mag_545x39_6L23_SideSide_7N6","MMM_mag_545x39_6L23_SideSide_7N6","MMM_mag_545x39_6L23_SideSide_7N6","MMM_mag_545x39_6L23_SideSide_7N6","MMM_mag_545x39_6L23_SideSide_7N6","MMM_mag_545x39_6L23_SideSide_7N6","MMM_mag_545x39_6L23_SideSide_7N6"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_pnr1000a","UK3CB_ADA_B_H_6b27m_ESS_OLI","UK3CB_V_Chestrig_TKA_BRUSH","UK3CB_G_Gloves_Green_Shemagh_Green"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_pnr1000a","UK3CB_ADA_B_H_6b27m_ESS_OLI","UK3CB_V_Chestrig_TKA_BRUSH","UK3CB_G_Gloves_Green_Shemagh_Green"};
    backpack="AET_F_aboveAllElse_O_TKA_Rifleman_1_pack";
  };

  class AET_F_aboveAllElse_O_TKA_Team_Leader_1: O_Soldier_TL_F
  {
    faction="AET_F_aboveAllElse_O_TKA_yepperzz";
    side=0;
    displayName="Team Leader 1";
    uniformClass="rhs_uniform_gorka_1_a";
    weapons[]={"AET_F_aboveAllElse_O_TKA_rhs_weap_aks74_rhs_acc_dtk1983","Put","Throw"};
    respawnWeapons[]={"AET_F_aboveAllElse_O_TKA_rhs_weap_aks74_rhs_acc_dtk1983","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_UpDown_7N6","MMM_mag_545x39_6L23_UpDown_7N6","MMM_mag_545x39_6L23_UpDown_7N6","MMM_mag_545x39_6L23_UpDown_7N6"};
    respawnMagazines[]={"MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_UpDown_7N6","MMM_mag_545x39_6L23_UpDown_7N6","MMM_mag_545x39_6L23_UpDown_7N6","MMM_mag_545x39_6L23_UpDown_7N6"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_pnr1000a","UK3CB_ANA_B_H_6b27m_WDL","UK3CB_V_Chestrig_TKA_BRUSH","UK3CB_G_Gloves_Green_Shemagh_Green"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_pnr1000a","UK3CB_ANA_B_H_6b27m_WDL","UK3CB_V_Chestrig_TKA_BRUSH","UK3CB_G_Gloves_Green_Shemagh_Green"};
    backpack="AET_F_aboveAllElse_O_TKA_Team_Leader_1_pack";
  };

  class AET_F_aboveAllElse_O_TKA_Autorifleman_1: O_Soldier_AR_F
  {
    faction="AET_F_aboveAllElse_O_TKA_yepperzz";
    side=0;
    displayName="Autorifleman 1";
    uniformClass="rhs_uniform_gorka_1_a";
    weapons[]={"AET_F_aboveAllElse_O_TKA_UK3CB_RPK_74_rhs_acc_dtkrpk","Put","Throw"};
    respawnWeapons[]={"AET_F_aboveAllElse_O_TKA_UK3CB_RPK_74_rhs_acc_dtkrpk","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"MMM_mag_545x39_6L18_7T3","MMM_mag_545x39_6L18_7T3","MMM_mag_545x39_6L18_7T3","MMM_mag_545x39_6L18_7T3","MMM_mag_545x39_6L18_7N6","MMM_mag_545x39_6L18_7N6"};
    respawnMagazines[]={"MMM_mag_545x39_6L18_7T3","MMM_mag_545x39_6L18_7T3","MMM_mag_545x39_6L18_7T3","MMM_mag_545x39_6L18_7T3","MMM_mag_545x39_6L18_7N6","MMM_mag_545x39_6L18_7N6"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_pnr1000a","UK3CB_H_Woolhat_BLK","UK3CB_V_Chestrig_TKA_BRUSH","UK3CB_G_Gloves_Green_Shemagh_Green"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_pnr1000a","UK3CB_H_Woolhat_BLK","UK3CB_V_Chestrig_TKA_BRUSH","UK3CB_G_Gloves_Green_Shemagh_Green"};
    backpack="AET_F_aboveAllElse_O_TKA_Autorifleman_1_pack";
  };

  class AET_F_aboveAllElse_O_TKA_Rifleman_2: O_Soldier_F
  {
    faction="AET_F_aboveAllElse_O_TKA_yepperzz";
    side=0;
    displayName="Rifleman 2";
    uniformClass="rhs_uniform_gorka_1_a";
    weapons[]={"AET_F_aboveAllElse_O_TKA_UK3CB_FNFAL_PARA","Put","Throw"};
    respawnWeapons[]={"AET_F_aboveAllElse_O_TKA_UK3CB_FNFAL_PARA","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"UK3CB_FNFAL_20rnd_762x51_G","UK3CB_FNFAL_20rnd_762x51_G","UK3CB_FNFAL_20rnd_762x51_G","UK3CB_FNFAL_20rnd_762x51_G","UK3CB_FNFAL_20rnd_762x51_G","UK3CB_FNFAL_20rnd_762x51_G","UK3CB_FNFAL_20rnd_762x51_G"};
    respawnMagazines[]={"UK3CB_FNFAL_20rnd_762x51_G","UK3CB_FNFAL_20rnd_762x51_G","UK3CB_FNFAL_20rnd_762x51_G","UK3CB_FNFAL_20rnd_762x51_G","UK3CB_FNFAL_20rnd_762x51_G","UK3CB_FNFAL_20rnd_762x51_G","UK3CB_FNFAL_20rnd_762x51_G"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_pnr1000a","UK3CB_ADA_B_H_6b27m_ml_OLI","UK3CB_V_Chestrig_TKA_BRUSH","UK3CB_G_Gloves_Green_Shemagh_Green"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_pnr1000a","UK3CB_ADA_B_H_6b27m_ml_OLI","UK3CB_V_Chestrig_TKA_BRUSH","UK3CB_G_Gloves_Green_Shemagh_Green"};
    backpack="AET_F_aboveAllElse_O_TKA_Rifleman_2_pack";
  };

  class AET_F_aboveAllElse_O_TKA_Rifleman_4: O_Soldier_F
  {
    faction="AET_F_aboveAllElse_O_TKA_yepperzz";
    side=0;
    displayName="Rifleman 4";
    uniformClass="rhs_uniform_gorka_1_a";
    weapons[]={"AET_F_aboveAllElse_O_TKA_rhs_weap_akm_rhs_acc_dtkakm","Put","Throw"};
    respawnWeapons[]={"AET_F_aboveAllElse_O_TKA_rhs_weap_akm_rhs_acc_dtkakm","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"UK3CB_AK47_30Rnd_Magazine_G","UK3CB_AK47_30Rnd_Magazine_G","UK3CB_AK47_30Rnd_Magazine_G","UK3CB_AK47_30Rnd_Magazine_G","UK3CB_AK47_30Rnd_Magazine_G","UK3CB_AK47_30Rnd_Magazine_G","UK3CB_AK47_30Rnd_Magazine_G","rhs_mag_rgd5","rhs_mag_rgd5"};
    respawnMagazines[]={"UK3CB_AK47_30Rnd_Magazine_G","UK3CB_AK47_30Rnd_Magazine_G","UK3CB_AK47_30Rnd_Magazine_G","UK3CB_AK47_30Rnd_Magazine_G","UK3CB_AK47_30Rnd_Magazine_G","UK3CB_AK47_30Rnd_Magazine_G","UK3CB_AK47_30Rnd_Magazine_G","rhs_mag_rgd5","rhs_mag_rgd5"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_pnr1000a","rhs_beanie_green","UK3CB_V_Chestrig_TKA_BRUSH","UK3CB_G_Gloves_Green_Shemagh_Green"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_pnr1000a","rhs_beanie_green","UK3CB_V_Chestrig_TKA_BRUSH","UK3CB_G_Gloves_Green_Shemagh_Green"};
    backpack="AET_F_aboveAllElse_O_TKA_Rifleman_4_pack";
  };

  class AET_F_aboveAllElse_O_TKA_Rifleman_3: O_Soldier_F
  {
    faction="AET_F_aboveAllElse_O_TKA_yepperzz";
    side=0;
    displayName="Rifleman 3";
    uniformClass="rhs_uniform_gorka_1_a";
    weapons[]={"AET_F_aboveAllElse_O_TKA_rhs_weap_ak74_rhs_acc_dtk1983","Put","Throw"};
    respawnWeapons[]={"AET_F_aboveAllElse_O_TKA_rhs_weap_ak74_rhs_acc_dtk1983","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_Plum_7N6"};
    respawnMagazines[]={"MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_Plum_7N6"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_pnr1000a","UK3CB_ADA_B_H_6b27m_ml_OLI","UK3CB_V_Chestrig_TKA_BRUSH","UK3CB_G_Gloves_Green_Shemagh_Green"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_pnr1000a","UK3CB_ADA_B_H_6b27m_ml_OLI","UK3CB_V_Chestrig_TKA_BRUSH","UK3CB_G_Gloves_Green_Shemagh_Green"};
    backpack="AET_F_aboveAllElse_O_TKA_Rifleman_3_pack";
  };

  class AET_F_aboveAllElse_O_TKA_Machine_Gunner: O_HeavyGunner_F
  {
    faction="AET_F_aboveAllElse_O_TKA_yepperzz";
    side=0;
    displayName="Machine Gunner";
    uniformClass="rhs_uniform_gorka_1_a";
    weapons[]={"AET_F_aboveAllElse_O_TKA_rhs_weap_pkm","Put","Throw"};
    respawnWeapons[]={"AET_F_aboveAllElse_O_TKA_rhs_weap_pkm","Put","Throw"};
    items[]={"FirstAidKit","ACE_Canteen"};
    respawnItems[]={"FirstAidKit","ACE_Canteen"};
    magazines[]={"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
    respawnMagazines[]={"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_pnr1000a","UK3CB_ADA_B_H_6b27m_ml_ESS_OLI","UK3CB_V_Chestrig_TKA_BRUSH","UK3CB_G_Gloves_Green_Shemagh_Green"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_pnr1000a","UK3CB_ADA_B_H_6b27m_ml_ESS_OLI","UK3CB_V_Chestrig_TKA_BRUSH","UK3CB_G_Gloves_Green_Shemagh_Green"};
    backpack="AET_F_aboveAllElse_O_TKA_Machine_Gunner_pack";
  };

  class AET_F_aboveAllElse_O_TKA_Team_Leader_2: O_Soldier_TL_F
  {
    faction="AET_F_aboveAllElse_O_TKA_yepperzz";
    side=0;
    displayName="Team Leader 2";
    uniformClass="rhs_uniform_gorka_1_a";
    weapons[]={"AET_F_aboveAllElse_O_TKA_rhs_weap_aks74_gp25_rhs_acc_dtk1983","Put","Throw"};
    respawnWeapons[]={"AET_F_aboveAllElse_O_TKA_rhs_weap_aks74_gp25_rhs_acc_dtk1983","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"MMM_mag_545x39_6L23_UpDown_7T3","MMM_mag_545x39_6L23_UpDown_7T3","MMM_mag_545x39_6L23_UpDown_7T3","MMM_mag_545x39_6L23_UpDown_7T3","MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_Plum_7N6"};
    respawnMagazines[]={"MMM_mag_545x39_6L23_UpDown_7T3","MMM_mag_545x39_6L23_UpDown_7T3","MMM_mag_545x39_6L23_UpDown_7T3","MMM_mag_545x39_6L23_UpDown_7T3","MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_Plum_7N6"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_pnr1000a","UK3CB_ADA_B_H_6b27m_ml_OLI","UK3CB_V_Chestrig_TKA_BRUSH","UK3CB_G_Gloves_Green_Shemagh_Green"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_pnr1000a","UK3CB_ADA_B_H_6b27m_ml_OLI","UK3CB_V_Chestrig_TKA_BRUSH","UK3CB_G_Gloves_Green_Shemagh_Green"};
    backpack="AET_F_aboveAllElse_O_TKA_Team_Leader_2_pack";
  };

  class AET_F_aboveAllElse_O_TKA_Autorifleman_2: O_Soldier_AR_F
  {
    faction="AET_F_aboveAllElse_O_TKA_yepperzz";
    side=0;
    displayName="Autorifleman 2";
    uniformClass="rhs_uniform_gorka_1_a";
    weapons[]={"AET_F_aboveAllElse_O_TKA_UK3CB_RPK_74_rhs_acc_dtkrpk","Put","Throw"};
    respawnWeapons[]={"AET_F_aboveAllElse_O_TKA_UK3CB_RPK_74_rhs_acc_dtkrpk","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"MMM_mag_545x39_6L18_7N6","MMM_mag_545x39_6L18_7N6","MMM_mag_545x39_6L18_7N6","MMM_mag_545x39_6L18_7N6","MMM_mag_545x39_6L18_7N6","MMM_mag_545x39_6L18_7N6","MMM_mag_545x39_6L18_7N6"};
    respawnMagazines[]={"MMM_mag_545x39_6L18_7N6","MMM_mag_545x39_6L18_7N6","MMM_mag_545x39_6L18_7N6","MMM_mag_545x39_6L18_7N6","MMM_mag_545x39_6L18_7N6","MMM_mag_545x39_6L18_7N6","MMM_mag_545x39_6L18_7N6"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_pnr1000a","UK3CB_ADA_B_H_6b27m_OLI","UK3CB_V_Chestrig_TKA_BRUSH","UK3CB_G_Gloves_Green_Shemagh_Green"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_pnr1000a","UK3CB_ADA_B_H_6b27m_OLI","UK3CB_V_Chestrig_TKA_BRUSH","UK3CB_G_Gloves_Green_Shemagh_Green"};
    backpack="AET_F_aboveAllElse_O_TKA_Autorifleman_2_pack";
  };

  class AET_F_aboveAllElse_O_TKA_Rifleman_6: O_Soldier_F
  {
    faction="AET_F_aboveAllElse_O_TKA_yepperzz";
    side=0;
    displayName="Rifleman 6";
    uniformClass="rhs_uniform_gorka_1_a";
    weapons[]={"AET_F_aboveAllElse_O_TKA_rhs_weap_akm_rhs_acc_dtkakm","Put","Throw"};
    respawnWeapons[]={"AET_F_aboveAllElse_O_TKA_rhs_weap_akm_rhs_acc_dtkakm","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"UK3CB_AK47_30Rnd_Magazine_G","UK3CB_AK47_30Rnd_Magazine_G","UK3CB_AK47_30Rnd_Magazine_G","UK3CB_AK47_30Rnd_Magazine_G","UK3CB_AK47_30Rnd_Magazine_G","UK3CB_AK47_30Rnd_Magazine_G","UK3CB_AK47_30Rnd_Magazine_G","rhs_mag_rgd5","rhs_mag_rgd5"};
    respawnMagazines[]={"UK3CB_AK47_30Rnd_Magazine_G","UK3CB_AK47_30Rnd_Magazine_G","UK3CB_AK47_30Rnd_Magazine_G","UK3CB_AK47_30Rnd_Magazine_G","UK3CB_AK47_30Rnd_Magazine_G","UK3CB_AK47_30Rnd_Magazine_G","UK3CB_AK47_30Rnd_Magazine_G","rhs_mag_rgd5","rhs_mag_rgd5"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_pnr1000a","UK3CB_ANA_B_H_6b27m_ESS_WDL","UK3CB_V_Chestrig_TKA_BRUSH","UK3CB_G_Gloves_Green_Shemagh_Green"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_pnr1000a","UK3CB_ANA_B_H_6b27m_ESS_WDL","UK3CB_V_Chestrig_TKA_BRUSH","UK3CB_G_Gloves_Green_Shemagh_Green"};
    backpack="AET_F_aboveAllElse_O_TKA_Rifleman_6_pack";
  };

  class AET_F_aboveAllElse_O_TKA_Rifleman_7: O_Soldier_F
  {
    faction="AET_F_aboveAllElse_O_TKA_yepperzz";
    side=0;
    displayName="Rifleman 7";
    uniformClass="rhs_uniform_gorka_1_a";
    weapons[]={"AET_F_aboveAllElse_O_TKA_rhs_weap_akms_rhs_acc_dtkakm","Put","Throw"};
    respawnWeapons[]={"AET_F_aboveAllElse_O_TKA_rhs_weap_akms_rhs_acc_dtkakm","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"UK3CB_AK47_30Rnd_Magazine_G","UK3CB_AK47_30Rnd_Magazine_G","UK3CB_AK47_30Rnd_Magazine_G","UK3CB_AK47_30Rnd_Magazine_G","UK3CB_AK47_30Rnd_Magazine_G","UK3CB_AK47_30Rnd_Magazine_G","UK3CB_AK47_30Rnd_Magazine_G","rhs_mag_rgd5"};
    respawnMagazines[]={"UK3CB_AK47_30Rnd_Magazine_G","UK3CB_AK47_30Rnd_Magazine_G","UK3CB_AK47_30Rnd_Magazine_G","UK3CB_AK47_30Rnd_Magazine_G","UK3CB_AK47_30Rnd_Magazine_G","UK3CB_AK47_30Rnd_Magazine_G","UK3CB_AK47_30Rnd_Magazine_G","rhs_mag_rgd5"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_pnr1000a","UK3CB_H_Woolhat_BLK","UK3CB_V_Chestrig_TKA_BRUSH","UK3CB_G_Gloves_Green_Shemagh_Green"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_pnr1000a","UK3CB_H_Woolhat_BLK","UK3CB_V_Chestrig_TKA_BRUSH","UK3CB_G_Gloves_Green_Shemagh_Green"};
    backpack="AET_F_aboveAllElse_O_TKA_Rifleman_7_pack";
  };

  class AET_F_aboveAllElse_O_TKA_Officer: O_officer_F
  {
    faction="AET_F_aboveAllElse_O_TKA_yepperzz";
    side=0;
    displayName="Officer";
    uniformClass="AET_F_aboveAllElse_O_TKA_U_CombatUniform_01_WDL";
    weapons[]={"AET_F_aboveAllElse_O_TKA_rhs_weap_aks74u_rhs_acc_pgs64_74u","Put","Throw"};
    respawnWeapons[]={"AET_F_aboveAllElse_O_TKA_rhs_weap_aks74u_rhs_acc_pgs64_74u","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"MMM_mag_545x39_6L23_UpDown_7N6M","MMM_mag_545x39_6L23_UpDown_7N6M","MMM_mag_545x39_6L23_UpDown_7N6M","MMM_mag_545x39_6L23_UpDown_7N6M","MMM_mag_545x39_6L23_UpDown_7N6M"};
    respawnMagazines[]={"MMM_mag_545x39_6L23_UpDown_7N6M","MMM_mag_545x39_6L23_UpDown_7N6M","MMM_mag_545x39_6L23_UpDown_7N6M","MMM_mag_545x39_6L23_UpDown_7N6M","MMM_mag_545x39_6L23_UpDown_7N6M"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_pnr1000a","UK3CB_TKA_B_H_Patrolcap_OFF_WDL","UK3CB_TKA_I_V_6Sh92_Radio_TKA_Brush"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_pnr1000a","UK3CB_TKA_B_H_Patrolcap_OFF_WDL","UK3CB_TKA_I_V_6Sh92_Radio_TKA_Brush"};
    backpack="AET_F_aboveAllElse_O_TKA_Officer_pack";
  };

  class AET_F_aboveAllElse_O_TKA_Marksman: O_soldier_M_F
  {
    faction="AET_F_aboveAllElse_O_TKA_yepperzz";
    side=0;
    displayName="Marksman";
    uniformClass="rhs_uniform_gorka_1_a";
    weapons[]={"AET_F_aboveAllElse_O_TKA_UK3CB_SVD_OLD_rhs_acc_pso1m2","Put","Throw"};
    respawnWeapons[]={"AET_F_aboveAllElse_O_TKA_UK3CB_SVD_OLD_rhs_acc_pso1m2","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"UK3CB_SVD_10rnd_762x54_G","UK3CB_SVD_10rnd_762x54_G","UK3CB_SVD_10rnd_762x54_G","UK3CB_SVD_10rnd_762x54_G","UK3CB_SVD_10rnd_762x54_G","UK3CB_SVD_10rnd_762x54_G","UK3CB_SVD_10rnd_762x54_G","UK3CB_SVD_10rnd_762x54_G","UK3CB_SVD_10rnd_762x54_G"};
    respawnMagazines[]={"UK3CB_SVD_10rnd_762x54_G","UK3CB_SVD_10rnd_762x54_G","UK3CB_SVD_10rnd_762x54_G","UK3CB_SVD_10rnd_762x54_G","UK3CB_SVD_10rnd_762x54_G","UK3CB_SVD_10rnd_762x54_G","UK3CB_SVD_10rnd_762x54_G","UK3CB_SVD_10rnd_762x54_G","UK3CB_SVD_10rnd_762x54_G"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_pnr1000a","UK3CB_H_BoonieHat_WDL_01","UK3CB_V_Chestrig_TKA_OLI","UK3CB_G_Ballistic_Shemagh_Green_Tactical_Gloves_Tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_pnr1000a","UK3CB_H_BoonieHat_WDL_01","UK3CB_V_Chestrig_TKA_OLI","UK3CB_G_Ballistic_Shemagh_Green_Tactical_Gloves_Tan"};
    backpack="AET_F_aboveAllElse_O_TKA_Marksman_pack";
  };

  class AET_F_aboveAllElse_O_TKA_Helicopter_Pilot: O_helipilot_F
  {
    faction="AET_F_aboveAllElse_O_TKA_yepperzz";
    side=0;
    displayName="Helicopter Pilot";
    uniformClass="UK3CB_TKA_O_U_J_Pilot_Digi";
    weapons[]={"AET_F_aboveAllElse_O_TKA_rhs_weap_aks74u_rhs_acc_pgs64_74u","Put","Throw"};
    respawnWeapons[]={"AET_F_aboveAllElse_O_TKA_rhs_weap_aks74u_rhs_acc_pgs64_74u","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_Plum_7N6"};
    respawnMagazines[]={"MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_Plum_7N6"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_pnr1000a","rhs_zsh7a_mike_green","UK3CB_V_Chestrig_TKA_OLI","UK3CB_G_Neck_Shemag"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_pnr1000a","rhs_zsh7a_mike_green","UK3CB_V_Chestrig_TKA_OLI","UK3CB_G_Neck_Shemag"};
    backpack="";
  };

  class AET_F_aboveAllElse_O_TKA_Medic: O_medic_F
  {
    faction="AET_F_aboveAllElse_O_TKA_yepperzz";
    side=0;
    displayName="Medic";
    uniformClass="rhs_uniform_gorka_1_a";
    weapons[]={"AET_F_aboveAllElse_O_TKA_rhs_weap_aks74_rhs_acc_dtk1983","Put","Throw"};
    respawnWeapons[]={"AET_F_aboveAllElse_O_TKA_rhs_weap_aks74_rhs_acc_dtk1983","Put","Throw"};
    items[]={"FirstAidKit","Medikit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","Medikit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
    magazines[]={"MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_Plum_7N6","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
    respawnMagazines[]={"MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_Plum_7N6","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_pnr1000a","UK3CB_ADA_B_H_6b27m_ml_OLI","UK3CB_V_Chestrig_TKA_BRUSH","UK3CB_G_Gloves_Green_Shemagh_Green"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_pnr1000a","UK3CB_ADA_B_H_6b27m_ml_OLI","UK3CB_V_Chestrig_TKA_BRUSH","UK3CB_G_Gloves_Green_Shemagh_Green"};
    backpack="AET_F_aboveAllElse_O_TKA_Medic_pack";
  };

  class AET_F_aboveAllElse_O_TKA_Rifleman_5: O_Soldier_F
  {
    faction="AET_F_aboveAllElse_O_TKA_yepperzz";
    side=0;
    displayName="Rifleman 5";
    uniformClass="rhs_uniform_gorka_1_a";
    weapons[]={"AET_F_aboveAllElse_O_TKA_UK3CB_FNFAL_PARA","Put","Throw"};
    respawnWeapons[]={"AET_F_aboveAllElse_O_TKA_UK3CB_FNFAL_PARA","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"UK3CB_FNFAL_20rnd_762x51_G","UK3CB_FNFAL_20rnd_762x51_G","UK3CB_FNFAL_20rnd_762x51_G","UK3CB_FNFAL_20rnd_762x51_G","UK3CB_FNFAL_20rnd_762x51_G","UK3CB_FNFAL_20rnd_762x51_G","UK3CB_FNFAL_20rnd_762x51_G"};
    respawnMagazines[]={"UK3CB_FNFAL_20rnd_762x51_G","UK3CB_FNFAL_20rnd_762x51_G","UK3CB_FNFAL_20rnd_762x51_G","UK3CB_FNFAL_20rnd_762x51_G","UK3CB_FNFAL_20rnd_762x51_G","UK3CB_FNFAL_20rnd_762x51_G","UK3CB_FNFAL_20rnd_762x51_G"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_pnr1000a","UK3CB_H_Woolhat_GRN","UK3CB_V_Chestrig_TKA_BRUSH","UK3CB_G_Gloves_Green_Shemagh_Green"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_pnr1000a","UK3CB_H_Woolhat_GRN","UK3CB_V_Chestrig_TKA_BRUSH","UK3CB_G_Gloves_Green_Shemagh_Green"};
    backpack="AET_F_aboveAllElse_O_TKA_Rifleman_5_pack";
  };

  class AET_F_aboveAllElse_O_TKA_Rifleman_8: O_Soldier_F
  {
    faction="AET_F_aboveAllElse_O_TKA_yepperzz";
    side=0;
    displayName="Rifleman 8";
    uniformClass="rhs_uniform_gorka_1_a";
    weapons[]={"AET_F_aboveAllElse_O_TKA_rhs_weap_ak74_rhs_acc_dtk1983","Put","Throw"};
    respawnWeapons[]={"AET_F_aboveAllElse_O_TKA_rhs_weap_ak74_rhs_acc_dtk1983","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"MMM_mag_545x39_6L23_UpDown_7N6","MMM_mag_545x39_6L23_UpDown_7N6","MMM_mag_545x39_6L23_UpDown_7N6","MMM_mag_545x39_6L23_UpDown_7N6","MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_Plum_7N6"};
    respawnMagazines[]={"MMM_mag_545x39_6L23_UpDown_7N6","MMM_mag_545x39_6L23_UpDown_7N6","MMM_mag_545x39_6L23_UpDown_7N6","MMM_mag_545x39_6L23_UpDown_7N6","MMM_mag_545x39_6L23_Plum_7N6","MMM_mag_545x39_6L23_Plum_7N6"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_pnr1000a","UK3CB_ADA_B_H_6b27m_ESS_OLI","UK3CB_V_Chestrig_TKA_BRUSH","UK3CB_G_Gloves_Green_Shemagh_Green"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_pnr1000a","UK3CB_ADA_B_H_6b27m_ESS_OLI","UK3CB_V_Chestrig_TKA_BRUSH","UK3CB_G_Gloves_Green_Shemagh_Green"};
    backpack="AET_F_aboveAllElse_O_TKA_Rifleman_8_pack";
  };

  class AET_F_aboveAllElse_O_TKA_Mil_Mi_8_Transport: UK3CB_TKA_O_Mi8
  {
    faction="AET_F_aboveAllElse_O_TKA_yepperzz";
    side=0;
    displayName="Mil Mi 8 Transport";
    hiddenSelectionsTextures[]={"uk3cb_factions\addons\uk3cb_factions_vehicles\air\uk3cb_factions_vehicles_mi8\data\tka_mi8_body_co.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\air\uk3cb_factions_vehicles_mi8\data\tka_mi8_det_co.paa","","","","",""};
    crew="AET_F_aboveAllElse_O_TKA_Helicopter_Pilot";
    typicalCargo[]={"AET_F_aboveAllElse_O_TKA_Helicopter_Pilot"};
  };

  class AET_F_aboveAllElse_O_TKA_Mil_Mi_24P: UK3CB_TKA_O_Mi_24P
  {
    faction="AET_F_aboveAllElse_O_TKA_yepperzz";
    side=0;
    displayName="Mil Mi 24P";
    hiddenSelectionsTextures[]={"uk3cb_factions\addons\uk3cb_factions_vehicles\air\uk3cb_factions_vehicles_mi24\data\tka_mi35_001_co.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\air\uk3cb_factions_vehicles_mi24\data\tka_mi35_002_co.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\air\uk3cb_factions_vehicles_mi24\data\tka_mi8_det_co.paa","","","",""};
    crew="AET_F_aboveAllElse_O_TKA_Helicopter_Pilot";
    typicalCargo[]={"AET_F_aboveAllElse_O_TKA_Helicopter_Pilot"};
  };

  class AET_F_aboveAllElse_O_TKA_2A18M_D_30A: UK3CB_TKA_O_D30
  {
    faction="AET_F_aboveAllElse_O_TKA_yepperzz";
    side=0;
    displayName="2A18M D 30A";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_heavyweapons\d30\data\d30_co.paa"};
    crew="AET_F_aboveAllElse_O_TKA_Rifleman_1";
    typicalCargo[]={"AET_F_aboveAllElse_O_TKA_Rifleman_1"};
  };

  class AET_F_aboveAllElse_O_TKA_Mil_Mi_24V: UK3CB_TKA_O_Mi_24V
  {
    faction="AET_F_aboveAllElse_O_TKA_yepperzz";
    side=0;
    displayName="Mil Mi 24V";
    hiddenSelectionsTextures[]={"uk3cb_factions\addons\uk3cb_factions_vehicles\air\uk3cb_factions_vehicles_mi24\data\tka_mi35_001_co.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\air\uk3cb_factions_vehicles_mi24\data\tka_mi35_002_co.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\air\uk3cb_factions_vehicles_mi24\data\tka_mi8_det_co.paa","","","",""};
    crew="AET_F_aboveAllElse_O_TKA_Helicopter_Pilot";
    typicalCargo[]={"AET_F_aboveAllElse_O_TKA_Helicopter_Pilot"};
  };


  class AET_F_aboveAllElse_O_TKA_Squad_Leader_pack: UK3CB_UN_B_B_ASS
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class AET_F_aboveAllElse_O_TKA_Rifleman_1_pack: UK3CB_UN_B_B_ASS
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class AET_F_aboveAllElse_O_TKA_Team_Leader_1_pack: UK3CB_UN_B_B_ASS
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class AET_F_aboveAllElse_O_TKA_Autorifleman_1_pack: UK3CB_UN_B_B_ASS
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class AET_F_aboveAllElse_O_TKA_Rifleman_2_pack: UK3CB_UN_B_B_ASS
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class AET_F_aboveAllElse_O_TKA_Rifleman_4_pack: UK3CB_UN_B_B_ASS
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class AET_F_aboveAllElse_O_TKA_Rifleman_3_pack: UK3CB_UN_B_B_ASS
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class AET_F_aboveAllElse_O_TKA_Machine_Gunner_pack: UK3CB_B_Largepack
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_100Rnd_762x54mmR {count=3;magazine="rhs_100Rnd_762x54mmR";};
    };
    class TransportItems
    {
     class _xx_ACE_Canteen {count=1;name="ACE_Canteen";};
    };
    class TransportWeapons{};
  };


  class AET_F_aboveAllElse_O_TKA_Team_Leader_2_pack: UK3CB_UN_B_B_ASS
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class AET_F_aboveAllElse_O_TKA_Autorifleman_2_pack: UK3CB_UN_B_B_ASS
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class AET_F_aboveAllElse_O_TKA_Rifleman_6_pack: UK3CB_UN_B_B_ASS
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class AET_F_aboveAllElse_O_TKA_Rifleman_7_pack: UK3CB_UN_B_B_ASS
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class AET_F_aboveAllElse_O_TKA_Officer_pack: UK3CB_UN_B_B_ASS
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class AET_F_aboveAllElse_O_TKA_Marksman_pack: UK3CB_UN_B_B_ASS
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class AET_F_aboveAllElse_O_TKA_Medic_pack: rhs_medic_bag
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_Medikit {count=1;name="Medikit";};
     class _xx_FirstAidKit {count=9;name="FirstAidKit";};
    };
    class TransportWeapons{};
  };


  class AET_F_aboveAllElse_O_TKA_Rifleman_5_pack: UK3CB_UN_B_B_ASS
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class AET_F_aboveAllElse_O_TKA_Rifleman_8_pack: UK3CB_UN_B_B_ASS
  {
    scope=1;
    class TransportMagazines{};
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
    class AET_F_aboveAllElse_O_TKA_F
    {
      name="Mountain TKA - Above All Else";

      class Infantry
      {
        name="Infantry";

        class AET_F_aboveAllElse_O_TKA_O_Sentry
        {
          name="Sentry";
          faction="AET_F_aboveAllElse_O_TKA_yepperzz";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="AET_F_aboveAllElse_O_TKA_Rifleman_8";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="AET_F_aboveAllElse_O_TKA_Rifleman_7";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
        };
        class AET_F_aboveAllElse_O_TKA_O_Fire_Team
        {
          name="Fire Team";
          faction="AET_F_aboveAllElse_O_TKA_yepperzz";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="AET_F_aboveAllElse_O_TKA_Team_Leader_2";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="AET_F_aboveAllElse_O_TKA_Autorifleman_2";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="AET_F_aboveAllElse_O_TKA_Rifleman_6";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="AET_F_aboveAllElse_O_TKA_Rifleman_5";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class AET_F_aboveAllElse_O_TKA_O_Patrol
        {
          name="Patrol";
          faction="AET_F_aboveAllElse_O_TKA_yepperzz";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="AET_F_aboveAllElse_O_TKA_Team_Leader_2";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="AET_F_aboveAllElse_O_TKA_Autorifleman_2";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="AET_F_aboveAllElse_O_TKA_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="AET_F_aboveAllElse_O_TKA_Rifleman_6";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=0;
            vehicle="AET_F_aboveAllElse_O_TKA_Rifleman_5";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
        };
        class AET_F_aboveAllElse_O_TKA_O_Squad
        {
          name="Squad";
          faction="AET_F_aboveAllElse_O_TKA_yepperzz";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="AET_F_aboveAllElse_O_TKA_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="AET_F_aboveAllElse_O_TKA_Rifleman_3";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="AET_F_aboveAllElse_O_TKA_Rifleman_4";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="AET_F_aboveAllElse_O_TKA_Rifleman_6";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=0;
            vehicle="AET_F_aboveAllElse_O_TKA_Rifleman_8";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=0;
            vehicle="AET_F_aboveAllElse_O_TKA_Rifleman_2";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=0;
            vehicle="AET_F_aboveAllElse_O_TKA_Autorifleman_1";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit7
          {
            side=0;
            vehicle="AET_F_aboveAllElse_O_TKA_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
        };
      };
      class Motorized
      {
        name="Motorized";

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
