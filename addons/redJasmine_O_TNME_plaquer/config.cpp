class cfgPatches
{
  class AET_F_redJasmine_O_TNME_plaquer
  {
	skipWhenMissingDependencies = 1;
    units[]={"AET_F_redJasmine_O_TNME_Squad_Leader","AET_F_redJasmine_O_TNME_Machine_Gunner_RPD","AET_F_redJasmine_O_TNME_Rifleman","AET_F_redJasmine_O_TNME_Anti_Tank_Specialist","AET_F_redJasmine_O_TNME_Grenadier","AET_F_redJasmine_O_TNME_Machine_Gunner_DP27","AET_F_redJasmine_O_TNME_Medic","AET_F_redJasmine_O_TNME_Crewman","AET_F_redJasmine_O_TNME_Sapper","AET_F_redJasmine_O_TNME_Marksman","AET_F_redJasmine_O_TNME_Anti_Air_Specialist","AET_F_redJasmine_O_TNME_Helicopter_Pilot","AET_F_redJasmine_O_TNME_Pilot","AET_F_redJasmine_O_TNME_F_4B_Phantom_II_CAS","AET_F_redJasmine_O_TNME_F_4B_Phantom_II_CAP","AET_F_redJasmine_O_TNME_HH_34J_Seahorse_M60_x2","AET_F_redJasmine_O_TNME_ACH_47A_Guns_A_Go_Go_APERS","AET_F_redJasmine_O_TNME_LVTE_1","AET_F_redJasmine_O_TNME_BTR_50PK_Transport","AET_F_redJasmine_O_TNME_Z_157_Transport_Covered","AET_F_redJasmine_O_TNME_Type_56_75mm_Recoilless_Rifle","AET_F_redJasmine_O_TNME_D44_85mm_Anti_Tank_Gun","AET_F_redJasmine_O_TNME_M274_Mule_M40A1","AET_F_redJasmine_O_TNME_M274_Mule_M134","AET_F_redJasmine_O_TNME_M54_Gun_Truck_3x_M2HB","AET_F_redJasmine_O_TNME_SGM_Low_Shield","AET_F_redJasmine_O_TNME_M1919A4_30cal_High","AET_F_redJasmine_O_TNME_ZPU_4_145mm_AA_gun","AET_F_redJasmine_O_TNME_M1919A4_30cal_Low","AET_F_redJasmine_O_TNME_PT_76B_Tank","AET_F_redJasmine_O_TNME_T_54B_Tank","AET_F_redJasmine_O_TNME_M132A1_Flamethrower","AET_F_redJasmine_O_TNME_M113A1_ACAV_M1919","AET_F_redJasmine_O_TNME_ACH_47A_Guns_A_Go_Go_Cannon"};
    weapons[]={"AET_F_redJasmine_O_TNME_vn_type56","AET_F_redJasmine_O_TNME_vn_m1895","AET_F_redJasmine_O_TNME_vn_rpd","AET_F_redJasmine_O_TNME_vn_rpg7","AET_F_redJasmine_O_TNME_vn_sks_gl","AET_F_redJasmine_O_TNME_vn_dp28","AET_F_redJasmine_O_TNME_vn_type64_smg","AET_F_redJasmine_O_TNME_vn_svd_vn_o_4x_svd","AET_F_redJasmine_O_TNME_vn_sa7b","AET_F_redJasmine_O_TNME_vn_m712","AET_F_redJasmine_O_TNME_U_macv_04_19","AET_F_redJasmine_O_TNME_U_k2b_01_04"};
    requiredVersion=0.1;
    requiredAddons[]={"weapons_f_vietnam_c","characters_f_vietnam_05_c","characters_f_vietnam_c","characters_f_vietnam_03_c","ace_medical_treatment","weapons_f_vietnam_04_c","characters_f_vietnam_04_c","armor_f_vietnam_06_c","air_f_vietnam_c","air_f_vietnam_03_c","air_f_vietnam_05_c","armor_f_vietnam_02_c","armor_f_vietnam_03_c","armor_f_vietnam_06_c","wheeled_f_vietnam_c","wheeled_f_vietnam_04_c","static_f_vietnam_c","static_f_vietnam_03_c","static_f_vietnam_04_c"};
  };
};

class cfgFactionClasses
{
  class AET_F_redJasmine_O_TNME_plaquer
  {
    icon="";
    displayName="TNME - Red Jasmine";
    side=0;
    priority=1;
  };
};


class cfgWeapons
{
	class UniformItem;
	class vnx_b_uniform_macv_04_19;
	class vn_b_uniform_k2b_01_04;
	class AET_F_redJasmine_O_TNME_U_macv_04_19 : vnx_b_uniform_macv_04_19
	{
		scope=2;
		scopeArsenal=2;
		weaponPoolAvailable=1;
		displayName = "BDU MACV 4 (Thai Tiger)";
		class itemInfo : UniformItem
		{
			uniformClass= "AET_F_redJasmine_O_TNME_macv_04_19";
			containerClass="Supply70";
			mass=70;
			modelSides[]={6};
		};	
	};
	class AET_F_redJasmine_O_TNME_U_k2b_01_04 : vn_b_uniform_k2b_01_04
	{
		scope=2;
		scopeArsenal=2;
		weaponPoolAvailable=1;
		displayName = "K2B USMC Jet Crew (Tiger)";
		class itemInfo : UniformItem
		{
			uniformClass= "AET_F_redJasmine_O_TNME_k2b_01_04";
			containerClass="Supply70";
			mass=70;
			modelSides[]={6};
		};	
	};

  class vn_type56;
  class vn_m1895;
  class vn_rpd;
  class vn_rpg7;
  class vn_sks_gl;
  class vn_dp28;
  class vn_type64_smg;
  class vn_svd;
  class vn_sa7b;
  class vn_m712;

  class AET_F_redJasmine_O_TNME_vn_type56: vn_type56
  {
    displayName="Type 56 Assault Rifle";
    scope=1;
    class LinkedItems
    {
    };
  };

  class AET_F_redJasmine_O_TNME_vn_m1895: vn_m1895
  {
    displayName="M1895";
    scope=1;
    class LinkedItems
    {
    };
  };

  class AET_F_redJasmine_O_TNME_vn_rpd: vn_rpd
  {
    displayName="RPD";
    scope=1;
    class LinkedItems
    {
    };
  };

  class AET_F_redJasmine_O_TNME_vn_rpg7: vn_rpg7
  {
    displayName="B41";
    scope=1;
    class LinkedItems
    {
    };
  };

  class AET_F_redJasmine_O_TNME_vn_sks_gl: vn_sks_gl
  {
    displayName="SKS Rifle (22mm GL)";
    scope=1;
    class LinkedItems
    {
    };
  };

  class AET_F_redJasmine_O_TNME_vn_dp28: vn_dp28
  {
    displayName="DP-27";
    scope=1;
    class LinkedItems
    {
    };
  };

  class AET_F_redJasmine_O_TNME_vn_type64_smg: vn_type64_smg
  {
    displayName="Type 64 SMG";
    scope=1;
    class LinkedItems
    {
    };
  };

  class AET_F_redJasmine_O_TNME_vn_svd_vn_o_4x_svd: vn_svd
  {
    displayName="SVD Rifle";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="vn_o_4x_svd";
      };
    };
  };

  class AET_F_redJasmine_O_TNME_vn_sa7b: vn_sa7b
  {
    displayName="9K32 Strela-2M";
    scope=1;
    class LinkedItems
    {
    };
  };

  class AET_F_redJasmine_O_TNME_vn_m712: vn_m712
  {
    displayName="M712";
    scope=1;
    class LinkedItems
    {
    };
  };

};

class cfgVehicles
{
  class vnx_b_men_usaf_07;
  class vn_b_men_jetpilot_11;
  class AET_F_redJasmine_O_TNME_macv_04_19 : vnx_b_men_usaf_07
  {
	scope = 1;
	uniformClass = "AET_F_redJasmine_O_TNME_U_macv_04_19";
	hiddenSelections[] =
	{
		"camo1",
		"camo2",
		"insignia",
		"d_pocket_l",
		"d_pocket_r"
	};
	hiddenSelectionsTextures[] =
	{
		"\vnx\characters_f_vietnam_05\blufor\uniforms\data\vnx_b_uniform_shirt_19_co.paa","\vnx\characters_f_vietnam_05\blufor\uniforms\data\vnx_b_uniform_pants_19_co.paa"
	};
	modelSides[]={6};
  };
  class AET_F_redJasmine_O_TNME_k2b_01_04 : vn_b_men_jetpilot_11
  {
	scope = 1;
	uniformClass = "AET_F_redJasmine_O_TNME_U_k2b_01_04";
	hiddenSelections[] =
	{
		"camo1",
		"camo2",
		"insignia",
		"d_pocket_l",
		"d_pocket_r"
	};
	hiddenSelectionsTextures[] =
	{
		"\vn\characters_f_vietnam_03\BLUFOR\uniforms\data\vn_b_uniform_k2b_01_04_co.paa","\vn\characters_f_vietnam\BLUFOR\uniforms\data\vn_b_uniform_k2b_02_co.paa"
	};
	modelSides[]={6};
  };
  
  class vn_o_men_pl_21;
  class vn_o_pack_04;
  class vn_o_men_pl_11;
  class vn_o_men_pl_06;
  class vn_o_pack_01;
  class vn_o_men_pl_14;
  class vn_o_pack_03;
  class vn_o_men_pl_07;
  class vn_o_men_pl_25;
  class vn_o_men_pl_28;
  class vn_o_pack_02;
  class vn_o_men_pl_18;
  class vn_o_men_pl_29;
  class vn_o_pack_05;
  class vn_o_men_pl_31;
  class vn_o_men_pl_26;
  class vn_o_men_aircrew_01;
  class vn_o_men_aircrew_07;

  class vn_b_air_f4b_navy_cas;
  class AET_F_redJasmine_O_TNME_F_4B_Phantom_II_CAS_base_1 : vn_b_air_f4b_navy_cas
  {
	scope = 0;
	class EventHandlers;
	class Turrets;
  };
  class AET_F_redJasmine_O_TNME_F_4B_Phantom_II_CAS_base_2 : AET_F_redJasmine_O_TNME_F_4B_Phantom_II_CAS_base_1
  {
	scope = 0;
	class EventHandlers : EventHandlers
	{
		class vn;
	};
	class Turrets : Turrets
	{
		class MainTurret;
	};	
  };

  class vn_b_air_f4b_navy_cap;
  class AET_F_redJasmine_O_TNME_F_4B_Phantom_II_CAP_base_1 : vn_b_air_f4b_navy_cap
  {
	class EventHandlers;
	class Turrets;
  };
  class AET_F_redJasmine_O_TNME_F_4B_Phantom_II_CAP_base_2 : AET_F_redJasmine_O_TNME_F_4B_Phantom_II_CAP_base_1
  {
	class EventHandlers : EventHandlers
	{
		class vn;
	};
	class Turrets : Turrets
	{
		class MainTurret;
	};	
  };

  class vnx_b_air_hh34_03_01;
  class AET_F_redJasmine_O_TNME_HH_34J_Seahorse_M60_x2_base_1 : vnx_b_air_hh34_03_01
  {
	scope = 0;
	class Turrets;
  };
  class AET_F_redJasmine_O_TNME_HH_34J_Seahorse_M60_x2_base_2 : AET_F_redJasmine_O_TNME_HH_34J_Seahorse_M60_x2_base_1
  {
	class Turrets : Turrets
	{
		class CopilotTurret;
		class MainTurret;
		class WindowTurret;
	};
  };

