class cfgPatches
{
  class AET_F_catapult_I_CMA_nomas
  {
	skipWhenMissingDependencies = 1;
    units[]={"AET_F_catapult_I_CMA_Helicopter_Pilot","AET_F_catapult_I_CMA_Squad_Leader","AET_F_catapult_I_CMA_Team_Leader","AET_F_catapult_I_CMA_Machine_Gunner","AET_F_catapult_I_CMA_Medic","AET_F_catapult_I_CMA_Marksman","AET_F_catapult_I_CMA_Anti_Tank_Specialist","AET_F_catapult_I_CMA_Anti_Air_Specialist","AET_F_catapult_I_CMA_Rifleman","AET_F_catapult_I_CMA_Officer","AET_F_catapult_I_CMA_Sniper","AET_F_catapult_I_CMA_Spotter","AET_F_catapult_I_CMA_M121_AT_Iguana","AET_F_catapult_I_CMA_M121_Iguana","AET_F_catapult_I_CMA_M121_MG_Iguana","AET_F_catapult_I_CMA_D77_TC_Pelican","AET_F_catapult_I_CMA_D77_TC_AV_Pelican","AET_F_catapult_I_CMA_UH_101_Eagle","AET_F_catapult_I_CMA_ARV_13_Ferret","AET_F_catapult_I_CMA_ARV_13_Ferret_M247H","AET_F_catapult_I_CMA_ARV_13_Ferret_MG460_AGL"};
    weapons[]={"AET_F_catapult_I_CMA_Officer_Beret","AET_F_catapult_I_CMA_U_combatUniform_woodland","AET_F_catapult_I_CMA_U_combatUniform_shortsleeve_woodland","AET_F_catapult_I_CMA_U_combatUniform_tankTop_woodland","AET_F_catapult_I_CMA_OPTRE_M7","AET_F_catapult_I_CMA_OPTRE_M6D_Jungle","AET_F_catapult_I_CMA_OPTRE_MA5AGL","AET_F_catapult_I_CMA_OPTRE_MA5A","AET_F_catapult_I_CMA_OPTRE_M247A1_OPTRE_M247A1_Bipod","AET_F_catapult_I_CMA_OPTRE_M392_DMR_OPTRE_M392_Scope","AET_F_catapult_I_CMA_OPTRE_M44_Lykoi_Semi_Disposable_AT_Des","AET_F_catapult_I_CMA_OPTRE_SRS99C"};
    requiredVersion=0.1;
    requiredAddons[]={"A3_Weapons_F_Items","A3_Weapons_F","OPTRE_Weapons_SMG","AET_F_catapult_I_CMA_nomas","TCF_INDFOR_CMA","OPTRE_UNSC_Units_Army","A3_Characters_F","OPTRE_Weapons_AR","OPTRE_Weapons_MG_M247a1","OPTRE_Weapons_DMR","OPTRE_Weapons_AT_M44_Lykoi","ace_rangecard","ace_kestrel4500","OPTRE_Weapons_Items","OPTRE_Weapons_Sniper"};
  };
};

class CfgEditorCategories
{
    class AET_CMA_Category
    {
        displayName = "CMA - Catapult";
    };
};

class cfgFactionClasses
{
  class AET_F_catapult_I_CMA_nomas
  {
    icon="";
    displayName="CMA - Catapult";
    side=2;
    priority=1;
  };
};

class cfgWeapons
{
	class UniformItem;
	class U_I_CombatUniform;
	class U_I_CombatUniform_shortsleeve;
	class U_I_C_Soldier_Para_4_F;

	class AET_F_catapult_I_CMA_U_combatUniform_woodland : U_I_CombatUniform
	{
		scope=2;
		scopeArsenal=2;
		weaponPoolAvailable=1;
		displayName = "CMA Combat Fatigues [Woodland]";
		class itemInfo : UniformItem
		{
			uniformClass= "AET_F_catapult_I_CMA_combatUniform_woodland";
			containerClass="Supply40";
			mass=40;
			modelSides[]={0,1,2,3};
		};	
	};
	class AET_F_catapult_I_CMA_U_combatUniform_shortsleeve_woodland : U_I_CombatUniform_shortsleeve
	{
		scope=2;
		scopeArsenal=2;
		weaponPoolAvailable=1;
		displayName = "CMA Combat Fatigues (Rolled Up) [Woodland]";
		class itemInfo : UniformItem
		{
			uniformClass= "AET_F_catapult_I_CMA_combatUniform_shortsleeve_woodland";
			containerClass="Supply40";
			mass=40;
			modelSides[]={0,1,2,3};
		};	
	};
	class AET_F_catapult_I_CMA_U_combatUniform_tankTop_woodland : U_I_C_Soldier_Para_4_F
	{
		scope=2;
		scopeArsenal=2;
		weaponPoolAvailable=1;
		displayName = "CMA Combat Fatigues (Tank Top) [Woodland]";
		class itemInfo : UniformItem
		{
			uniformClass= "AET_F_catapult_I_CMA_combatUniform_tankTop_woodland";
			containerClass="Supply40";
			mass=40;
			modelSides[]={0,1,2,3};
		};	
	};

