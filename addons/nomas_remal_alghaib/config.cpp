#include "script_component.hpp"

class CfgPatches {
	class ADDON {

        // Meta information for editor
		name = ADDON_NAME;

        author = "$STR_aet_factions_author";
        authors[] = {"Nomas / Redwan S. [AET]", "OverlordZorn [CVO]"};
        
        url = "$STR_aet_factions_URL";

		VERSION_CONFIG;

        // Addon Specific Information
        // Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game.
        requiredVersion = 2.02;

        // Required addons, used for setting load order.
        // When any of the addons is missing, pop-up warning will appear when launching the game.
		requiredAddons[]={QPVAR(main),"cba_main","ace_medical_treatment","ace_hearing","ace_flashlights","ace_maptools","ace_captives","ace_field_rations","ace_tagging","A3_Weapons_F","tfar_handhelds","A3_Weapons_F_Pistols_ACPC2","Characters_f_lxWS","Characters_f_lxWS_headgear","A3_Weapons_F_Items","Weapons_1_F_lxWS_Rifles_Velko","characters_1_F_lxWS","A3_Weapons_F_Machineguns_M200","Weapons_F_lxWS_Rifles","Weapons_1_F_lxWS_Launchers_rpg32"};

		// Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
		skipWhenMissingDependencies = 1;
        
        // List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups)
		units[]={"AET_F_Squad_Leader","AET_F_Grenadier","AET_F_Rifleman","AET_F_Autorifleman","AET_F_Medic","AET_F_Machine_Gunner","AET_F_Anti_Tank_Specialist"};

        // List of weapons (CfgWeapons classes) contained in the addon.
		weapons[]={"AET_F_arifle_Velko_50rnd_MRCO_lxWS_saber_light_lxWS","AET_F_hgun_ACPC2_F","AET_F_arifle_VelkoR5_GL_lxWS_saber_light_lxWS","AET_F_arifle_Velko_50rnd_ACO_lxWS_saber_light_lxWS","AET_F_LMG_Mk200_F_saber_light_lxWS","AET_F_arifle_Velko_lxWS_saber_light_lxWS","AET_F_LMG_S77_Compact_MRCO_lxWS_saber_light_lxWSoptic_MRCO","AET_F_launch_RPG32_tan_lxWS"};

	};
};

#include "cfgFaction.hpp"