  class vn_b_air_ach47_04_01;
  class AET_F_redJasmine_O_TNME_ACH_47A_Guns_A_Go_Go_APERS_base_1 : vn_b_air_ach47_04_01
  {
	scope = 0;
	class Turrets;
  };
  class AET_F_redJasmine_O_TNME_ACH_47A_Guns_A_Go_Go_APERS_base_2 : AET_F_redJasmine_O_TNME_ACH_47A_Guns_A_Go_Go_APERS_base_1
  {
	class Turrets : Turrets
	{
		class copilotTurret;
		class mg1_turret;
		class mg2_turret;
		class mg3_turret;
		class mg4_turret;
		class mg5_turret;
	};
  };

  class vnx_b_armor_lvte1_01_usmc;
  class AET_F_redJasmine_O_TNME_LVTE_1_base_1 : vnx_b_armor_lvte1_01_usmc
  {
    scope = 0;
    class Turrets;
  };
  class AET_F_redJasmine_O_TNME_LVTE_1_base_2 : AET_F_redJasmine_O_TNME_LVTE_1_base_1
  {
    class EventHandlers;
    class Turrets : Turrets
    {
        class CommanderTurret;
        class mg5_turret;
    };
  };
  
  class vn_o_armor_btr50pk_01_nva65;
  class AET_F_redJasmine_O_TNME_BTR_50PK_Transport_base_1 : vn_o_armor_btr50pk_01_nva65
  {
	scope = 1;
	class Turrets;
  };
  class AET_F_redJasmine_O_TNME_BTR_50PK_Transport_base_2 : AET_F_redJasmine_O_TNME_BTR_50PK_Transport_base_1
  {
	class EventHandlers;
	class Turrets : Turrets
	{
		class commanderTurret;
		class mg1_turret;
	};
  };

  class vn_o_wheeled_z157_02_nva65;
  class AET_F_redJasmine_O_TNME_Z_157_Transport_Covered_base_1 : vn_o_wheeled_z157_02_nva65
  {
	scope = 0;
	class Turrets;
  };
  class AET_F_redJasmine_O_TNME_Z_157_Transport_Covered_base_2 : AET_F_redJasmine_O_TNME_Z_157_Transport_Covered_base_1
  {
	class Turrets : Turrets
	{
		class Codriver;
	};
  };

  class vn_o_kr_static_type56rr;
  class vn_o_pl_static_d44;

  class vn_b_wheeled_m274_mg_02_01;
  class AET_F_redJasmine_O_TNME_M274_Mule_M40A1_base_1 : vn_b_wheeled_m274_mg_02_01
  {
	scope = 0;
	class Turrets;
  };
  class AET_F_redJasmine_O_TNME_M274_Mule_M40A1_base_2 : AET_F_redJasmine_O_TNME_M274_Mule_M40A1_base_1
  {
	class EventHandlers;
	class Turrets : Turrets
	{
		class cargoTurret_1;
		class mg1_turret;
	};
  };

  class vn_b_wheeled_m274_mg_03_01;
  class AET_F_redJasmine_O_TNME_M274_Mule_M134_base_1 : vn_b_wheeled_m274_mg_03_01
  {
	scope = 0;
	class Turrets;
  };
  class AET_F_redJasmine_O_TNME_M274_Mule_M134_base_2 : AET_F_redJasmine_O_TNME_M274_Mule_M134_base_1
  {
	class EventHandlers;
	class Turrets : Turrets
	{
		class mg1_turret;
	};
  };

  class vn_b_wheeled_m54_mg_01;
  class AET_F_redJasmine_O_TNME_M54_Gun_Truck_3x_M2HB_base_1 : vn_b_wheeled_m54_mg_01
  {
	scope = 0;
	class Turrets;
  };
  class AET_F_redJasmine_O_TNME_M54_Gun_Truck_3x_M2HB_base_2 : AET_F_redJasmine_O_TNME_M54_Gun_Truck_3x_M2HB_base_1
  {
	class Turrets : Turrets
	{
		class codriver_ffv;
		class guntruck_front;
		class guntruck_left;
		class guntruck_rear;
		class guntruck_right;
		class mg1turret;
		class mg2turret;
		class mg3turret;
	};
  };

  class vn_o_kr_static_sgm_low_01;
  class vn_b_rok_army_static_m1919a4_high;
  class vn_o_nva_static_zpu4;
  class vn_b_rok_army_static_m1919a4_low;

  class vn_o_armor_pt76b_01;
  class AET_F_redJasmine_O_TNME_PT_76B_Tank_base_1 : vn_o_armor_pt76b_01
  {
	scope = 0;
	class Turrets;
  };
  class AET_F_redJasmine_O_TNME_PT_76B_Tank_base_2 : AET_F_redJasmine_O_TNME_PT_76B_Tank_base_1
  {
	class EventHandlers;
	class Turrets : Turrets
	{
		class loaderTurret;
		class MainTurret;
	};
  };

  class vn_o_armor_t54b_01;
  class AET_F_redJasmine_O_TNME_T_54B_Tank_base_1 : vn_o_armor_t54b_01
  {
	scope = 0;
	class Turrets;
  };
  class AET_F_redJasmine_O_TNME_T_54B_Tank_base_2 : AET_F_redJasmine_O_TNME_T_54B_Tank_base_1
  {
	class Turrets : Turrets
	{
		class MainTurret;
	};
  };
  class AET_F_redJasmine_O_TNME_T_54B_Tank_base_3 : AET_F_redJasmine_O_TNME_T_54B_Tank_base_2
  { 
	class Turrets : Turrets
	{
		class MainTurret : MainTurret
		{
			class Turrets;
		};
	};
  };
  class AET_F_redJasmine_O_TNME_T_54B_Tank_base_4 : AET_F_redJasmine_O_TNME_T_54B_Tank_base_3
  {
	class EventHandlers;
	class Turrets : Turrets
	{
		class MainTurret : MainTurret
		{
			class Turrets : Turrets
			{
			    class CommanderTurret;
    			class LoaderTurret;
			};
		};
	};
  };

  class vn_b_armor_m132_01;
  class AET_F_redJasmine_O_TNME_M132A1_Flamethrower_base_1 : vn_b_armor_m132_01
  {
	scope = 0;
	class Turrets;
  };
  class AET_F_redJasmine_O_TNME_M132A1_Flamethrower_base_2 : AET_F_redJasmine_O_TNME_M132A1_Flamethrower_base_1 
  {
	class EventHandlers;
	class Turrets : Turrets
	{
    	class mg1_turret;
	};
  };

  class vn_b_armor_m113_acav_02;
  class AET_F_redJasmine_O_TNME_M113A1_ACAV_M1919_base_1 : vn_b_armor_m113_acav_02
  {
	scope = 0;
	class Turrets;
  };
  class AET_F_redJasmine_O_TNME_M113A1_ACAV_M1919_base_2 : AET_F_redJasmine_O_TNME_M113A1_ACAV_M1919_base_1
  {
	class EventHandlers;
	class Turrets : Turrets
	{
		class mg1_turret;
		class mg2_turret;
		class mg3_turret;
	};
  };

  class vn_b_air_ach47_05_01;
  class AET_F_redJasmine_O_TNME_ACH_47A_Guns_A_Go_Go_Cannon_base_1 : vn_b_air_ach47_05_01
  {
	scope = 0;
	class Turrets;
  };
  class AET_F_redJasmine_O_TNME_ACH_47A_Guns_A_Go_Go_Cannon_base_2 : AET_F_redJasmine_O_TNME_ACH_47A_Guns_A_Go_Go_Cannon_base_1
  {
	class Turrets : Turrets
	{
		class copilotTurret;
		class mg1_turret;
		class mg2_turret;
		class mg3_turret;
		class mg4_turret;
		class mg5_turret;
	};
  };

  class AET_F_redJasmine_O_TNME_Squad_Leader: vn_o_men_pl_21
  {
    faction="AET_F_redJasmine_O_TNME_plaquer";
    editorSubcategory = "EdSubcat_Personnel";
    side=0;
    displayName="Squad Leader";
    uniformClass="AET_F_redJasmine_O_TNME_U_macv_04_19";
    weapons[]={"AET_F_redJasmine_O_TNME_vn_type56","AET_F_redJasmine_O_TNME_vn_m1895","Put","Throw"};
    respawnWeapons[]={"AET_F_redJasmine_O_TNME_vn_type56","AET_F_redJasmine_O_TNME_vn_m1895","Put","Throw"};
    items[]={"vn_o_item_firstaidkit","vn_o_item_firstaidkit","vn_o_item_firstaidkit"};
    respawnItems[]={"vn_o_item_firstaidkit","vn_o_item_firstaidkit","vn_o_item_firstaidkit"};
    magazines[]={"vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_m1895_mag","vn_m1895_mag","vn_rdg2_mag","vn_rgd33_grenade_mag","vn_t67_grenade_mag","vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_rdg2_mag","vn_rdg2_mag","vn_rgd5_grenade_mag","vn_rgd5_grenade_mag","vn_rkg3_grenade_mag","vn_rkg3_grenade_mag","vn_mine_satchel_remote_02_mag","vn_mine_punji_01_mag"};
    respawnMagazines[]={"vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_m1895_mag","vn_m1895_mag","vn_rdg2_mag","vn_rgd33_grenade_mag","vn_t67_grenade_mag","vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_rdg2_mag","vn_rdg2_mag","vn_rgd5_grenade_mag","vn_rgd5_grenade_mag","vn_rkg3_grenade_mag","vn_rkg3_grenade_mag","vn_mine_satchel_remote_02_mag","vn_mine_punji_01_mag"};
    linkedItems[]={"vn_o_item_map","vn_b_item_compass","vn_b_item_watch","vn_o_item_radio_m252","vn_i_beret_01_01","vn_o_vest_07"};
    respawnLinkedItems[]={"vn_o_item_map","vn_b_item_compass","vn_b_item_watch","vn_o_item_radio_m252","vn_i_beret_01_01","vn_o_vest_07"};
    backpack="AET_F_redJasmine_O_TNME_Squad_Leader_pack";
  };

  class AET_F_redJasmine_O_TNME_Machine_Gunner_RPD: vn_o_men_pl_11
  {
    faction="AET_F_redJasmine_O_TNME_plaquer";
    editorSubcategory = "EdSubcat_Personnel";
    side=0;
    displayName="Machine Gunner RPD";
    uniformClass="AET_F_redJasmine_O_TNME_U_macv_04_19";
    weapons[]={"AET_F_redJasmine_O_TNME_vn_rpd","AET_F_redJasmine_O_TNME_vn_m1895","Put","Throw"};
    respawnWeapons[]={"AET_F_redJasmine_O_TNME_vn_rpd","AET_F_redJasmine_O_TNME_vn_m1895","Put","Throw"};
    items[]={"vn_o_item_firstaidkit"};
    respawnItems[]={"vn_o_item_firstaidkit"};
    magazines[]={"vn_m1895_mag","vn_m1895_mag","vn_rdg2_mag","vn_rgd33_grenade_mag","vn_t67_grenade_mag","vn_rpd_125_mag","vn_rpd_125_mag","vn_rpd_125_mag","vn_rpd_125_mag","vn_rpd_125_mag","vn_rpd_125_mag"};
    respawnMagazines[]={"vn_m1895_mag","vn_m1895_mag","vn_rdg2_mag","vn_rgd33_grenade_mag","vn_t67_grenade_mag","vn_rpd_125_mag","vn_rpd_125_mag","vn_rpd_125_mag","vn_rpd_125_mag","vn_rpd_125_mag","vn_rpd_125_mag"};
    linkedItems[]={"vn_o_item_map","vn_b_item_compass","vn_b_item_watch","vn_o_item_radio_m252","vn_o_boonie_nva_02_02","vn_o_vest_03"};
    respawnLinkedItems[]={"vn_o_item_map","vn_b_item_compass","vn_b_item_watch","vn_o_item_radio_m252","vn_o_boonie_nva_02_02","vn_o_vest_03"};
    backpack="AET_F_redJasmine_O_TNME_Machine_Gunner_RPD_pack";
  };

