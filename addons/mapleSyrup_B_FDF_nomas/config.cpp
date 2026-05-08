class cfgPatches
{
  class AET_F_mapleSyrup_B_FDF_nomas
  {
	skipWhenMissingDependencies = 1;
    units[]={"AET_F_mapleSyrup_B_FDF_Rifleman"};
    weapons[]={"AET_F_mapleSyrup_B_FDF_UK3CB_RK62","AET_F_mapleSyrup_B_FDF_rhsusf_weap_glock17g4","AET_F_mapleSyrup_B_FDF_U_combatUniform_winter","AET_F_mapleSyrup_B_FDF_V_CarrierRigKBT_01_light_green","AET_F_mapleSyrup_B_FDF_helmet_pasgt_rhino_winter"};
    requiredVersion=0.1;
    requiredAddons[]={"A3_Weapons_F_Items","A3_Weapons_F","UK3CB_Factions_Weapons2_RK62","AET_F_mapleSyrup_B_FDF_nomas","A3_Characters_F","CuratorOnly_Characters_F_BLUFOR"};
  };
};

class cfgFactionClasses
{
  class AET_F_mapleSyrup_B_FDF_nomas
  {
    icon="";
    displayName="FDF - Maple Syrup";
    side=1;
    priority=1;
  };
};

class cfgWeapons
{
	class UniformItem;
	class U_I_E_Uniform_01_F;
	class V_CarrierRigKBT_01_light_Olive_F;
	class rhsgref_helmet_pasgt_woodland_rhino;

	class AET_F_mapleSyrup_B_FDF_U_combatUniform_winter : U_I_E_Uniform_01_F
	{
		scope=2;
		scopeArsenal=2;
		weaponPoolAvailable=1;
		displayName = "FDF Combat Fatigues [Winter]";
		class itemInfo : UniformItem
		{
			uniformClass= "AET_F_mapleSyrup_B_FDF_combatUniform_winter";
			containerClass="Supply40";
			mass=40;
			modelSides[]={0,1,2,3};
		};
	};

	class AET_F_mapleSyrup_B_FDF_V_CarrierRigKBT_01_light_green : V_CarrierRigKBT_01_light_Olive_F
	{
		scope=2;
		scopeArsenal=2;
		displayName = "FDF Modular Carrier Lite (Green)";
		hiddenSelectionsTextures[] = {
			"z\aet_f\addons\mapleSyrup_B_FDF_nomas\data\fdf_g_carrier_rig_oli_co.paa"
		};
	};

	class AET_F_mapleSyrup_B_FDF_helmet_pasgt_rhino_winter : rhsgref_helmet_pasgt_woodland_rhino
	{
		scope=2;
		scopeArsenal=2;
		displayName = "FDF PASGT (Winter, Rhino)";
		hiddenSelectionsTextures[] = {
			"z\aet_f\addons\mapleSyrup_B_FDF_nomas\data\fdf_s_pagst_co.paa",

		};
	};

  class UK3CB_RK62;
  class rhsusf_weap_glock17g4;

  class AET_F_mapleSyrup_B_FDF_UK3CB_RK62: UK3CB_RK62
  {
    displayName="Valmet Rk.62";
    scope=1;
    class LinkedItems
    {
    };
  };

  class AET_F_mapleSyrup_B_FDF_rhsusf_weap_glock17g4: rhsusf_weap_glock17g4
  {
    displayName="Glock 17";
    scope=1;
    class LinkedItems
    {
    };
  };
};

class cfgVehicles
{
	class I_E_Uniform_01_F;

	class AET_F_mapleSyrup_B_FDF_combatUniform_winter : I_E_Uniform_01_F
	{
		scope = 1;
		uniformClass = "AET_F_mapleSyrup_B_FDF_U_combatUniform_winter";
		hiddenSelectionsTextures[] = {
			"z\aet_f\addons\mapleSyrup_B_FDF_nomas\data\fdf_s_infantry_uniform_jacket_co.paa",
			"z\aet_f\addons\mapleSyrup_B_FDF_nomas\data\fdf_s_infantry_uniform_co.paa",
			"z\aet_f\addons\mapleSyrup_B_FDF_nomas\data\fdf_s_gloves_co.paa",
			""
		};
		modelSides[]={0,1,2,3};
	};

  class B_Soldier_F;

  class AET_F_mapleSyrup_B_FDF_Rifleman: B_Soldier_F
  {
    faction="AET_F_mapleSyrup_B_FDF_nomas";
    side=1;
    displayName="Rifleman";
    uniformClass="AET_F_mapleSyrup_B_FDF_U_combatUniform_winter";
    weapons[]={"Binocular","AET_F_mapleSyrup_B_FDF_UK3CB_RK62","AET_F_mapleSyrup_B_FDF_rhsusf_weap_glock17g4","Put","Throw"};
    respawnWeapons[]={"Binocular","AET_F_mapleSyrup_B_FDF_UK3CB_RK62","AET_F_mapleSyrup_B_FDF_rhsusf_weap_glock17g4","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","SmokeShell","SmokeShell","HandGrenade","HandGrenade"};
    respawnMagazines[]={"UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine","SmokeShell","SmokeShell","HandGrenade","HandGrenade"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","AET_F_mapleSyrup_B_FDF_helmet_pasgt_rhino_winter","AET_F_mapleSyrup_B_FDF_V_CarrierRigKBT_01_light_green","G_Bandanna_oli"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","AET_F_mapleSyrup_B_FDF_helmet_pasgt_rhino_winter","AET_F_mapleSyrup_B_FDF_V_CarrierRigKBT_01_light_green","G_Bandanna_oli"};
    backpack="";
  };
};

//////////////// Paste cfgGroups after this line //////////////// 