  class TCF_Beret_CGC;
  class AET_F_catapult_I_CMA_Officer_Beret : TCF_Beret_CGC
  {
    scope = 2;
    scopeArsenal = 2;
    weaponPoolAvailable = 1;
    displayName = "Beret (CMA)";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"TCF_EQUIPMENT\helmets\misc\data\beret_cgc.paa"};
  };

  class OPTRE_M7;
  class OPTRE_M6D_Jungle;
  class OPTRE_MA5AGL;
  class OPTRE_MA5A;
  class OPTRE_M247A1;
  class OPTRE_M392_DMR;
  class OPTRE_M44_Lykoi_Semi_Disposable_AT_Des;
  class OPTRE_SRS99C;

  class AET_F_catapult_I_CMA_OPTRE_M7: OPTRE_M7
  {
    displayName="M7 Caseless SMG";
    scope=1;
    class LinkedItems
    {
    };
  };

  class AET_F_catapult_I_CMA_OPTRE_M6D_Jungle: OPTRE_M6D_Jungle
  {
    displayName="M6D Handgun (Jungle)";
    scope=1;
    class LinkedItems
    {
    };
  };

  class AET_F_catapult_I_CMA_OPTRE_MA5AGL: OPTRE_MA5AGL
  {
    displayName="MA3A + M301 GL Assault Rifle";
    scope=1;
    class LinkedItems
    {
    };
  };

  class AET_F_catapult_I_CMA_OPTRE_MA5A: OPTRE_MA5A
  {
    displayName="MA3A ICWS Assault Rifle";
    scope=1;
    class LinkedItems
    {
    };
  };

  class AET_F_catapult_I_CMA_OPTRE_M247A1_OPTRE_M247A1_Bipod: OPTRE_M247A1
  {
    displayName="M247A1";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsUnder
      {
        slot="UnderBarrelSlot";
        item="OPTRE_M247A1_Bipod";
      };
    };
  };

  class AET_F_catapult_I_CMA_OPTRE_M392_DMR_OPTRE_M392_Scope: OPTRE_M392_DMR
  {
    displayName="M392 DMR";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="OPTRE_M392_Scope";
      };
    };
  };

  class AET_F_catapult_I_CMA_OPTRE_M44_Lykoi_Semi_Disposable_AT_Des: OPTRE_M44_Lykoi_Semi_Disposable_AT_Des
  {
    displayName="M44 Lykoi Semi Disposable AT (Desert)";
    scope=1;
    class LinkedItems
    {
    };
  };

  class AET_F_catapult_I_CMA_OPTRE_SRS99C: OPTRE_SRS99C
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
  class I_soldier_F;
  class I_Soldier_lite_F;
  class I_C_Soldier_Para_4_F;

  class AET_F_catapult_I_CMA_combatUniform_woodland : I_soldier_F
  {
	scope = 1;
	uniformClass = "AET_F_catapult_I_CMA_U_combatUniform_woodland";
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"\TCF_INDFOR\Colonial Military Authority\Units\data\CGC.paa"
	};
	modelSides[]={0,1,2,3};
  };

  class AET_F_catapult_I_CMA_combatUniform_shortsleeve_woodland : I_Soldier_lite_F
  {
	scope = 1;
	uniformClass = "AET_F_catapult_I_CMA_U_combatUniform_shortsleeve_woodland";
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"\TCF_INDFOR\Colonial Military Authority\Units\data\CGC.paa"
	};
	modelSides[]={0,1,2,3};
  };

  class AET_F_catapult_I_CMA_combatUniform_tankTop_woodland : I_C_Soldier_Para_4_F
  {
	scope = 1;
	uniformClass = "AET_F_catapult_I_CMA_U_combatUniform_tankTop_woodland";
	hiddenSelections[]=
	{
		"Camo1",
		"Camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\TCF_INDFOR\Colonial Military Authority\Units\data\Top.paa",
		"\TCF_INDFOR\Colonial Military Authority\Units\data\CGC.paa"
	};
	modelSides[]={0,1,2,3};
  };

  class I_helipilot_F;
  class I_Soldier_SL_F;
  class TCF_RADIO_WDL;
  class I_Soldier_TL_F;
  class I_Soldier_AR_F;
  class I_medic_F;
  class B_Kitbag_rgr;
  class I_Soldier_M_F;
  class I_Soldier_AT_F;
  class I_Soldier_AA_F;
  class I_officer_F;
  class I_Sniper_F;
  class I_Spotter_F;
  class TCF_Meerkat_CGC_AT;
  class TCF_Meerkat_CGC_U;
  class TCF_Meerkat_CGC_HMG;
  class TCF_D77_U_CGC;
  class TCF_D77_A_CGC;
  class TCF_UH101_CGC;
  class TCF_ARV_AR_WDL;
  class TCF_ARV_AR_HMG_WDL;
  class TCF_ARV_AR_GMG_WDL;

  class AET_F_catapult_I_CMA_Helicopter_Pilot: I_helipilot_F
  {
    faction="AET_F_catapult_I_CMA_nomas";
    editorCategory="AET_CMA_Category";
    side=2;
    displayName="Helicopter Pilot";
    uniformClass="AET_F_catapult_I_CMA_U_combatUniform_woodland";
    weapons[]={"OPTRE_Binoculars","AET_F_catapult_I_CMA_OPTRE_M7","AET_F_catapult_I_CMA_OPTRE_M6D_Jungle","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","AET_F_catapult_I_CMA_OPTRE_M7","AET_F_catapult_I_CMA_OPTRE_M6D_Jungle","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_48Rnd_5x23mm_Mag","OPTRE_48Rnd_5x23mm_Mag","OPTRE_48Rnd_5x23mm_Mag","OPTRE_48Rnd_5x23mm_Mag","OPTRE_48Rnd_5x23mm_Mag"};
    respawnMagazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_48Rnd_5x23mm_Mag","OPTRE_48Rnd_5x23mm_Mag","OPTRE_48Rnd_5x23mm_Mag","OPTRE_48Rnd_5x23mm_Mag","OPTRE_48Rnd_5x23mm_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","OPTRE_UNSC_VX16_Helmet_Mask_oli","TCF_ACTV_CGC_VEST","TCF_UP_Shemagheye","OPTRE_NVG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","OPTRE_UNSC_VX16_Helmet_Mask_oli","TCF_ACTV_CGC_VEST","TCF_UP_Shemagheye","OPTRE_NVG"};
    backpack="";
  };

  class AET_F_catapult_I_CMA_Squad_Leader: I_Soldier_SL_F
  {
    faction="AET_F_catapult_I_CMA_nomas";
    editorCategory="AET_CMA_Category";
    side=2;
    displayName="Squad Leader";
    uniformClass="AET_F_catapult_I_CMA_U_combatUniform_woodland";
    weapons[]={"OPTRE_Binoculars","AET_F_catapult_I_CMA_OPTRE_MA5AGL","AET_F_catapult_I_CMA_OPTRE_M6D_Jungle","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","AET_F_catapult_I_CMA_OPTRE_MA5AGL","AET_F_catapult_I_CMA_OPTRE_M6D_Jungle","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Blue","OPTRE_M2_Smoke_Blue","OPTRE_M8_Flare"};
    respawnMagazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Blue","OPTRE_M2_Smoke_Blue","OPTRE_M8_Flare"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","TCF_CGC_CH230_CIG_SL","TCF_ACTV_CGC_VEST_UP","TCF_UP_Shemagheye","OPTRE_NVG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","TCF_CGC_CH230_CIG_SL","TCF_ACTV_CGC_VEST_UP","TCF_UP_Shemagheye","OPTRE_NVG"};
    backpack="AET_F_catapult_I_CMA_Squad_Leader_pack";
  };

  class AET_F_catapult_I_CMA_Team_Leader: I_Soldier_TL_F
  {
    faction="AET_F_catapult_I_CMA_nomas";
    editorCategory="AET_CMA_Category";
    side=2;
    displayName="Team Leader";
    uniformClass="AET_F_catapult_I_CMA_U_combatUniform_shortsleeve_woodland";
    weapons[]={"OPTRE_Binoculars","AET_F_catapult_I_CMA_OPTRE_MA5A","AET_F_catapult_I_CMA_OPTRE_M6D_Jungle","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","AET_F_catapult_I_CMA_OPTRE_MA5A","AET_F_catapult_I_CMA_OPTRE_M6D_Jungle","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Blue","OPTRE_M2_Smoke_Blue","OPTRE_M8_Flare","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow"};
    respawnMagazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Blue","OPTRE_M2_Smoke_Blue","OPTRE_M8_Flare","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","TCF_CGC_CH230_CIG_SL","TCF_ACTV_CGC_VEST_UP","TCF_UP_Shemagheye","OPTRE_NVG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","TCF_CGC_CH230_CIG_SL","TCF_ACTV_CGC_VEST_UP","TCF_UP_Shemagheye","OPTRE_NVG"};
    backpack="";
  };

  class AET_F_catapult_I_CMA_Machine_Gunner: I_Soldier_AR_F
  {
    faction="AET_F_catapult_I_CMA_nomas";
    editorCategory="AET_CMA_Category";
    side=2;
    displayName="Machine Gunner";
    uniformClass="AET_F_catapult_I_CMA_U_combatUniform_tankTop_woodland";
    weapons[]={"OPTRE_Binoculars","AET_F_catapult_I_CMA_OPTRE_M247A1_OPTRE_M247A1_Bipod","AET_F_catapult_I_CMA_OPTRE_M6D_Jungle","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","AET_F_catapult_I_CMA_OPTRE_M247A1_OPTRE_M247A1_Bipod","AET_F_catapult_I_CMA_OPTRE_M6D_Jungle","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_200Rnd_762x51_M118_M247A1_Box","OPTRE_200Rnd_762x51_M118_M247A1_Box","OPTRE_200Rnd_762x51_M118_M247A1_Box","OPTRE_200Rnd_762x51_M118_M247A1_Box"};
    respawnMagazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_200Rnd_762x51_M118_M247A1_Box","OPTRE_200Rnd_762x51_M118_M247A1_Box","OPTRE_200Rnd_762x51_M118_M247A1_Box","OPTRE_200Rnd_762x51_M118_M247A1_Box"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","TCF_CGC_CH230_Bull_MG","TCF_ACTV_CGC_VEST","TCF_Shemagheye","OPTRE_NVG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","TCF_CGC_CH230_Bull_MG","TCF_ACTV_CGC_VEST","TCF_Shemagheye","OPTRE_NVG"};
    backpack="";
  };

  class AET_F_catapult_I_CMA_Medic: I_medic_F
  {
    faction="AET_F_catapult_I_CMA_nomas";
    editorCategory="AET_CMA_Category";
    side=2;
    displayName="Medic";
    uniformClass="AET_F_catapult_I_CMA_U_combatUniform_tankTop_woodland";
    weapons[]={"OPTRE_Binoculars","AET_F_catapult_I_CMA_OPTRE_MA5A","AET_F_catapult_I_CMA_OPTRE_M6D_Jungle","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","AET_F_catapult_I_CMA_OPTRE_MA5A","AET_F_catapult_I_CMA_OPTRE_M6D_Jungle","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","Medikit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","Medikit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
    magazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag"};
    respawnMagazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","TCF_CGC_CH230_MD","TCF_ACTV_CGC_VEST","TCF_Shemagheye","OPTRE_NVG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","TCF_CGC_CH230_MD","TCF_ACTV_CGC_VEST","TCF_Shemagheye","OPTRE_NVG"};
    backpack="AET_F_catapult_I_CMA_Medic_pack";
  };

  class AET_F_catapult_I_CMA_Marksman: I_Soldier_M_F
  {
    faction="AET_F_catapult_I_CMA_nomas";
    editorCategory="AET_CMA_Category";
    side=2;
    displayName="Marksman";
    uniformClass="AET_F_catapult_I_CMA_U_combatUniform_shortsleeve_woodland";
    weapons[]={"OPTRE_Binoculars","AET_F_catapult_I_CMA_OPTRE_M392_DMR_OPTRE_M392_Scope","AET_F_catapult_I_CMA_OPTRE_M6D_Jungle","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","AET_F_catapult_I_CMA_OPTRE_M392_DMR_OPTRE_M392_Scope","AET_F_catapult_I_CMA_OPTRE_M6D_Jungle","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag"};
    respawnMagazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","TCF_CGC_CH230_Bull_CAM","TCF_ACTV_CGC_VEST","TCF_UP_Shemagheye","OPTRE_NVG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","TCF_CGC_CH230_Bull_CAM","TCF_ACTV_CGC_VEST","TCF_UP_Shemagheye","OPTRE_NVG"};
    backpack="";
  };

  class AET_F_catapult_I_CMA_Anti_Tank_Specialist: I_Soldier_AT_F
  {
    faction="AET_F_catapult_I_CMA_nomas";
    editorCategory="AET_CMA_Category";
    side=2;
    displayName="Anti Tank Specialist";
    uniformClass="AET_F_catapult_I_CMA_U_combatUniform_woodland";
    weapons[]={"OPTRE_Binoculars","AET_F_catapult_I_CMA_OPTRE_MA5A","AET_F_catapult_I_CMA_OPTRE_M44_Lykoi_Semi_Disposable_AT_Des","AET_F_catapult_I_CMA_OPTRE_M6D_Jungle","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","AET_F_catapult_I_CMA_OPTRE_MA5A","AET_F_catapult_I_CMA_OPTRE_M44_Lykoi_Semi_Disposable_AT_Des","AET_F_catapult_I_CMA_OPTRE_M6D_Jungle","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M44_Lykoi_HEAT_mag"};
    respawnMagazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M44_Lykoi_HEAT_mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","TCF_CGC_CH230_CIG_CH","TCF_ACTV_CGC_VEST","TCF_UP_Shemagheye","OPTRE_NVG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","TCF_CGC_CH230_CIG_CH","TCF_ACTV_CGC_VEST","TCF_UP_Shemagheye","OPTRE_NVG"};
    backpack="";
  };

  class AET_F_catapult_I_CMA_Anti_Air_Specialist: I_Soldier_AA_F
  {
    faction="AET_F_catapult_I_CMA_nomas";
    editorCategory="AET_CMA_Category";
    side=2;
    displayName="Anti Air Specialist";
    uniformClass="AET_F_catapult_I_CMA_U_combatUniform_woodland";
    weapons[]={"OPTRE_Binoculars","AET_F_catapult_I_CMA_OPTRE_MA5A","AET_F_catapult_I_CMA_OPTRE_M44_Lykoi_Semi_Disposable_AT_Des","AET_F_catapult_I_CMA_OPTRE_M6D_Jungle","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","AET_F_catapult_I_CMA_OPTRE_MA5A","AET_F_catapult_I_CMA_OPTRE_M44_Lykoi_Semi_Disposable_AT_Des","AET_F_catapult_I_CMA_OPTRE_M6D_Jungle","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M44_Lykoi_AA_mag"};
    respawnMagazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M44_Lykoi_AA_mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","TCF_CGC_CH230_CIG_CH","TCF_ACTV_CGC_VEST","TCF_UP_Shemagheye","OPTRE_NVG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","TCF_CGC_CH230_CIG_CH","TCF_ACTV_CGC_VEST","TCF_UP_Shemagheye","OPTRE_NVG"};
    backpack="";
  };

  class AET_F_catapult_I_CMA_Rifleman: I_soldier_F
  {
    faction="AET_F_catapult_I_CMA_nomas";
    editorCategory="AET_CMA_Category";
    side=2;
    displayName="Rifleman";
    uniformClass="AET_F_catapult_I_CMA_U_combatUniform_woodland";
    weapons[]={"OPTRE_Binoculars","AET_F_catapult_I_CMA_OPTRE_MA5A","AET_F_catapult_I_CMA_OPTRE_M6D_Jungle","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","AET_F_catapult_I_CMA_OPTRE_MA5A","AET_F_catapult_I_CMA_OPTRE_M6D_Jungle","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag"};
    respawnMagazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","TCF_CGC_CH230","TCF_ACTV_CGC_VEST","TCF_UP_Shemagheye","OPTRE_NVG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","TCF_CGC_CH230","TCF_ACTV_CGC_VEST","TCF_UP_Shemagheye","OPTRE_NVG"};
    backpack="";
  };

  class AET_F_catapult_I_CMA_Officer: I_officer_F
  {
    faction="AET_F_catapult_I_CMA_nomas";
    editorCategory="AET_CMA_Category";
    side=2;
    displayName="Officer";
    uniformClass="AET_F_catapult_I_CMA_U_combatUniform_woodland";
    weapons[]={"OPTRE_Binoculars","AET_F_catapult_I_CMA_OPTRE_MA5A","AET_F_catapult_I_CMA_OPTRE_M6D_Jungle","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","AET_F_catapult_I_CMA_OPTRE_MA5A","AET_F_catapult_I_CMA_OPTRE_M6D_Jungle","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag"};
    respawnMagazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","AET_F_catapult_I_CMA_Officer_Beret","TCF_ACTV_CGC_VEST_UP","TCF_UP_Shemagh","OPTRE_NVG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG","OPTRE_Binoculars","AET_F_catapult_I_CMA_Officer_Beret","TCF_ACTV_CGC_VEST_UP","TCF_UP_Shemagh","OPTRE_NVG"};
    backpack="";
  };

  class AET_F_catapult_I_CMA_Sniper: I_Sniper_F
  {
    faction="AET_F_catapult_I_CMA_nomas";
    editorCategory="AET_CMA_Category";
    side=2;
    displayName="Sniper";
    uniformClass="AET_F_catapult_I_CMA_U_combatUniform_woodland";
    weapons[]={"OPTRE_Smartfinder","AET_F_catapult_I_CMA_OPTRE_SRS99C","AET_F_catapult_I_CMA_OPTRE_M6D_Jungle","Put","Throw"};
    respawnWeapons[]={"OPTRE_Smartfinder","AET_F_catapult_I_CMA_OPTRE_SRS99C","AET_F_catapult_I_CMA_OPTRE_M6D_Jungle","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","ACE_RangeCard","ACE_Kestrel4500"};
    respawnItems[]={"FirstAidKit","FirstAidKit","ACE_RangeCard","ACE_Kestrel4500"};
    magazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag"};
    respawnMagazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG","OPTRE_Smartfinder","TCF_CGC_CH230_CAM","TCF_ACTV_CGC_VEST","TCF_UP_Shemagheye","OPTRE_NVG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG","OPTRE_Smartfinder","TCF_CGC_CH230_CAM","TCF_ACTV_CGC_VEST","TCF_UP_Shemagheye","OPTRE_NVG"};
    backpack="";
  };

  class AET_F_catapult_I_CMA_Spotter: I_Spotter_F
  {
    faction="AET_F_catapult_I_CMA_nomas";
    editorCategory="AET_CMA_Category";
    side=2;
    displayName="Spotter";
    uniformClass="AET_F_catapult_I_CMA_U_combatUniform_shortsleeve_woodland";
    weapons[]={"OPTRE_Smartfinder","AET_F_catapult_I_CMA_OPTRE_M392_DMR_OPTRE_M392_Scope","AET_F_catapult_I_CMA_OPTRE_M6D_Jungle","Put","Throw"};
    respawnWeapons[]={"OPTRE_Smartfinder","AET_F_catapult_I_CMA_OPTRE_M392_DMR_OPTRE_M392_Scope","AET_F_catapult_I_CMA_OPTRE_M6D_Jungle","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","ACE_RangeCard","ACE_Kestrel4500"};
    respawnItems[]={"FirstAidKit","FirstAidKit","ACE_RangeCard","ACE_Kestrel4500"};
    magazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag"};
    respawnMagazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG","OPTRE_Smartfinder","TCF_CGC_CH230_Bull_CAM","TCF_ACTV_CGC_VEST","TCF_UP_Shemagheye","OPTRE_NVG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG","OPTRE_Smartfinder","TCF_CGC_CH230_Bull_CAM","TCF_ACTV_CGC_VEST","TCF_UP_Shemagheye","OPTRE_NVG"};
    backpack="";
  };

  class AET_F_catapult_I_CMA_M121_AT_Iguana: TCF_Meerkat_CGC_AT
  {
    faction="AET_F_catapult_I_CMA_nomas";
    editorCategory="AET_CMA_Category";
    side=2;
    displayName="M121 AT Iguana";
    hiddenSelectionsTextures[]={"tcf_indfor\colonial military authority\vehicles\cgc_lsv.paa","a3\soft_f_exp\lsv_02\data\csat_lsv_02_black_co.paa","a3\soft_f_exp\lsv_02\data\csat_lsv_03_black_co.paa"};
    crew="AET_F_catapult_I_CMA_Rifleman";
    typicalCargo[]={"AET_F_catapult_I_CMA_Rifleman"};
  };

  class AET_F_catapult_I_CMA_M121_Iguana: TCF_Meerkat_CGC_U
  {
    faction="AET_F_catapult_I_CMA_nomas";
    editorCategory="AET_CMA_Category";
    side=2;
    displayName="M121 Iguana";
    hiddenSelectionsTextures[]={"tcf_indfor\colonial military authority\vehicles\cgc_lsv.paa","a3\soft_f_exp\lsv_02\data\csat_lsv_02_black_co.paa","a3\soft_f_exp\lsv_02\data\csat_lsv_03_black_co.paa"};
    crew="AET_F_catapult_I_CMA_Rifleman";
    typicalCargo[]={"AET_F_catapult_I_CMA_Rifleman"};
  };

  class AET_F_catapult_I_CMA_M121_MG_Iguana: TCF_Meerkat_CGC_HMG
  {
    faction="AET_F_catapult_I_CMA_nomas";
    editorCategory="AET_CMA_Category";
    side=2;
    displayName="M121 MG Iguana";
    hiddenSelectionsTextures[]={"tcf_indfor\colonial military authority\vehicles\cgc_lsv.paa","a3\soft_f_exp\lsv_02\data\csat_lsv_02_black_co.paa","a3\soft_f_exp\lsv_02\data\csat_lsv_03_black_co.paa"};
    crew="AET_F_catapult_I_CMA_Rifleman";
    typicalCargo[]={"AET_F_catapult_I_CMA_Rifleman"};
  };

  class AET_F_catapult_I_CMA_D77_TC_Pelican: TCF_D77_U_CGC
  {
    faction="AET_F_catapult_I_CMA_nomas";
    editorCategory="AET_CMA_Category";
    side=2;
    displayName="D77 TC Pelican";
    hiddenSelectionsTextures[]={"tcf_indfor\colonial military authority\vehicles\d77.paa","","","","",""};
    crew="AET_F_catapult_I_CMA_Helicopter_Pilot";
    typicalCargo[]={"AET_F_catapult_I_CMA_Helicopter_Pilot"};
  };

  class AET_F_catapult_I_CMA_D77_TC_AV_Pelican: TCF_D77_A_CGC
  {
    faction="AET_F_catapult_I_CMA_nomas";
    editorCategory="AET_CMA_Category";
    side=2;
    displayName="D77 TC AV Pelican";
    hiddenSelectionsTextures[]={"tcf_indfor\colonial military authority\vehicles\d77.paa","","","",""};
    crew="AET_F_catapult_I_CMA_Helicopter_Pilot";
    typicalCargo[]={"AET_F_catapult_I_CMA_Helicopter_Pilot"};
  };

  class AET_F_catapult_I_CMA_UH_101_Eagle: TCF_UH101_CGC
  {
    faction="AET_F_catapult_I_CMA_nomas";
    editorCategory="AET_CMA_Category";
    side=2;
    displayName="UH 101 Eagle";
    hiddenSelectionsTextures[]={"tcf_indfor\colonial military authority\vehicles\uh101.paa"};
    crew="AET_F_catapult_I_CMA_Helicopter_Pilot";
    typicalCargo[]={"AET_F_catapult_I_CMA_Helicopter_Pilot"};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
	class TransportBackpacks {};
  };

  class AET_F_catapult_I_CMA_ARV_13_Ferret: TCF_ARV_AR_WDL
  {
    faction="AET_F_catapult_I_CMA_nomas";
    editorCategory="AET_CMA_Category";
    side=2;
    displayName="ARV 13 Ferret";
    hiddenSelectionsTextures[]={"z\aet_f\addons\catapult_I_CMA_nomas\textures\arv_cma.paa","z\aet_f\addons\catapult_I_CMA_nomas\textures\arv_mg.paa"};
    crew="AET_F_catapult_I_CMA_Rifleman";
    typicalCargo[]={"AET_F_catapult_I_CMA_Rifleman"};
	textureList[]={"AET_F_catapult_I_CMA_ARV_13_Ferret_Texture", 1};
	class textureSources
	{
		// This texture source will be available for every defined factions
		class AET_F_catapult_I_CMA_ARV_13_Ferret_Texture
		{
			// Display name of the texture
			displayName = "Colonial Military Authority";
			// Author of the texture
			author = "OPCAN";
			// Paths to the texture files, in the same order as the hidden selections
			textures[] = {"z\aet_f\addons\catapult_I_CMA_nomas\textures\arv_cma.paa","z\aet_f\addons\catapult_I_CMA_nomas\textures\arv_mg.paa"};
			// This source should be available for the following factions
			factions[] = {};
		};
	};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
	class TransportBackpacks {};
  };

  class AET_F_catapult_I_CMA_ARV_13_Ferret_M247H: TCF_ARV_AR_HMG_WDL
  {
    faction="AET_F_catapult_I_CMA_nomas";
    editorCategory="AET_CMA_Category";
    side=2;
    displayName="ARV 13 Ferret M247H";
    hiddenSelectionsTextures[]={"z\aet_f\addons\catapult_I_CMA_nomas\textures\arv_cma.paa","z\aet_f\addons\catapult_I_CMA_nomas\textures\arv_mg.paa"};
    crew="AET_F_catapult_I_CMA_Rifleman";
    typicalCargo[]={"AET_F_catapult_I_CMA_Rifleman"};
	textureList[]={"AET_F_catapult_I_CMA_ARV_13_Ferret_Texture", 1};
	class textureSources
	{
		// This texture source will be available for every defined factions
		class AET_F_catapult_I_CMA_ARV_13_Ferret_Texture
		{
			// Display name of the texture
			displayName = "Colonial Military Authority";
			// Author of the texture
			author = "OPCAN";
			// Paths to the texture files, in the same order as the hidden selections
			textures[] = {"z\aet_f\addons\catapult_I_CMA_nomas\textures\arv_cma.paa","z\aet_f\addons\catapult_I_CMA_nomas\textures\arv_mg.paa"};
			// This source should be available for the following factions
			factions[] = {};
		};
	};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
	class TransportBackpacks {};
  };

  class AET_F_catapult_I_CMA_ARV_13_Ferret_MG460_AGL: TCF_ARV_AR_GMG_WDL
  {
    faction="AET_F_catapult_I_CMA_nomas";
    editorCategory="AET_CMA_Category";
    side=2;
    displayName="ARV 13 Ferret MG460 AGL";
    hiddenSelectionsTextures[]={"z\aet_f\addons\catapult_I_CMA_nomas\textures\arv_cma.paa","z\aet_f\addons\catapult_I_CMA_nomas\textures\arv_mg.paa"};
    crew="AET_F_catapult_I_CMA_Rifleman";
    typicalCargo[]={"AET_F_catapult_I_CMA_Rifleman"};
	textureList[]={"AET_F_catapult_I_CMA_ARV_13_Ferret_Texture", 1};
	class textureSources
	{
		// This texture source will be available for every defined factions
		class AET_F_catapult_I_CMA_ARV_13_Ferret_Texture
		{
			// Display name of the texture
			displayName = "Colonial Military Authority";
			// Author of the texture
			author = "OPCAN";
			// Paths to the texture files, in the same order as the hidden selections
			textures[] = {"z\aet_f\addons\catapult_I_CMA_nomas\textures\arv_cma.paa","z\aet_f\addons\catapult_I_CMA_nomas\textures\arv_mg.paa"};
			// This source should be available for the following factions
			factions[] = {};
		};
	};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
	class TransportBackpacks {};
  };

  class AET_F_catapult_I_CMA_Squad_Leader_pack: TCF_RADIO_WDL
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class AET_F_catapult_I_CMA_Medic_pack: B_Kitbag_rgr
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
    class AET_F_catapult_I_CMA_F
    {
      name="CMA - Catapult";

      class Infantry
      {
        name="Infantry";

        class AET_F_catapult_I_CMA_R_Squad
        {
          name="Squad";
          faction="AET_F_catapult_I_CMA_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_Team_Leader";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_Medic";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_Anti_Tank_Specialist";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_Marksman";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_Rifleman";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit7
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_Rifleman";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
        };
        class AET_F_catapult_I_CMA_R_Fire_Team
        {
          name="Fire Team";
          faction="AET_F_catapult_I_CMA_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_Rifleman";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_Rifleman";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_Rifleman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class AET_F_catapult_I_CMA_R_Support_Team
        {
          name="Support Team";
          faction="AET_F_catapult_I_CMA_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_Marksman";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_Rifleman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class AET_F_catapult_I_CMA_R_Patrol
        {
          name="Patrol";
          faction="AET_F_catapult_I_CMA_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_Rifleman";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_Rifleman";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
        };
        class AET_F_catapult_I_CMA_R_Sniper_Team
        {
          name="Sniper Team";
          faction="AET_F_catapult_I_CMA_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_Sniper";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_Spotter";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
        };
      };
      class Motorized
      {
        name="Motorized";

        class AET_F_catapult_I_CMA_R_ARV_13_Ferret
        {
          name="ARV 13 Ferret";
          faction="AET_F_catapult_I_CMA_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_ARV_13_Ferret";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_Sniper";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_Spotter";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
        };
        class AET_F_catapult_I_CMA_R_M121_AT_Iguana
        {
          name="M121 AT Iguana";
          faction="AET_F_catapult_I_CMA_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_M121_AT_Iguana";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_Team_Leader";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_Medic";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
          class Unit4
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_Anti_Tank_Specialist";
            rank="PRIVATE";
            position[]={0,-60,0};
          };
          class Unit5
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_Rifleman";
            rank="PRIVATE";
            position[]={0,-75,0};
          };
        };
        class AET_F_catapult_I_CMA_R_M121_Iguana
        {
          name="M121 Iguana";
          faction="AET_F_catapult_I_CMA_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_M121_Iguana";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_Team_Leader";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_Medic";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
          class Unit4
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_Anti_Tank_Specialist";
            rank="PRIVATE";
            position[]={0,-60,0};
          };
          class Unit5
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_Marksman";
            rank="PRIVATE";
            position[]={0,-75,0};
          };
          class Unit6
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_Rifleman";
            rank="PRIVATE";
            position[]={0,-90,0};
          };
        };
        class AET_F_catapult_I_CMA_R_M121_MG_Iguana
        {
          name="M121 MG Iguana";
          faction="AET_F_catapult_I_CMA_nomas";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_M121_MG_Iguana";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_Team_Leader";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_Medic";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
          class Unit4
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_Anti_Tank_Specialist";
            rank="PRIVATE";
            position[]={0,-60,0};
          };
          class Unit5
          {
            side=2;
            vehicle="AET_F_catapult_I_CMA_Rifleman";
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