  class AET_F_redJasmine_O_TNME_Rifleman: vn_o_men_pl_06
  {
    faction="AET_F_redJasmine_O_TNME_plaquer";
    editorSubcategory = "EdSubcat_Personnel";
    side=0;
    displayName="Rifleman";
    uniformClass="AET_F_redJasmine_O_TNME_U_macv_04_19";
    weapons[]={"AET_F_redJasmine_O_TNME_vn_type56","AET_F_redJasmine_O_TNME_vn_m1895","Put","Throw"};
    respawnWeapons[]={"AET_F_redJasmine_O_TNME_vn_type56","AET_F_redJasmine_O_TNME_vn_m1895","Put","Throw"};
    items[]={"vn_o_item_firstaidkit","vn_o_item_firstaidkit","vn_o_item_firstaidkit"};
    respawnItems[]={"vn_o_item_firstaidkit","vn_o_item_firstaidkit","vn_o_item_firstaidkit"};
    magazines[]={"vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_m1895_mag","vn_m1895_mag","vn_rdg2_mag","vn_rgd33_grenade_mag","vn_t67_grenade_mag","vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_rdg2_mag","vn_rdg2_mag","vn_rgd5_grenade_mag","vn_rgd5_grenade_mag","vn_rkg3_grenade_mag","vn_rkg3_grenade_mag"};
    respawnMagazines[]={"vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_m1895_mag","vn_m1895_mag","vn_rdg2_mag","vn_rgd33_grenade_mag","vn_t67_grenade_mag","vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_rdg2_mag","vn_rdg2_mag","vn_rgd5_grenade_mag","vn_rgd5_grenade_mag","vn_rkg3_grenade_mag","vn_rkg3_grenade_mag"};
    linkedItems[]={"vn_o_item_map","vn_b_item_compass","vn_b_item_watch","vn_o_item_radio_m252","vn_b_headband_03","vn_o_vest_01"};
    respawnLinkedItems[]={"vn_o_item_map","vn_b_item_compass","vn_b_item_watch","vn_o_item_radio_m252","vn_b_headband_03","vn_o_vest_01"};
    backpack="AET_F_redJasmine_O_TNME_Rifleman_pack";
  };

  class AET_F_redJasmine_O_TNME_Anti_Tank_Specialist: vn_o_men_pl_14
  {
    faction="AET_F_redJasmine_O_TNME_plaquer";
    editorSubcategory = "EdSubcat_Personnel";
    side=0;
    displayName="Anti Tank Specialist";
    uniformClass="AET_F_redJasmine_O_TNME_U_macv_04_19";
    weapons[]={"AET_F_redJasmine_O_TNME_vn_type56","AET_F_redJasmine_O_TNME_vn_rpg7","AET_F_redJasmine_O_TNME_vn_m1895","Put","Throw"};
    respawnWeapons[]={"AET_F_redJasmine_O_TNME_vn_type56","AET_F_redJasmine_O_TNME_vn_rpg7","AET_F_redJasmine_O_TNME_vn_m1895","Put","Throw"};
    items[]={"vn_o_item_firstaidkit","vn_o_item_firstaidkit","vn_o_item_firstaidkit"};
    respawnItems[]={"vn_o_item_firstaidkit","vn_o_item_firstaidkit","vn_o_item_firstaidkit"};
    magazines[]={"vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_m1895_mag","vn_m1895_mag","vn_rdg2_mag","vn_rgd33_grenade_mag","vn_t67_grenade_mag","vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_rdg2_mag","vn_rdg2_mag","vn_rgd5_grenade_mag","vn_rgd5_grenade_mag","vn_rkg3_grenade_mag","vn_rkg3_grenade_mag","vn_mine_satchel_remote_02_mag","vn_mine_punji_01_mag","vn_rpg7_mag"};
    respawnMagazines[]={"vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_m1895_mag","vn_m1895_mag","vn_rdg2_mag","vn_rgd33_grenade_mag","vn_t67_grenade_mag","vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_type56_t_mag","vn_rdg2_mag","vn_rdg2_mag","vn_rgd5_grenade_mag","vn_rgd5_grenade_mag","vn_rkg3_grenade_mag","vn_rkg3_grenade_mag","vn_mine_satchel_remote_02_mag","vn_mine_punji_01_mag","vn_rpg7_mag"};
    linkedItems[]={"vn_o_item_map","vn_b_item_compass","vn_b_item_watch","vn_o_item_radio_m252","vn_b_headband_03","vn_o_vest_01"};
    respawnLinkedItems[]={"vn_o_item_map","vn_b_item_compass","vn_b_item_watch","vn_o_item_radio_m252","vn_b_headband_03","vn_o_vest_01"};
    backpack="AET_F_redJasmine_O_TNME_Anti_Tank_Specialist_pack";
  };

  class AET_F_redJasmine_O_TNME_Grenadier: vn_o_men_pl_07
  {
    faction="AET_F_redJasmine_O_TNME_plaquer";
    editorSubcategory = "EdSubcat_Personnel";
    side=0;
    displayName="Grenadier";
    uniformClass="AET_F_redJasmine_O_TNME_U_macv_04_19";
    weapons[]={"AET_F_redJasmine_O_TNME_vn_sks_gl","AET_F_redJasmine_O_TNME_vn_m1895","Put","Throw"};
    respawnWeapons[]={"AET_F_redJasmine_O_TNME_vn_sks_gl","AET_F_redJasmine_O_TNME_vn_m1895","Put","Throw"};
    items[]={"vn_o_item_firstaidkit","vn_o_item_firstaidkit","vn_o_item_firstaidkit"};
    respawnItems[]={"vn_o_item_firstaidkit","vn_o_item_firstaidkit","vn_o_item_firstaidkit"};
    magazines[]={"vn_m1895_mag","vn_m1895_mag","vn_rdg2_mag","vn_rgd33_grenade_mag","vn_t67_grenade_mag","vn_22mm_m60_frag_mag","vn_22mm_m22_smoke_mag","vn_22mm_m22_smoke_mag","vn_sks_t_mag","vn_sks_t_mag","vn_sks_t_mag","vn_sks_t_mag","vn_sks_t_mag","vn_sks_t_mag","vn_rdg2_mag","vn_rdg2_mag","vn_rgd5_grenade_mag","vn_rgd5_grenade_mag","vn_rkg3_grenade_mag","vn_rkg3_grenade_mag"};
    respawnMagazines[]={"vn_m1895_mag","vn_m1895_mag","vn_rdg2_mag","vn_rgd33_grenade_mag","vn_t67_grenade_mag","vn_22mm_m60_frag_mag","vn_22mm_m22_smoke_mag","vn_22mm_m22_smoke_mag","vn_sks_t_mag","vn_sks_t_mag","vn_sks_t_mag","vn_sks_t_mag","vn_sks_t_mag","vn_sks_t_mag","vn_rdg2_mag","vn_rdg2_mag","vn_rgd5_grenade_mag","vn_rgd5_grenade_mag","vn_rkg3_grenade_mag","vn_rkg3_grenade_mag"};
    linkedItems[]={"vn_o_item_map","vn_b_item_compass","vn_b_item_watch","vn_o_item_radio_m252","vn_b_boonie_04_03","vn_o_vest_01"};
    respawnLinkedItems[]={"vn_o_item_map","vn_b_item_compass","vn_b_item_watch","vn_o_item_radio_m252","vn_b_boonie_04_03","vn_o_vest_01"};
    backpack="AET_F_redJasmine_O_TNME_Grenadier_pack";
  };

  class AET_F_redJasmine_O_TNME_Machine_Gunner_DP27: vn_o_men_pl_25
  {
    faction="AET_F_redJasmine_O_TNME_plaquer";
    editorSubcategory = "EdSubcat_Personnel";
    side=0;
    displayName="Machine Gunner DP27";
    uniformClass="AET_F_redJasmine_O_TNME_U_macv_04_19";
    weapons[]={"AET_F_redJasmine_O_TNME_vn_dp28","AET_F_redJasmine_O_TNME_vn_m1895","Put","Throw"};
    respawnWeapons[]={"AET_F_redJasmine_O_TNME_vn_dp28","AET_F_redJasmine_O_TNME_vn_m1895","Put","Throw"};
    items[]={"vn_o_item_firstaidkit"};
    respawnItems[]={"vn_o_item_firstaidkit"};
    magazines[]={"vn_m1895_mag","vn_m1895_mag","vn_rdg2_mag","vn_rgd33_grenade_mag","vn_t67_grenade_mag","vn_dp28_mag","vn_dp28_mag","vn_dp28_mag","vn_dp28_mag","vn_dp28_mag","vn_dp28_mag","vn_dp28_mag"};
    respawnMagazines[]={"vn_m1895_mag","vn_m1895_mag","vn_rdg2_mag","vn_rgd33_grenade_mag","vn_t67_grenade_mag","vn_dp28_mag","vn_dp28_mag","vn_dp28_mag","vn_dp28_mag","vn_dp28_mag","vn_dp28_mag","vn_dp28_mag"};
    linkedItems[]={"vn_o_item_map","vn_b_item_compass","vn_b_item_watch","vn_o_item_radio_m252","vn_b_bandana_03","vn_o_vest_01"};
    respawnLinkedItems[]={"vn_o_item_map","vn_b_item_compass","vn_b_item_watch","vn_o_item_radio_m252","vn_b_bandana_03","vn_o_vest_01"};
    backpack="AET_F_redJasmine_O_TNME_Machine_Gunner_DP27_pack";
  };

