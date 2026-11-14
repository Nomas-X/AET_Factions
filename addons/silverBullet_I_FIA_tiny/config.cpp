class cfgPatches
{
  class AET_F_silverBullet_I_FIA_tiny
  {
	skipWhenMissingDependencies = 1;
    units[]={};
    weapons[]={"AET_F_silverBullet_I_FIA_U_guerillaApparel_yepperzz"};
    requiredVersion=0.1;
    requiredAddons[]={"A3_Weapons_F_Items","A3_Weapons_F"};
  };
};

class cfgWeapons
{
	class UniformItem;
	class U_BG_Guerrilla_6_1;
	
	class AET_F_silverBullet_I_FIA_U_guerillaApparel_yepperzz : U_BG_Guerrilla_6_1
	{
		scope=2;
		scopeArsenal=2;
		weaponPoolAvailable=1;
		displayName = "Guerilla Apparel [Yepperzz]";
		class itemInfo : UniformItem
		{
			uniformClass= "AET_F_silverBullet_I_FIA_guerillaApparel_yepperzz";
			containerClass="Supply30";
			mass=30;
			modelSides[]={6};
		};
	};

};

class cfgVehicles
{
	class B_G_Soldier_LAT_F;

	class AET_F_silverBullet_I_FIA_guerillaApparel_yepperzz : B_G_Soldier_LAT_F
	{
		scope = 1;
		uniformClass = "AET_F_silverBullet_I_FIA_U_guerillaApparel_yepperzz";
		hiddenSelectionsTextures[] = {
			"z\aet_f\addons\silverBullet_I_FIA_tiny\data\fia_yepperzz_u_infantry_uniform_co.paa"
		};
		modelSides[]={6};
	};

};

//////////////// Paste cfgGroups after this line //////////////// 