  class AET_F_redJasmine_O_TNME_Medic: vn_o_men_pl_28
  {
    faction="AET_F_redJasmine_O_TNME_plaquer";
    editorSubcategory = "EdSubcat_Personnel";
    side=0;
    displayName="Medic";
    uniformClass="AET_F_redJasmine_O_TNME_U_macv_04_19";
    weapons[]={"AET_F_redJasmine_O_TNME_vn_type64_smg","AET_F_redJasmine_O_TNME_vn_m1895","Put","Throw"};
    respawnWeapons[]={"AET_F_redJasmine_O_TNME_vn_type64_smg","AET_F_redJasmine_O_TNME_vn_m1895","Put","Throw"};
    items[]={"vn_o_item_firstaidkit","vn_o_item_firstaidkit","vn_o_item_firstaidkit","ACE_salineIV","ACE_salineIV","ACE_salineIV","ACE_salineIV","ACE_salineIV","ACE_personalAidKit","ACE_personalAidKit","ACE_surgicalKit","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage"};
    respawnItems[]={"vn_o_item_firstaidkit","vn_o_item_firstaidkit","vn_o_item_firstaidkit","ACE_salineIV","ACE_salineIV","ACE_salineIV","ACE_salineIV","ACE_salineIV","ACE_personalAidKit","ACE_personalAidKit","ACE_surgicalKit","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage"};
    magazines[]={"vn_m1895_mag","vn_m1895_mag","vn_rdg2_mag","vn_rgd33_grenade_mag","vn_t67_grenade_mag","vn_type64_smg_mag","vn_type64_smg_mag","vn_type64_smg_mag","vn_type64_smg_mag","vn_type64_smg_mag","vn_type64_smg_mag","vn_rdg2_mag","vn_rdg2_mag","vn_rgd5_grenade_mag","vn_rgd5_grenade_mag"};
    respawnMagazines[]={"vn_m1895_mag","vn_m1895_mag","vn_rdg2_mag","vn_rgd33_grenade_mag","vn_t67_grenade_mag","vn_type64_smg_mag","vn_type64_smg_mag","vn_type64_smg_mag","vn_type64_smg_mag","vn_type64_smg_mag","vn_type64_smg_mag","vn_rdg2_mag","vn_rdg2_mag","vn_rgd5_grenade_mag","vn_rgd5_grenade_mag"};
    linkedItems[]={"vn_o_item_map","vn_b_item_compass","vn_b_item_watch","vn_o_item_radio_m252","vn_b_boonie_04_03","vn_o_vest_06"};
    respawnLinkedItems[]={"vn_o_item_map","vn_b_item_compass","vn_b_item_watch","vn_o_item_radio_m252","vn_b_boonie_04_03","vn_o_vest_06"};
    backpack="AET_F_redJasmine_O_TNME_Medic_pack";
  };

  class AET_F_redJasmine_O_TNME_Crewman: vn_o_men_pl_18
  {
    faction="AET_F_redJasmine_O_TNME_plaquer";
    editorSubcategory = "EdSubcat_Personnel";
    side=0;
    displayName="Crewman";
    uniformClass="AET_F_redJasmine_O_TNME_U_macv_04_19";
    weapons[]={"AET_F_redJasmine_O_TNME_vn_type64_smg","AET_F_redJasmine_O_TNME_vn_m1895","Put","Throw"};
    respawnWeapons[]={"AET_F_redJasmine_O_TNME_vn_type64_smg","AET_F_redJasmine_O_TNME_vn_m1895","Put","Throw"};
    items[]={"vn_o_item_firstaidkit"};
    respawnItems[]={"vn_o_item_firstaidkit"};
    magazines[]={"vn_m1895_mag","vn_m1895_mag","vn_rdg2_mag","vn_rgd33_grenade_mag","vn_t67_grenade_mag","vn_type64_smg_mag","vn_type64_smg_mag","vn_type64_smg_mag"};
    respawnMagazines[]={"vn_m1895_mag","vn_m1895_mag","vn_rdg2_mag","vn_rgd33_grenade_mag","vn_t67_grenade_mag","vn_type64_smg_mag","vn_type64_smg_mag","vn_type64_smg_mag"};
    linkedItems[]={"vn_o_item_map","vn_b_item_compass","vn_b_item_watch","vn_o_item_radio_m252","vn_o_helmet_tsh3_01","vn_b_vest_aircrew_05"};
    respawnLinkedItems[]={"vn_o_item_map","vn_b_item_compass","vn_b_item_watch","vn_o_item_radio_m252","vn_o_helmet_tsh3_01","vn_b_vest_aircrew_05"};
    backpack="";
  };

  class AET_F_redJasmine_O_TNME_Sapper: vn_o_men_pl_29
  {
    faction="AET_F_redJasmine_O_TNME_plaquer";
    editorSubcategory = "EdSubcat_Personnel";
    side=0;
    displayName="Sapper";
    uniformClass="AET_F_redJasmine_O_TNME_U_macv_04_19";
    weapons[]={"AET_F_redJasmine_O_TNME_vn_sks_gl","AET_F_redJasmine_O_TNME_vn_m1895","Put","Throw"};
    respawnWeapons[]={"AET_F_redJasmine_O_TNME_vn_sks_gl","AET_F_redJasmine_O_TNME_vn_m1895","Put","Throw"};
    items[]={"vn_o_item_firstaidkit","vn_o_item_firstaidkit","vn_o_item_firstaidkit"};
    respawnItems[]={"vn_o_item_firstaidkit","vn_o_item_firstaidkit","vn_o_item_firstaidkit"};
    magazines[]={"vn_m1895_mag","vn_m1895_mag","vn_rdg2_mag","vn_rgd33_grenade_mag","vn_t67_grenade_mag","vn_22mm_m60_frag_mag","vn_22mm_m22_smoke_mag","vn_22mm_m22_smoke_mag","vn_sks_t_mag","vn_sks_t_mag","vn_sks_t_mag","vn_sks_t_mag","vn_sks_t_mag","vn_sks_t_mag","vn_rdg2_mag","vn_rdg2_mag","vn_rgd5_grenade_mag","vn_rgd5_grenade_mag","vn_rkg3_grenade_mag","vn_rkg3_grenade_mag","vn_mine_satchel_remote_02_mag","vn_mine_punji_01_mag"};
    respawnMagazines[]={"vn_m1895_mag","vn_m1895_mag","vn_rdg2_mag","vn_rgd33_grenade_mag","vn_t67_grenade_mag","vn_22mm_m60_frag_mag","vn_22mm_m22_smoke_mag","vn_22mm_m22_smoke_mag","vn_sks_t_mag","vn_sks_t_mag","vn_sks_t_mag","vn_sks_t_mag","vn_sks_t_mag","vn_sks_t_mag","vn_rdg2_mag","vn_rdg2_mag","vn_rgd5_grenade_mag","vn_rgd5_grenade_mag","vn_rkg3_grenade_mag","vn_rkg3_grenade_mag","vn_mine_satchel_remote_02_mag","vn_mine_punji_01_mag"};
    linkedItems[]={"vn_o_item_map","vn_b_item_compass","vn_b_item_watch","vn_o_item_radio_m252","vn_b_boonie_04_03","vn_o_vest_01"};
    respawnLinkedItems[]={"vn_o_item_map","vn_b_item_compass","vn_b_item_watch","vn_o_item_radio_m252","vn_b_boonie_04_03","vn_o_vest_01"};
    backpack="AET_F_redJasmine_O_TNME_Sapper_pack";
  };

  class AET_F_redJasmine_O_TNME_Marksman: vn_o_men_pl_31
  {
    faction="AET_F_redJasmine_O_TNME_plaquer";
    editorSubcategory = "EdSubcat_Personnel";
    side=0;
    displayName="Marksman";
    uniformClass="AET_F_redJasmine_O_TNME_U_macv_04_19";
    weapons[]={"AET_F_redJasmine_O_TNME_vn_svd_vn_o_4x_svd","AET_F_redJasmine_O_TNME_vn_m1895","Put","Throw"};
    respawnWeapons[]={"AET_F_redJasmine_O_TNME_vn_svd_vn_o_4x_svd","AET_F_redJasmine_O_TNME_vn_m1895","Put","Throw"};
    items[]={"vn_o_item_firstaidkit"};
    respawnItems[]={"vn_o_item_firstaidkit"};
    magazines[]={"vn_m1895_mag","vn_m1895_mag","vn_rdg2_mag","vn_rgd33_grenade_mag","vn_t67_grenade_mag","vn_svd_mag","vn_svd_mag","vn_svd_mag","vn_svd_mag","vn_svd_mag","vn_svd_mag","vn_svd_mag","vn_svd_mag","vn_svd_mag","vn_svd_mag","vn_svd_mag","vn_svd_mag","vn_svd_mag","vn_svd_mag","vn_svd_mag"};
    respawnMagazines[]={"vn_m1895_mag","vn_m1895_mag","vn_rdg2_mag","vn_rgd33_grenade_mag","vn_t67_grenade_mag","vn_svd_mag","vn_svd_mag","vn_svd_mag","vn_svd_mag","vn_svd_mag","vn_svd_mag","vn_svd_mag","vn_svd_mag","vn_svd_mag","vn_svd_mag","vn_svd_mag","vn_svd_mag","vn_svd_mag","vn_svd_mag","vn_svd_mag"};
    linkedItems[]={"vn_o_item_map","vn_b_item_compass","vn_b_item_watch","vn_o_item_radio_m252","vn_b_boonie_01_09","vn_o_vest_vc_02"};
    respawnLinkedItems[]={"vn_o_item_map","vn_b_item_compass","vn_b_item_watch","vn_o_item_radio_m252","vn_b_boonie_01_09","vn_o_vest_vc_02"};
    backpack="";
  };

  class AET_F_redJasmine_O_TNME_Anti_Air_Specialist: vn_o_men_pl_26
  {
    faction="AET_F_redJasmine_O_TNME_plaquer";
    editorSubcategory = "EdSubcat_Personnel";
    side=0;
    displayName="Anti Air Specialist";
    uniformClass="AET_F_redJasmine_O_TNME_U_macv_04_19";
    weapons[]={"AET_F_redJasmine_O_TNME_vn_type64_smg","AET_F_redJasmine_O_TNME_vn_sa7b","AET_F_redJasmine_O_TNME_vn_m1895","Put","Throw"};
    respawnWeapons[]={"AET_F_redJasmine_O_TNME_vn_type64_smg","AET_F_redJasmine_O_TNME_vn_sa7b","AET_F_redJasmine_O_TNME_vn_m1895","Put","Throw"};
    items[]={"vn_o_item_firstaidkit"};
    respawnItems[]={"vn_o_item_firstaidkit"};
    magazines[]={"vn_m1895_mag","vn_m1895_mag","vn_rdg2_mag","vn_rgd33_grenade_mag","vn_t67_grenade_mag","vn_type64_smg_mag","vn_type64_smg_mag","vn_type64_smg_mag","vn_type64_smg_mag","vn_type64_smg_mag","vn_type64_smg_mag","vn_type64_smg_mag","vn_type64_smg_mag","vn_sa7b_mag","vn_sa7b_mag","vn_sa7b_mag"};
    respawnMagazines[]={"vn_m1895_mag","vn_m1895_mag","vn_rdg2_mag","vn_rgd33_grenade_mag","vn_t67_grenade_mag","vn_type64_smg_mag","vn_type64_smg_mag","vn_type64_smg_mag","vn_type64_smg_mag","vn_type64_smg_mag","vn_type64_smg_mag","vn_type64_smg_mag","vn_type64_smg_mag","vn_sa7b_mag","vn_sa7b_mag","vn_sa7b_mag"};
    linkedItems[]={"vn_o_item_map","vn_b_item_compass","vn_b_item_watch","vn_o_item_radio_m252","vn_b_bandana_03","vn_o_vest_01"};
    respawnLinkedItems[]={"vn_o_item_map","vn_b_item_compass","vn_b_item_watch","vn_o_item_radio_m252","vn_b_bandana_03","vn_o_vest_01"};
    backpack="AET_F_redJasmine_O_TNME_Anti_Air_Specialist_pack";
  };

  class AET_F_redJasmine_O_TNME_Helicopter_Pilot: vn_o_men_aircrew_01
  {
    faction="AET_F_redJasmine_O_TNME_plaquer";
    editorSubcategory = "EdSubcat_Personnel";
    side=0;
    displayName="Helicopter Pilot";
    uniformClass="AET_F_redJasmine_O_TNME_U_k2b_01_04";
    weapons[]={"AET_F_redJasmine_O_TNME_vn_m712","Put","Throw"};
    respawnWeapons[]={"AET_F_redJasmine_O_TNME_vn_m712","Put","Throw"};
    items[]={"vn_o_item_firstaidkit"};
    respawnItems[]={"vn_o_item_firstaidkit"};
    magazines[]={"vn_rdg2_mag","vn_rgd33_grenade_mag","vn_t67_grenade_mag","vn_m712_mag","vn_m712_mag","vn_m712_mag"};
    respawnMagazines[]={"vn_rdg2_mag","vn_rgd33_grenade_mag","vn_t67_grenade_mag","vn_m712_mag","vn_m712_mag","vn_m712_mag"};
    linkedItems[]={"vn_o_item_map","vn_b_item_compass","vn_b_item_watch","vn_o_item_radio_m252","vnx_b_helmet_aph6_02_06","vn_b_vest_anzac_08"};
    respawnLinkedItems[]={"vn_o_item_map","vn_b_item_compass","vn_b_item_watch","vn_o_item_radio_m252","vnx_b_helmet_aph6_02_06","vn_b_vest_anzac_08"};
    backpack="";
  };

  class AET_F_redJasmine_O_TNME_Pilot: vn_o_men_aircrew_07
  {
    faction="AET_F_redJasmine_O_TNME_plaquer";
    editorSubcategory = "EdSubcat_Personnel";
    side=0;
    displayName="Pilot";
    uniformClass="AET_F_redJasmine_O_TNME_U_k2b_01_04";
    weapons[]={"AET_F_redJasmine_O_TNME_vn_m712","Put","Throw"};
    respawnWeapons[]={"AET_F_redJasmine_O_TNME_vn_m712","Put","Throw"};
    items[]={"vn_o_item_firstaidkit"};
    respawnItems[]={"vn_o_item_firstaidkit"};
    magazines[]={"vn_rdg2_mag","vn_rgd33_grenade_mag","vn_t67_grenade_mag","vn_m712_mag","vn_m712_mag","vn_m712_mag"};
    respawnMagazines[]={"vn_rdg2_mag","vn_rgd33_grenade_mag","vn_t67_grenade_mag","vn_m712_mag","vn_m712_mag","vn_m712_mag"};
    linkedItems[]={"vn_o_item_map","vn_b_item_compass","vn_b_item_watch","vn_o_item_radio_m252","vn_b_helmet_aph6_02_03","vn_b_vest_anzac_08"};
    respawnLinkedItems[]={"vn_o_item_map","vn_b_item_compass","vn_b_item_watch","vn_o_item_radio_m252","vn_b_helmet_aph6_02_03","vn_b_vest_anzac_08"};
    backpack="";
  };

  class AET_F_redJasmine_O_TNME_F_4B_Phantom_II_CAS: AET_F_redJasmine_O_TNME_F_4B_Phantom_II_CAS_base_2
  {
	scope=2;
    faction="AET_F_redJasmine_O_TNME_plaquer";
    editorSubcategory = "EdSubcat_Planes";
    side=0;
    displayName="F 4B Phantom II CAS";
    hiddenSelectionsTextures[]={"vn\air_f_vietnam\f4\data\vn_air_f4b_ext_01_03_co.paa","vn\air_f_vietnam\f4\data\vn_air_f4b_ext_02_03_co.paa","vn\air_f_vietnam\f4\decals\b\num\vn_d_b_02_ca.paa","vn\air_f_vietnam\f4\decals\b\num\vn_d_b_01_ca.paa","vn\air_f_vietnam\f4\decals\b\num\vn_d_b_04_ca.paa","","","","","","","","","","","","","","","","","","","","","","","","","",""};
    crew="AET_F_redJasmine_O_TNME_Pilot";
    typicalCargo[]={"AET_F_redJasmine_O_TNME_Pilot"};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
	class TransportBackpacks {};
	textureList[]={"camo3", 1};
	class EventHandlers : EventHandlers
	{
		class vn : vn
		{
			init = "[_this # 0] spawn vn_fnc_vn_f4_decals_name;";
		};
	};
	class Turrets : Turrets
	{
		class MainTurret : MainTurret
		{
			gunnerType = "AET_F_redJasmine_O_TNME_Pilot";
		};
	};
  };

  class AET_F_redJasmine_O_TNME_F_4B_Phantom_II_CAP: AET_F_redJasmine_O_TNME_F_4B_Phantom_II_CAP_base_2
  {
	scope=2;
    faction="AET_F_redJasmine_O_TNME_plaquer";
    editorSubcategory = "EdSubcat_Planes";
    side=0;
    displayName="F 4B Phantom II CAP";
    hiddenSelectionsTextures[]={"vn\air_f_vietnam\f4\data\vn_air_f4b_ext_01_03_co.paa","vn\air_f_vietnam\f4\data\vn_air_f4b_ext_02_03_co.paa","vn\air_f_vietnam\f4\decals\b\num\vn_d_b_06_ca.paa","vn\air_f_vietnam\f4\decals\b\num\vn_d_b_01_ca.paa","vn\air_f_vietnam\f4\decals\b\num\vn_d_b_02_ca.paa","","","","","","","","","","","","","","","","","","","","","","","","","",""};
    crew="AET_F_redJasmine_O_TNME_Pilot";
    typicalCargo[]={"AET_F_redJasmine_O_TNME_Pilot"};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
	class TransportBackpacks {};
	textureList[]={"camo3", 1};
	class EventHandlers : EventHandlers
	{
		class vn : vn
		{
			init = "[_this # 0] spawn vn_fnc_vn_f4_decals_name;";
		};
	};
	class Turrets : Turrets
	{
		class MainTurret : MainTurret
		{
			gunnerType = "AET_F_redJasmine_O_TNME_Pilot";
		};
	};
  };

  class AET_F_redJasmine_O_TNME_HH_34J_Seahorse_M60_x2: AET_F_redJasmine_O_TNME_HH_34J_Seahorse_M60_x2_base_2
  {
	scope=2;
    faction="AET_F_redJasmine_O_TNME_plaquer";
    editorSubcategory = "EdSubcat_Helicopters";
    side=0;
    displayName="HH 34J Seahorse M60 x2";
    hiddenSelectionsTextures[]={"vn\air_f_vietnam\ch34\data\vn_air_ch34_01_03_co.paa","vn\air_f_vietnam\ch34\data\vn_air_ch34_02_03_co.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa",""};
    crew="AET_F_redJasmine_O_TNME_Helicopter_Pilot";
    typicalCargo[]={"AET_F_redJasmine_O_TNME_Helicopter_Pilot"};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
	class TransportBackpacks {};
	class Turrets : Turrets
	{
		class CopilotTurret : CopilotTurret
		{
			gunnerType = "AET_F_redJasmine_O_TNME_Helicopter_Pilot";
		};
		class MainTurret : MainTurret
		{
			gunnerType = "AET_F_redJasmine_O_TNME_Helicopter_Pilot";
		};
		class WindowTurret : WindowTurret
		{
			gunnerType = "AET_F_redJasmine_O_TNME_Helicopter_Pilot";
		};
	};
  };

  class AET_F_redJasmine_O_TNME_ACH_47A_Guns_A_Go_Go_APERS: AET_F_redJasmine_O_TNME_ACH_47A_Guns_A_Go_Go_APERS_base_2
  {
	scope=2;
    faction="AET_F_redJasmine_O_TNME_plaquer";
    editorSubcategory = "EdSubcat_Helicopters";
    side=0;
    displayName="ACH 47A Guns A Go Go APERS";
    hiddenSelectionsTextures[]={"vn\air_f_vietnam_03\ch47\data\vn_air_ch47_01_01_co.paa","vn\air_f_vietnam_03\ch47\data\vn_air_ch47_02_01_co.paa","vn\air_f_vietnam_03\ch47\data\vn_air_ch47_03_01_co.paa","vn\air_f_vietnam_03\ch47\data\vn_air_ch47_int_01_co.paa","vn\air_f_vietnam_03\ch47\data\vn_air_ch47_int_02_co.paa","vn\air_f_vietnam_03\ch47\data\vn_air_ch47_int_03_co.paa","vn\air_f_vietnam_03\ch47\decals\vn_air_ch47_decal_01_ca.paa"};
    crew="AET_F_redJasmine_O_TNME_Helicopter_Pilot";
    typicalCargo[]={"AET_F_redJasmine_O_TNME_Helicopter_Pilot"};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
	class TransportBackpacks {};
	textureList[]={"ch47_01", 1};
	class Turrets : Turrets
	{
		class copilotTurret : copilotTurret
		{
			gunnerType = "AET_F_redJasmine_O_TNME_Helicopter_Pilot";
		};
		class mg1_turret : mg1_turret
		{
			gunnerType = "AET_F_redJasmine_O_TNME_Helicopter_Pilot";
		};
		class mg2_turret : mg2_turret
		{
			gunnerType = "AET_F_redJasmine_O_TNME_Helicopter_Pilot";
		};
		class mg3_turret : mg3_turret
		{
			gunnerType = "AET_F_redJasmine_O_TNME_Helicopter_Pilot";
		};
		class mg4_turret : mg4_turret
		{
			gunnerType = "AET_F_redJasmine_O_TNME_Helicopter_Pilot";
		};
		class mg5_turret : mg5_turret
		{
			gunnerType = "AET_F_redJasmine_O_TNME_Helicopter_Pilot";
		};
	};
  };

  class AET_F_redJasmine_O_TNME_LVTE_1: AET_F_redJasmine_O_TNME_LVTE_1_base_2
  {
    scope=2;
    faction="AET_F_redJasmine_O_TNME_plaquer";
    editorSubcategory = "EdSubcat_APCs";
    side=0;
    displayName="LVTE 1";
    hiddenSelectionsTextures[]={"vnx\armor_f_vietnam_06\lvtp5\data\vnx_armor_lvte1_ext_01_01_co.paa","vnx\armor_f_vietnam_05\lvtp5\data\vnx_armor_lvtp5_ext_02_01_co.paa","vnx\armor_f_vietnam_05\lvtp5\data\vnx_armor_lvtp5_ext_03_01_co.paa","vnx\armor_f_vietnam_05\lvtp5\data\vnx_armor_lvtp5_ext_04_01_co.paa","vnx\armor_f_vietnam_05\lvtp5\decals\vnx_armor_lvtp5_decal_01_ca.paa","a3\data_f\clear_empty.paa"};
    crew="AET_F_redJasmine_O_TNME_Crewman";
    typicalCargo[]={"AET_F_redJasmine_O_TNME_Crewman"};
    class TransportWeapons {};
    class TransportMagazines {};
    class TransportItems {};
    class TransportBackpacks {};
    textureList[]={"lvtp5_01", 1};
    class EventHandlers : EventHandlers {
        init = "(_this # 0) setVariable ['vn_flag', '\vn\objects_f_vietnam\flags\vn_flag_01_arvn_co.paa', true]; [_this#0, true] spawn { params ['_vehicle', '_value']; if (!_value) exitWith {}; _vehicle forceFlagTexture (_vehicle getVariable ['vn_flag', getText (configOf _vehicle >> 'vn_flag')]); };";
    };
    class Turrets : Turrets
    {
        class CommanderTurret : CommanderTurret
        {
            gunnerType = "AET_F_redJasmine_O_TNME_Crewman";
        };
        class mg5_turret : mg5_turret
        {
            gunnerType = "AET_F_redJasmine_O_TNME_Crewman";
        };
    };
  };

  class AET_F_redJasmine_O_TNME_BTR_50PK_Transport: AET_F_redJasmine_O_TNME_BTR_50PK_Transport_base_2
  {
	scope=2;
    faction="AET_F_redJasmine_O_TNME_plaquer";
    editorSubcategory = "EdSubcat_APCs";
    side=0;
    displayName="BTR 50PK Transport";
    hiddenSelectionsTextures[]={"vn\armor_f_vietnam_03\btr50\data\vn_armor_btr50pk_01_04_co.paa","vn\armor_f_vietnam_03\btr50\data\vn_armor_btr50pk_02_04_co.paa","vn\armor_f_vietnam_03\btr50\data\vn_armor_btr50pk_03_04_co.paa","vn\armor_f_vietnam_03\btr50\data\vn_armor_btr50pk_04_04_co.paa","vn\armor_f_vietnam_02\pt76\data\vn_armor_pt76_02_01_co.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa"};
    crew="AET_F_redJasmine_O_TNME_Crewman";
    typicalCargo[]={"AET_F_redJasmine_O_TNME_Crewman"};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
	class TransportBackpacks {};
	textureList[]={"btr50_19", 1};
	class EventHandlers : EventHandlers {
		init = "(_this # 0) setVariable ['vn_flag', '\vn\objects_f_vietnam\flags\vn_flag_01_arvn_co.paa', true]; [_this#0, true] spawn { params ['_vehicle', '_value']; if (!_value) exitWith {}; _vehicle forceFlagTexture (_vehicle getVariable ['vn_flag', getText (configOf _vehicle >> 'vn_flag')]); };";
	};
	class Turrets : Turrets
	{
		class commanderTurret : commanderTurret
		{
			gunnerType = "AET_F_redJasmine_O_TNME_Crewman";
		};
		class mg1_turret : mg1_turret
		{
			gunnerType = "AET_F_redJasmine_O_TNME_Crewman";
		};
	};
  };

  class AET_F_redJasmine_O_TNME_Z_157_Transport_Covered: AET_F_redJasmine_O_TNME_Z_157_Transport_Covered_base_2
  {
	scope=2;
    faction="AET_F_redJasmine_O_TNME_plaquer";
    editorSubcategory = "EdSubcat_Cars";
    side=0;
    displayName="Z 157 Transport Covered";
    hiddenSelectionsTextures[]={"vn\wheeled_f_vietnam\z157\data\vn_wheeled_z157_main_body_co.paa","vn\wheeled_f_vietnam\z157\data\vn_wheeled_z157_main_body_2_co.paa","vn\wheeled_f_vietnam\z157\data\vn_wheeled_z157_cockpit_co.paa","vn\wheeled_f_vietnam\z157\data\vn_wheeled_z157_flatbed_co.paa","vn\wheeled_f_vietnam\z157\data\vn_wheeled_z157_flatbed_cover_co.paa","vn\wheeled_f_vietnam\z157\data\vn_wheeled_z157_main_body_mlod_co.paa","vn\wheeled_f_vietnam\z157\data\vn_wheeled_z157_flatbed_mlod_co.paa"};
    crew="AET_F_redJasmine_O_TNME_Rifleman";
    typicalCargo[]={"AET_F_redJasmine_O_TNME_Rifleman"};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
	class TransportBackpacks {};
	class Turrets : Turrets
	{
		class Codriver : Codriver
		{
			gunnerType = "AET_F_redJasmine_O_TNME_Rifleman";
		};
	};
	animationList[] = {"user_canopy_rear_hide",0,"user_canopy_front_hide",1,"user_door_cover_left_hide",1,"user_door_cover_right_hide",1};
  };

  class AET_F_redJasmine_O_TNME_Type_56_75mm_Recoilless_Rifle: vn_o_kr_static_type56rr
  {
	scope=2;
    faction="AET_F_redJasmine_O_TNME_plaquer";
    editorSubcategory = "EdSubcat_Turrets";
    side=0;
    displayName="Type 56 75mm Recoilless Rifle";
    hiddenSelectionsTextures[]={"vn\static_f_vietnam_02\type56rr\data\vn_type56_01_co.paa"};
    crew="AET_F_redJasmine_O_TNME_Rifleman";
    typicalCargo[]={"AET_F_redJasmine_O_TNME_Rifleman"};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
	class TransportBackpacks {};
  };

  class AET_F_redJasmine_O_TNME_D44_85mm_Anti_Tank_Gun: vn_o_pl_static_d44
  {
	scope=2;
    faction="AET_F_redJasmine_O_TNME_plaquer";
    editorSubcategory = "EdSubcat_Turrets";
    side=0;
    displayName="D44 85mm Anti Tank Gun";
    hiddenSelectionsTextures[]={"vn\static_f_vietnam\d44\data\vn_o_static_d44_01_co.paa","vn\static_f_vietnam\d44\data\vn_o_static_d44_02_co.paa"};
    crew="AET_F_redJasmine_O_TNME_Rifleman";
    typicalCargo[]={"AET_F_redJasmine_O_TNME_Rifleman"};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
	class TransportBackpacks {};
  };

  class AET_F_redJasmine_O_TNME_M274_Mule_M40A1: AET_F_redJasmine_O_TNME_M274_Mule_M40A1_base_2
  {
	scope=2;
    faction="AET_F_redJasmine_O_TNME_plaquer";
    editorSubcategory = "EdSubcat_Cars";
    side=0;
    displayName="M274 Mule M40A1";
    hiddenSelectionsTextures[]={"vn\wheeled_f_vietnam_04\m274\data\vn_wheeled_m274_01_01_co.paa","vn\wheeled_f_vietnam_04\m274\data\vn_wheeled_m274_02_01_co.paa","vn\wheeled_f_vietnam_04\m274\data\vn_wheeled_m274_03_01_co.paa","vn\wheeled_f_vietnam_04\m274\decals\vn_wheeled_m274_decal_01_ca.paa"};
    crew="AET_F_redJasmine_O_TNME_Rifleman";
    typicalCargo[]={"AET_F_redJasmine_O_TNME_Rifleman"};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
	class TransportBackpacks {};
	class EventHandlers : EventHandlers
	{
		init = "(_this # 0) setVariable ['vn_flag', '\vn\objects_f_vietnam\flags\vn_flag_01_arvn_co.paa', true]; [_this#0, true] spawn { params ['_vehicle', '_value']; if (!_value) exitWith {}; _vehicle forceFlagTexture (_vehicle getVariable ['vn_flag', getText (configOf _vehicle >> 'vn_flag')]); };";	
	};
	class Turrets : Turrets
	{
		class cargoTurret_1 : cargoTurret_1
		{
			gunnerType = "AET_F_redJasmine_O_TNME_Rifleman";
		};
		class mg1_turret : mg1_turret
		{
			gunnerType = "AET_F_redJasmine_O_TNME_Rifleman";
		};
	};
  };

  class AET_F_redJasmine_O_TNME_M274_Mule_M134: AET_F_redJasmine_O_TNME_M274_Mule_M134_base_2
  {
	scope=2;
    faction="AET_F_redJasmine_O_TNME_plaquer";
    editorSubcategory = "EdSubcat_Cars";
    side=0;
    displayName="M274 Mule M134";
    hiddenSelectionsTextures[]={"vn\wheeled_f_vietnam_04\m274\data\vn_wheeled_m274_01_01_co.paa","vn\wheeled_f_vietnam_04\m274\data\vn_wheeled_m274_02_01_co.paa","vn\wheeled_f_vietnam_04\m274\data\vn_wheeled_m274_03_01_co.paa","vn\wheeled_f_vietnam_04\m274\decals\vn_wheeled_m274_decal_01_ca.paa"};
    crew="AET_F_redJasmine_O_TNME_Rifleman";
    typicalCargo[]={"AET_F_redJasmine_O_TNME_Rifleman"};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
	class TransportBackpacks {};
	class EventHandlers : EventHandlers
	{
		init = "(_this # 0) setVariable ['vn_flag', '\vn\objects_f_vietnam\flags\vn_flag_01_arvn_co.paa', true]; [_this#0, true] spawn { params ['_vehicle', '_value']; if (!_value) exitWith {}; _vehicle forceFlagTexture (_vehicle getVariable ['vn_flag', getText (configOf _vehicle >> 'vn_flag')]); };";	
	};
	class Turrets : Turrets
	{
		class mg1_turret : mg1_turret
		{
			gunnerType = "AET_F_redJasmine_O_TNME_Rifleman";
		};
	};
  };

  class AET_F_redJasmine_O_TNME_M54_Gun_Truck_3x_M2HB: AET_F_redJasmine_O_TNME_M54_Gun_Truck_3x_M2HB_base_2
  {
	scope=2;
    faction="AET_F_redJasmine_O_TNME_plaquer";
    editorSubcategory = "EdSubcat_Cars";
    side=0;
    displayName="M54 Gun Truck 3x M2HB";
    hiddenSelectionsTextures[]={"vn\wheeled_f_vietnam\m54\data\vn_wheeled_m54_01_01_black_co.paa","vn\wheeled_f_vietnam\m54\data\vn_wheeled_m54_01_02_black_co.paa","vn\wheeled_f_vietnam\m54\data\vn_wheeled_m54_01_04_black_co.paa","vn\wheeled_f_vietnam\m54\data\vn_wheeled_m54_mg_03_co.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa"};
    crew="AET_F_redJasmine_O_TNME_Rifleman";
    typicalCargo[]={"AET_F_redJasmine_O_TNME_Rifleman"};
	textureList[]={"army", 1};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
	class TransportBackpacks {};
	class Turrets : Turrets
	{
		class codriver_ffv : codriver_ffv
		{
			gunnerType = "AET_F_redJasmine_O_TNME_Rifleman";
		};
		class guntruck_front : guntruck_front
		{
			gunnerType = "AET_F_redJasmine_O_TNME_Rifleman";
		};
		class guntruck_left : guntruck_left
		{
			gunnerType = "AET_F_redJasmine_O_TNME_Rifleman";
		};
		class guntruck_rear : guntruck_rear
		{
			gunnerType = "AET_F_redJasmine_O_TNME_Rifleman";
		};
		class guntruck_right : guntruck_right
		{
			gunnerType = "AET_F_redJasmine_O_TNME_Rifleman";
		};
		class mg1turret : mg1turret
		{
			gunnerType = "AET_F_redJasmine_O_TNME_Rifleman";
		};
		class mg2turret : mg2turret
		{
			gunnerType = "AET_F_redJasmine_O_TNME_Rifleman";
		};
		class mg3turret : mg3turret
		{
			gunnerType = "AET_F_redJasmine_O_TNME_Rifleman";
		};
	};
  };

  class AET_F_redJasmine_O_TNME_SGM_Low_Shield: vn_o_kr_static_sgm_low_01
  {
	scope=2;
    faction="AET_F_redJasmine_O_TNME_plaquer";
    editorSubcategory = "EdSubcat_Turrets";
    side=0;
    displayName="SGM Low Shield";
    hiddenSelectionsTextures[]={"vn\static_f_vietnam_03\sgm\data\vn_static_sgm_01_01_co.paa","vn\static_f_vietnam_03\sgm\data\vn_static_sgm_02_01_co.paa"};
    crew="AET_F_redJasmine_O_TNME_Rifleman";
    typicalCargo[]={"AET_F_redJasmine_O_TNME_Rifleman"};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
	class TransportBackpacks {};
  };

  class AET_F_redJasmine_O_TNME_M1919A4_30cal_High: vn_b_rok_army_static_m1919a4_high
  {
	scope=2;
    faction="AET_F_redJasmine_O_TNME_plaquer";
    editorSubcategory = "EdSubcat_Turrets";
    side=0;
    displayName="M1919A4 30.cal High";
    hiddenSelectionsTextures[]={"vn\static_f_vietnam\m1919\data\vn_m1919a6_01_co.paa","vn\static_f_vietnam\m2\data\vn_static_m2_high_02_co.paa"};
    crew="AET_F_redJasmine_O_TNME_Rifleman";
    typicalCargo[]={"AET_F_redJasmine_O_TNME_Rifleman"};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
	class TransportBackpacks {};
  };

  class AET_F_redJasmine_O_TNME_ZPU_4_145mm_AA_gun: vn_o_nva_static_zpu4
  {
	scope=2;
    faction="AET_F_redJasmine_O_TNME_plaquer";
    editorSubcategory = "EdSubcat_AAs";
    side=0;
    displayName="ZPU 4 14.5mm AA gun";
    hiddenSelectionsTextures[]={"vn\static_f_vietnam\zpu4\data\vn_static_zpu4_01_co.paa","vn\static_f_vietnam\zpu4\data\vn_static_zpu4_02_co.paa","vn\static_f_vietnam\zpu4\data\vn_static_zpu4_04_co.paa"};
    crew="AET_F_redJasmine_O_TNME_Rifleman";
    typicalCargo[]={"AET_F_redJasmine_O_TNME_Rifleman"};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
	class TransportBackpacks {};
  };

  class AET_F_redJasmine_O_TNME_M1919A4_30cal_Low: vn_b_rok_army_static_m1919a4_low
  {
	scope=2;
    faction="AET_F_redJasmine_O_TNME_plaquer";
    editorSubcategory = "EdSubcat_Turrets";
    side=0;
    displayName="M1919A4 30.cal Low";
    hiddenSelectionsTextures[]={"vn\static_f_vietnam\m1919\data\vn_m1919a6_01_co.paa","vn\static_f_vietnam\m2\data\vn_static_m2_low_02_co.paa"};
    crew="AET_F_redJasmine_O_TNME_Rifleman";
    typicalCargo[]={"AET_F_redJasmine_O_TNME_Rifleman"};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
	class TransportBackpacks {};
  };

  class AET_F_redJasmine_O_TNME_PT_76B_Tank: AET_F_redJasmine_O_TNME_PT_76B_Tank_base_2
  {
	scope=2;
    faction="AET_F_redJasmine_O_TNME_plaquer";
    editorSubcategory = "EdSubcat_Tanks";
    side=0;
    displayName="PT 76B Tank";
    hiddenSelectionsTextures[]={"vn\armor_f_vietnam_02\pt76\data\vn_armor_pt76_01_02_co.paa","vn\armor_f_vietnam_02\pt76\data\vn_armor_pt76_02_02_co.paa","vn\armor_f_vietnam_02\pt76\data\vn_armor_pt76_03b_02_co.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa"};
    crew="AET_F_redJasmine_O_TNME_Crewman";
    typicalCargo[]={"AET_F_redJasmine_O_TNME_Crewman"};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
	class TransportBackpacks {};
	textureList[]={"pt76b_02", 1};
	class EventHandlers : EventHandlers {
		init = "(_this # 0) setVariable ['vn_flag', '\vn\objects_f_vietnam\flags\vn_flag_01_arvn_co.paa', true]; [_this#0, true] spawn { params ['_vehicle', '_value']; if (!_value) exitWith {}; _vehicle forceFlagTexture (_vehicle getVariable ['vn_flag', getText (configOf _vehicle >> 'vn_flag')]); };";
	};
	class Turrets : Turrets
	{
		class loaderTurret : loaderTurret
		{
			gunnerType = "AET_F_redJasmine_O_TNME_Crewman";
		};
		class MainTurret : MainTurret
		{
			gunnerType = "AET_F_redJasmine_O_TNME_Crewman";
		};
	};
  };

  class AET_F_redJasmine_O_TNME_T_54B_Tank: AET_F_redJasmine_O_TNME_T_54B_Tank_base_4
  {
	scope=2;
    faction="AET_F_redJasmine_O_TNME_plaquer";
    editorSubcategory = "EdSubcat_Tanks";
    side=0;
    displayName="T 54B Tank";
    hiddenSelectionsTextures[]={"vn\armor_f_vietnam_03\t54\data\vn_armor_t54b_01_01_co.paa","vn\armor_f_vietnam_03\t54\data\vn_armor_t54b_02_01_co.paa","vn\armor_f_vietnam_03\t54\data\vn_armor_t54b_03_01_co.paa","vn\armor_f_vietnam_03\t54\data\vn_armor_t54b_04_01_co.paa","a3\data_f\clear_empty.paa","vn\armor_f_vietnam_03\t54\decals\w\b_ca.paa","vn\armor_f_vietnam_03\t54\decals\w_n\3_ca.paa","vn\armor_f_vietnam_03\t54\decals\w_n\8_ca.paa","vn\armor_f_vietnam_03\t54\decals\w_n\0_ca.paa","a3\data_f\clear_empty.paa","vn\armor_f_vietnam_03\t54\decals\w\3_ca.paa","vn\armor_f_vietnam_03\t54\decals\w\8_ca.paa","vn\armor_f_vietnam_03\t54\decals\w\0_ca.paa"};
    crew="AET_F_redJasmine_O_TNME_Crewman";
    typicalCargo[]={"AET_F_redJasmine_O_TNME_Crewman"};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
	class TransportBackpacks {};
	textureList[]={"t54b_03", 1};
	class EventHandlers : EventHandlers {
		init = "(_this # 0) setVariable ['vn_flag', '\vn\objects_f_vietnam\flags\vn_flag_01_arvn_co.paa', true]; [_this#0, true] spawn { params ['_vehicle', '_value']; if (!_value) exitWith {}; _vehicle forceFlagTexture (_vehicle getVariable ['vn_flag', getText (configOf _vehicle >> 'vn_flag')]); };";
	};
	class Turrets : Turrets
	{
		class MainTurret : MainTurret
		{
			gunnerType = "AET_F_redJasmine_O_TNME_Crewman";
			class Turrets : Turrets
			{
				class CommanderTurret : CommanderTurret
				{
					gunnerType = "AET_F_redJasmine_O_TNME_Crewman";
				};
				class LoaderTurret : LoaderTurret
				{
					gunnerType = "AET_F_redJasmine_O_TNME_Crewman";
				};
			};
		};
	};
  };

  class AET_F_redJasmine_O_TNME_M132A1_Flamethrower: AET_F_redJasmine_O_TNME_M132A1_Flamethrower_base_2
  {
	scope=2;
    faction="AET_F_redJasmine_O_TNME_plaquer";
    editorSubcategory = "EdSubcat_APCs";
    side=0;
    displayName="M132A1 Flamethrower";
    hiddenSelectionsTextures[]={"vn\armor_f_vietnam_02\m113\data\vn_armor_m113_ext_01_01_co.paa","vn\armor_f_vietnam_02\m113\data\vn_armor_m113_ext_02_01_co.paa","vn\armor_f_vietnam_02\m113\data\vn_armor_m113_ext_03_01_co.paa","vn\armor_f_vietnam_02\m113\data\vn_armor_m113_int_01_co.paa","vn\armor_f_vietnam_02\m113\data\vn_armor_m113_int_02_co.paa","vn\armor_f_vietnam_02\m113\data\vn_armor_m113_int_03_co.paa","vn\armor_f_vietnam_03\m113\data\vn_armor_m132_01_co.paa","vn\armor_f_vietnam_02\m113\decals\vn_armor_m113_decal_45_ca.paa"};
    crew="AET_F_redJasmine_O_TNME_Crewman";
    typicalCargo[]={"AET_F_redJasmine_O_TNME_Crewman"};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
	class TransportBackpacks {};
	textureList[]={"m113_45", 1};
	class EventHandlers : EventHandlers {
		init = "(_this # 0) setVariable ['vn_flag', '\vn\objects_f_vietnam\flags\vn_flag_01_arvn_co.paa', true]; [_this#0, true] spawn { params ['_vehicle', '_value']; if (!_value) exitWith {}; _vehicle forceFlagTexture (_vehicle getVariable ['vn_flag', getText (configOf _vehicle >> 'vn_flag')]); };";
	};
	class Turrets : Turrets
	{
    	class mg1_turret : mg1_turret
		{
			gunnerType = "AET_F_redJasmine_O_TNME_Crewman";
		};
	};
  };

  class AET_F_redJasmine_O_TNME_M113A1_ACAV_M1919: AET_F_redJasmine_O_TNME_M113A1_ACAV_M1919_base_2
  {
	scope=2;
    faction="AET_F_redJasmine_O_TNME_plaquer";
    editorSubcategory = "EdSubcat_APCs";
    side=0;
    displayName="M113A1 ACAV M1919";
    hiddenSelectionsTextures[]={"vn\armor_f_vietnam_02\m113\data\vn_armor_m113_ext_01_01_co.paa","vn\armor_f_vietnam_02\m113\data\vn_armor_m113_ext_02_01_co.paa","vn\armor_f_vietnam_02\m113\data\vn_armor_m113_ext_03_01_co.paa","vn\armor_f_vietnam_02\m113\data\vn_armor_m113_int_01_co.paa","vn\armor_f_vietnam_02\m113\data\vn_armor_m113_int_02_co.paa","vn\armor_f_vietnam_02\m113\data\vn_armor_m113_int_03_co.paa","vn\armor_f_vietnam_02\m113\decals\vn_armor_m113_decal_45_ca.paa"};
    crew="AET_F_redJasmine_O_TNME_Crewman";
    typicalCargo[]={"AET_F_redJasmine_O_TNME_Crewman"};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
	class TransportBackpacks {};
	textureList[]={"m113_45", 1};
	class EventHandlers : EventHandlers {
		init = "(_this # 0) setVariable ['vn_flag', '\vn\objects_f_vietnam\flags\vn_flag_01_arvn_co.paa', true]; [_this#0, true] spawn { params ['_vehicle', '_value']; if (!_value) exitWith {}; _vehicle forceFlagTexture (_vehicle getVariable ['vn_flag', getText (configOf _vehicle >> 'vn_flag')]); };";
	};
	class Turrets : Turrets
	{
		class mg1_turret : mg1_turret
		{
			gunnerType = "AET_F_redJasmine_O_TNME_Crewman";
		};
		class mg2_turret : mg2_turret
		{
			gunnerType = "AET_F_redJasmine_O_TNME_Crewman";
		};
		class mg3_turret : mg3_turret
		{
			gunnerType = "AET_F_redJasmine_O_TNME_Crewman";
		};
	};
  };

  class AET_F_redJasmine_O_TNME_ACH_47A_Guns_A_Go_Go_Cannon: AET_F_redJasmine_O_TNME_ACH_47A_Guns_A_Go_Go_Cannon_base_2
  {
	scope=2;
    faction="AET_F_redJasmine_O_TNME_plaquer";
    editorSubcategory = "EdSubcat_Helicopters";
    side=0;
    displayName="ACH 47A Guns A Go Go Cannon";
    hiddenSelectionsTextures[]={"vn\air_f_vietnam_03\ch47\data\vn_air_ch47_01_01_co.paa","vn\air_f_vietnam_03\ch47\data\vn_air_ch47_02_01_co.paa","vn\air_f_vietnam_03\ch47\data\vn_air_ch47_03_01_co.paa","vn\air_f_vietnam_03\ch47\data\vn_air_ch47_int_01_co.paa","vn\air_f_vietnam_03\ch47\data\vn_air_ch47_int_02_co.paa","vn\air_f_vietnam_03\ch47\data\vn_air_ch47_int_03_co.paa","vn\air_f_vietnam_03\ch47\decals\vn_air_ch47_decal_01_ca.paa"};
    crew="AET_F_redJasmine_O_TNME_Helicopter_Pilot";
    typicalCargo[]={"AET_F_redJasmine_O_TNME_Helicopter_Pilot"};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
	class TransportBackpacks {};
	textureList[]={"ch47_01", 1};
	class Turrets : Turrets
	{
		class copilotTurret : copilotTurret
		{
			gunnerType = "AET_F_redJasmine_O_TNME_Helicopter_Pilot";
		};
		class mg1_turret : mg1_turret
		{
			gunnerType = "AET_F_redJasmine_O_TNME_Helicopter_Pilot";
		};
		class mg2_turret : mg2_turret
		{
			gunnerType = "AET_F_redJasmine_O_TNME_Helicopter_Pilot";
		};
		class mg3_turret : mg3_turret
		{
			gunnerType = "AET_F_redJasmine_O_TNME_Helicopter_Pilot";
		};
		class mg4_turret : mg4_turret
		{
			gunnerType = "AET_F_redJasmine_O_TNME_Helicopter_Pilot";
		};
		class mg5_turret : mg5_turret
		{
			gunnerType = "AET_F_redJasmine_O_TNME_Helicopter_Pilot";
		};
	};
  };


  class AET_F_redJasmine_O_TNME_Squad_Leader_pack: vn_o_pack_04
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_vn_type56_t_mag {count=8;magazine="vn_type56_t_mag";};
     class _xx_vn_rdg2_mag {count=2;magazine="vn_rdg2_mag";};
     class _xx_vn_rgd5_grenade_mag {count=2;magazine="vn_rgd5_grenade_mag";};
     class _xx_vn_rkg3_grenade_mag {count=2;magazine="vn_rkg3_grenade_mag";};
     class _xx_vn_mine_satchel_remote_02_mag {count=1;magazine="vn_mine_satchel_remote_02_mag";};
     class _xx_vn_mine_punji_01_mag {count=1;magazine="vn_mine_punji_01_mag";};
    };
    class TransportItems
    {
     class _xx_vn_o_item_firstaidkit {count=2;name="vn_o_item_firstaidkit";};
    };
    class TransportWeapons{};
  };

  class AET_F_redJasmine_O_TNME_Machine_Gunner_RPD_pack: vn_o_pack_01
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_vn_rpd_125_mag {count=4;magazine="vn_rpd_125_mag";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };

  class AET_F_redJasmine_O_TNME_Rifleman_pack: vn_o_pack_01
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_vn_type56_t_mag {count=8;magazine="vn_type56_t_mag";};
     class _xx_vn_rdg2_mag {count=2;magazine="vn_rdg2_mag";};
     class _xx_vn_rgd5_grenade_mag {count=2;magazine="vn_rgd5_grenade_mag";};
     class _xx_vn_rkg3_grenade_mag {count=2;magazine="vn_rkg3_grenade_mag";};
    };
    class TransportItems
    {
     class _xx_vn_o_item_firstaidkit {count=2;name="vn_o_item_firstaidkit";};
    };
    class TransportWeapons{};
  };


  class AET_F_redJasmine_O_TNME_Anti_Tank_Specialist_pack: vn_o_pack_03
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_vn_type56_t_mag {count=8;magazine="vn_type56_t_mag";};
     class _xx_vn_rdg2_mag {count=2;magazine="vn_rdg2_mag";};
     class _xx_vn_rgd5_grenade_mag {count=2;magazine="vn_rgd5_grenade_mag";};
     class _xx_vn_rkg3_grenade_mag {count=2;magazine="vn_rkg3_grenade_mag";};
     class _xx_vn_mine_satchel_remote_02_mag {count=1;magazine="vn_mine_satchel_remote_02_mag";};
     class _xx_vn_mine_punji_01_mag {count=1;magazine="vn_mine_punji_01_mag";};
     class _xx_vn_rpg7_mag {count=1;magazine="vn_rpg7_mag";};
    };
    class TransportItems
    {
     class _xx_vn_o_item_firstaidkit {count=2;name="vn_o_item_firstaidkit";};
    };
    class TransportWeapons{};
  };


  class AET_F_redJasmine_O_TNME_Grenadier_pack: vn_o_pack_01
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_vn_rdg2_mag {count=2;magazine="vn_rdg2_mag";};
     class _xx_vn_rgd5_grenade_mag {count=2;magazine="vn_rgd5_grenade_mag";};
     class _xx_vn_rkg3_grenade_mag {count=2;magazine="vn_rkg3_grenade_mag";};
    };
    class TransportItems
    {
     class _xx_vn_o_item_firstaidkit {count=2;name="vn_o_item_firstaidkit";};
    };
    class TransportWeapons{};
  };

  class AET_F_redJasmine_O_TNME_Machine_Gunner_DP27_pack: vn_o_pack_02
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_vn_dp28_mag {count=2;magazine="vn_dp28_mag";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class AET_F_redJasmine_O_TNME_Medic_pack: vn_o_pack_02
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_vn_rdg2_mag {count=2;magazine="vn_rdg2_mag";};
     class _xx_vn_rgd5_grenade_mag {count=2;magazine="vn_rgd5_grenade_mag";};
    };
    class TransportItems
    {
     class _xx_vn_o_item_firstaidkit {count=2;name="vn_o_item_firstaidkit";};
     class _xx_ACE_salineIV {count=5;name="ACE_salineIV";};
     class _xx_ACE_personalAidKit {count=2;name="ACE_personalAidKit";};
     class _xx_ACE_surgicalKit {count=1;name="ACE_surgicalKit";};
     class _xx_ACE_tourniquet {count=5;name="ACE_tourniquet";};
     class _xx_ACE_splint {count=5;name="ACE_splint";};
     class _xx_ACE_morphine {count=10;name="ACE_morphine";};
     class _xx_ACE_epinephrine {count=5;name="ACE_epinephrine";};
     class _xx_ACE_packingBandage {count=45;name="ACE_packingBandage";};
     class _xx_ACE_elasticBandage {count=31;name="ACE_elasticBandage";};
    };
    class TransportWeapons{};
  };


  class AET_F_redJasmine_O_TNME_Sapper_pack: vn_o_pack_05
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_vn_rdg2_mag {count=2;magazine="vn_rdg2_mag";};
     class _xx_vn_rgd5_grenade_mag {count=2;magazine="vn_rgd5_grenade_mag";};
     class _xx_vn_rkg3_grenade_mag {count=2;magazine="vn_rkg3_grenade_mag";};
     class _xx_vn_mine_satchel_remote_02_mag {count=1;magazine="vn_mine_satchel_remote_02_mag";};
     class _xx_vn_mine_punji_01_mag {count=1;magazine="vn_mine_punji_01_mag";};
    };
    class TransportItems
    {
     class _xx_vn_o_item_firstaidkit {count=2;name="vn_o_item_firstaidkit";};
    };
    class TransportWeapons{};
  };


  class AET_F_redJasmine_O_TNME_Anti_Air_Specialist_pack: vn_o_pack_03
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_vn_sa7b_mag {count=3;magazine="vn_sa7b_mag";};
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
    class AET_F_redJasmine_O_TNME_F
    {
      name="TNME - Red Jasmine";

      class Infantry
      {
        name="Infantry";

        class AET_F_redJasmine_O_TNME_O_Rifle_Squad
        {
          name="Rifle Squad";
          faction="AET_F_redJasmine_O_TNME_plaquer";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="AET_F_redJasmine_O_TNME_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="AET_F_redJasmine_O_TNME_Medic";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="AET_F_redJasmine_O_TNME_Machine_Gunner_RPD";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="AET_F_redJasmine_O_TNME_Machine_Gunner_DP27";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=0;
            vehicle="AET_F_redJasmine_O_TNME_Machine_Gunner_DP27";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=0;
            vehicle="AET_F_redJasmine_O_TNME_Anti_Tank_Specialist";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=0;
            vehicle="AET_F_redJasmine_O_TNME_Grenadier";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit7
          {
            side=0;
            vehicle="AET_F_redJasmine_O_TNME_Rifleman";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
          class Unit8
          {
            side=0;
            vehicle="AET_F_redJasmine_O_TNME_Rifleman";
            rank="PRIVATE";
            position[]={0,-40,0};
          };
          class Unit9
          {
            side=0;
            vehicle="AET_F_redJasmine_O_TNME_Rifleman";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
        };
        class AET_F_redJasmine_O_TNME_O_Fireteam
        {
          name="Fireteam";
          faction="AET_F_redJasmine_O_TNME_plaquer";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="AET_F_redJasmine_O_TNME_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="AET_F_redJasmine_O_TNME_Machine_Gunner_DP27";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="AET_F_redJasmine_O_TNME_Rifleman";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="AET_F_redJasmine_O_TNME_Rifleman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class AET_F_redJasmine_O_TNME_O_AA_Team
        {
          name="AA Team";
          faction="AET_F_redJasmine_O_TNME_plaquer";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="AET_F_redJasmine_O_TNME_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="AET_F_redJasmine_O_TNME_Rifleman";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="AET_F_redJasmine_O_TNME_Rifleman";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="AET_F_redJasmine_O_TNME_Anti_Air_Specialist";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class AET_F_redJasmine_O_TNME_O_MG_Team
        {
          name="MG Team";
          faction="AET_F_redJasmine_O_TNME_plaquer";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="AET_F_redJasmine_O_TNME_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="AET_F_redJasmine_O_TNME_Machine_Gunner_RPD";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="AET_F_redJasmine_O_TNME_Machine_Gunner_DP27";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="AET_F_redJasmine_O_TNME_Machine_Gunner_DP27";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class AET_F_redJasmine_O_TNME_O_AT_Team
        {
          name="AT Team";
          faction="AET_F_redJasmine_O_TNME_plaquer";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="AET_F_redJasmine_O_TNME_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="AET_F_redJasmine_O_TNME_Anti_Tank_Specialist";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="AET_F_redJasmine_O_TNME_Rifleman";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="AET_F_redJasmine_O_TNME_Rifleman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class AET_F_redJasmine_O_TNME_O_Sniper_Team
        {
          name="Sniper Team";
          faction="AET_F_redJasmine_O_TNME_plaquer";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="AET_F_redJasmine_O_TNME_Marksman";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="AET_F_redJasmine_O_TNME_Marksman";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
        };
        class AET_F_redJasmine_O_TNME_O_Vehicle_Crew
        {
          name="Vehicle Crew";
          faction="AET_F_redJasmine_O_TNME_plaquer";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="AET_F_redJasmine_O_TNME_Crewman";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="AET_F_redJasmine_O_TNME_Crewman";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="AET_F_redJasmine_O_TNME_Crewman";
            rank="PRIVATE";
            position[]={0,-10,0};
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
