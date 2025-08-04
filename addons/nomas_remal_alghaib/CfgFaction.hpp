class cfgFactionClasses
{
  class AET_F_nomas_remal_alghaib
  {
    icon="";
    displayName="Operation Remal Al-Ghaib";
    side=1;
    priority=1;
  };
};


class cfgWeapons
{
  class arifle_Velko_50rnd_MRCO_lxWS;
  class hgun_ACPC2_F;
  class arifle_VelkoR5_GL_lxWS;
  class arifle_Velko_50rnd_ACO_lxWS;
  class LMG_Mk200_F;
  class arifle_Velko_lxWS;
  class LMG_S77_Compact_MRCO_lxWS;
  class launch_RPG32_tan_lxWS;

  class AET_F_nomas_remal_alghaib_arifle_Velko_50rnd_MRCO_lxWS_saber_light_lxWS: arifle_Velko_50rnd_MRCO_lxWS
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

  class AET_F_nomas_remal_alghaib_hgun_ACPC2_F: hgun_ACPC2_F
  {
    displayName="Custom Covert II";
    scope=1;
    class LinkedItems
    {
    };
  };

  class AET_F_nomas_remal_alghaib_arifle_VelkoR5_GL_lxWS_saber_light_lxWS: arifle_VelkoR5_GL_lxWS
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

  class AET_F_nomas_remal_alghaib_arifle_Velko_50rnd_ACO_lxWS_saber_light_lxWS: arifle_Velko_50rnd_ACO_lxWS
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

  class AET_F_nomas_remal_alghaib_LMG_Mk200_F_saber_light_lxWS: LMG_Mk200_F
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

  class AET_F_nomas_remal_alghaib_arifle_Velko_lxWS_saber_light_lxWS: arifle_Velko_lxWS
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

  class AET_F_nomas_remal_alghaib_LMG_S77_Compact_MRCO_lxWS_saber_light_lxWSoptic_MRCO: LMG_S77_Compact_MRCO_lxWS
  {
    displayName="Vektor SS-77 Compact";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_MRCO";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="saber_light_lxWS";
      };
    };
  };

  class AET_F_nomas_remal_alghaib_launch_RPG32_tan_lxWS: launch_RPG32_tan_lxWS
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
  class B_UN_Soldier_lxWS;
  class B_UN_soldier_AR_lxWS;
  class B_UN_medic_lxWS;
  class B_AssaultPack_rgr_Medic;
  class B_UN_HeavyGunner_lxWS;
  class B_UN_soldier_LAT2_lxWS;
  class B_FieldPack_cbr_LAT2_lxWS;

  class AET_F_nomas_remal_alghaib_Squad_Leader: B_UN_Soldier_TL_lxWS
  {
    faction="AET_F_nomas_remal_alghaib";
    side=1;
    displayName="Squad Leader";
    uniformClass="U_lxWS_UN_Camo3";
    weapons[]={"Binocular","AET_F_nomas_remal_alghaib_arifle_Velko_50rnd_MRCO_lxWS_saber_light_lxWS","AET_F_nomas_remal_alghaib_hgun_ACPC2_F","Put","Throw"};
    respawnWeapons[]={"Binocular","AET_F_nomas_remal_alghaib_arifle_Velko_50rnd_MRCO_lxWS_saber_light_lxWS","AET_F_nomas_remal_alghaib_hgun_ACPC2_F","Put","Throw"};
    items[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACE_CableTie","ACE_CableTie","ACE_Canteen","ACE_SpraypaintBlack","ACE_SpraypaintBlue","ACE_SpraypaintGreen","ACE_SpraypaintRed","ACE_SpraypaintWhite","ACE_SpraypaintYellow","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet"};
    respawnItems[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","ACE_CableTie","ACE_CableTie","ACE_Canteen","ACE_SpraypaintBlack","ACE_SpraypaintBlue","ACE_SpraypaintGreen","ACE_SpraypaintRed","ACE_SpraypaintWhite","ACE_SpraypaintYellow","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet"};
    magazines[]={"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","acex_intelitems_notepad","ACE_painkillers","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
    respawnMagazines[]={"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","acex_intelitems_notepad","ACE_painkillers","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc148jem","ItemGPS","Binocular","lxWS_H_PASGT_goggles_UN_F","V_lxWS_UN_Vest_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc148jem","ItemGPS","Binocular","lxWS_H_PASGT_goggles_UN_F","V_lxWS_UN_Vest_F"};
    backpack="";
  };

  class AET_F_nomas_remal_alghaib_Grenadier: B_UN_Soldier_GL_lxWS
  {
    faction="AET_F_nomas_remal_alghaib";
    side=1;
    displayName="Grenadier";
    uniformClass="U_lxWS_UN_Camo2";
    weapons[]={"AET_F_nomas_remal_alghaib_arifle_VelkoR5_GL_lxWS_saber_light_lxWS","AET_F_nomas_remal_alghaib_hgun_ACPC2_F","Put","Throw"};
    respawnWeapons[]={"AET_F_nomas_remal_alghaib_arifle_VelkoR5_GL_lxWS_saber_light_lxWS","AET_F_nomas_remal_alghaib_hgun_ACPC2_F","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","1Rnd_SmokeOrange_Grenade_shell","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell"};
    respawnMagazines[]={"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","1Rnd_SmokeOrange_Grenade_shell","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","lxWS_H_PASGT_goggles_UN_F","V_lxWS_UN_Vest_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","lxWS_H_PASGT_goggles_UN_F","V_lxWS_UN_Vest_F"};
    backpack="";
  };

  class AET_F_nomas_remal_alghaib_Rifleman: B_UN_Soldier_lxWS
  {
    faction="AET_F_nomas_remal_alghaib";
    side=1;
    displayName="Rifleman";
    uniformClass="U_lxWS_UN_Camo3";
    weapons[]={"AET_F_nomas_remal_alghaib_arifle_Velko_50rnd_ACO_lxWS_saber_light_lxWS","AET_F_nomas_remal_alghaib_hgun_ACPC2_F","Put","Throw"};
    respawnWeapons[]={"AET_F_nomas_remal_alghaib_arifle_Velko_50rnd_ACO_lxWS_saber_light_lxWS","AET_F_nomas_remal_alghaib_hgun_ACPC2_F","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
    respawnMagazines[]={"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","lxWS_H_ssh40_un","V_lxWS_UN_Vest_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","lxWS_H_ssh40_un","V_lxWS_UN_Vest_F"};
    backpack="";
  };

  class AET_F_nomas_remal_alghaib_Autorifleman: B_UN_soldier_AR_lxWS
  {
    faction="AET_F_nomas_remal_alghaib";
    side=1;
    displayName="Autorifleman";
    uniformClass="U_lxWS_UN_Camo3";
    weapons[]={"AET_F_nomas_remal_alghaib_LMG_Mk200_F_saber_light_lxWS","AET_F_nomas_remal_alghaib_hgun_ACPC2_F","Put","Throw"};
    respawnWeapons[]={"AET_F_nomas_remal_alghaib_LMG_Mk200_F_saber_light_lxWS","AET_F_nomas_remal_alghaib_hgun_ACPC2_F","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellGreen","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","Chemlight_green","Chemlight_green"};
    respawnMagazines[]={"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellGreen","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","Chemlight_green","Chemlight_green"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","lxWS_H_PASGT_goggles_UN_F","V_lxWS_UN_Vest_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","lxWS_H_PASGT_goggles_UN_F","V_lxWS_UN_Vest_F"};
    backpack="";
  };

  class AET_F_nomas_remal_alghaib_Medic: B_UN_medic_lxWS
  {
    faction="AET_F_nomas_remal_alghaib";
    side=1;
    displayName="Medic";
    uniformClass="U_lxWS_UN_Camo3";
    weapons[]={"AET_F_nomas_remal_alghaib_arifle_Velko_lxWS_saber_light_lxWS","AET_F_nomas_remal_alghaib_hgun_ACPC2_F","Put","Throw"};
    respawnWeapons[]={"AET_F_nomas_remal_alghaib_arifle_Velko_lxWS_saber_light_lxWS","AET_F_nomas_remal_alghaib_hgun_ACPC2_F","Put","Throw"};
    items[]={"FirstAidKit","Medikit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","Medikit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
    magazines[]={"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
    respawnMagazines[]={"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","lxWS_H_ssh40_un","V_lxWS_UN_Vest_Lite_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","lxWS_H_ssh40_un","V_lxWS_UN_Vest_Lite_F"};
    backpack="AET_F_nomas_remal_alghaib_Medic_pack";
  };

  class AET_F_nomas_remal_alghaib_Machine_Gunner: B_UN_HeavyGunner_lxWS
  {
    faction="AET_F_nomas_remal_alghaib";
    side=1;
    displayName="Machine Gunner";
    uniformClass="U_lxWS_UN_Camo3";
    weapons[]={"AET_F_nomas_remal_alghaib_LMG_S77_Compact_MRCO_lxWS_saber_light_lxWSoptic_MRCO","AET_F_nomas_remal_alghaib_hgun_ACPC2_F","Put","Throw"};
    respawnWeapons[]={"AET_F_nomas_remal_alghaib_LMG_S77_Compact_MRCO_lxWS_saber_light_lxWSoptic_MRCO","AET_F_nomas_remal_alghaib_hgun_ACPC2_F","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"Chemlight_green","HandGrenade","SmokeShellGreen","100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_Tracer_lxWS","9Rnd_45ACP_Mag","SmokeShell","Chemlight_green"};
    respawnMagazines[]={"Chemlight_green","HandGrenade","SmokeShellGreen","100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_Tracer_lxWS","9Rnd_45ACP_Mag","SmokeShell","Chemlight_green"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","lxWS_H_PASGT_goggles_UN_F","V_lxWS_UN_Vest_F","G_Bandanna_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","lxWS_H_PASGT_goggles_UN_F","V_lxWS_UN_Vest_F","G_Bandanna_tan"};
    backpack="";
  };

  class AET_F_nomas_remal_alghaib_Anti_Tank_Specialist: B_UN_soldier_LAT2_lxWS
  {
    faction="AET_F_nomas_remal_alghaib";
    side=1;
    displayName="Anti-Tank Specialist";
    uniformClass="U_lxWS_UN_Camo3";
    weapons[]={"AET_F_nomas_remal_alghaib_arifle_Velko_50rnd_ACO_lxWS_saber_light_lxWS","AET_F_nomas_remal_alghaib_launch_RPG32_tan_lxWS","AET_F_nomas_remal_alghaib_hgun_ACPC2_F","Put","Throw"};
    respawnWeapons[]={"AET_F_nomas_remal_alghaib_arifle_Velko_50rnd_ACO_lxWS_saber_light_lxWS","AET_F_nomas_remal_alghaib_launch_RPG32_tan_lxWS","AET_F_nomas_remal_alghaib_hgun_ACPC2_F","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","RPG32_F","RPG32_F","RPG32_HE_F","RPG32_HE_F"};
    respawnMagazines[]={"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","RPG32_F","RPG32_F","RPG32_HE_F","RPG32_HE_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","lxWS_H_ssh40_un","V_lxWS_UN_Vest_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","lxWS_H_ssh40_un","V_lxWS_UN_Vest_F"};
    backpack="AET_F_nomas_remal_alghaib_Anti_Tank_Specialist_pack";
  };


  class AET_F_nomas_remal_alghaib_Medic_pack: B_AssaultPack_rgr_Medic
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


  class AET_F_nomas_remal_alghaib_Anti_Tank_Specialist_pack: B_FieldPack_cbr_LAT2_lxWS
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
    class Operation_Remal_AlGhaib
    {
      name="Operation Remal Al-Ghaib";

      class Infantry
      {
        name="Infantry";

        class AET_F_nomas_remal_alghaib_B_Rifle_Squad_AT
        {
          name="Rifle Squad (AT)";
          faction="AET_F_nomas_remal_alghaib";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="AET_F_nomas_remal_alghaib_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="AET_F_nomas_remal_alghaib_Grenadier";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="AET_F_nomas_remal_alghaib_Medic";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=1;
            vehicle="AET_F_nomas_remal_alghaib_Anti_Tank_Specialist";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=1;
            vehicle="AET_F_nomas_remal_alghaib_Autorifleman";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=1;
            vehicle="AET_F_nomas_remal_alghaib_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=1;
            vehicle="AET_F_nomas_remal_alghaib_Rifleman";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit7
          {
            side=1;
            vehicle="AET_F_nomas_remal_alghaib_Rifleman";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
          class Unit8
          {
            side=1;
            vehicle="AET_F_nomas_remal_alghaib_Rifleman";
            rank="PRIVATE";
            position[]={0,-40,0};
          };
        };
        class AET_F_nomas_remal_alghaib_B_Rifle_Squad
        {
          name="Rifle Squad";
          faction="AET_F_nomas_remal_alghaib";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="AET_F_nomas_remal_alghaib_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="AET_F_nomas_remal_alghaib_Grenadier";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="AET_F_nomas_remal_alghaib_Medic";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=1;
            vehicle="AET_F_nomas_remal_alghaib_Autorifleman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=1;
            vehicle="AET_F_nomas_remal_alghaib_Machine_Gunner";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=1;
            vehicle="AET_F_nomas_remal_alghaib_Rifleman";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=1;
            vehicle="AET_F_nomas_remal_alghaib_Rifleman";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit7
          {
            side=1;
            vehicle="AET_F_nomas_remal_alghaib_Rifleman";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
          class Unit8
          {
            side=1;
            vehicle="AET_F_nomas_remal_alghaib_Rifleman";
            rank="PRIVATE";
            position[]={0,-40,0};
          };
        };
        class AET_F_nomas_remal_alghaib_B_Fire_Team
        {
          name="Fire Team";
          faction="AET_F_nomas_remal_alghaib";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="AET_F_nomas_remal_alghaib_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="AET_F_nomas_remal_alghaib_Grenadier";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="AET_F_nomas_remal_alghaib_Rifleman";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=1;
            vehicle="AET_F_nomas_remal_alghaib_Rifleman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class AET_F_nomas_remal_alghaib_B_Patrol
        {
          name="Patrol";
          faction="AET_F_nomas_remal_alghaib";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="AET_F_nomas_remal_alghaib_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="AET_F_nomas_remal_alghaib_Rifleman";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
        };
        class AET_F_nomas_remal_alghaib_B_Fire_Team_AR
        {
          name="Fire Team (AR)";
          faction="AET_F_nomas_remal_alghaib";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="AET_F_nomas_remal_alghaib_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="AET_F_nomas_remal_alghaib_Autorifleman";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="AET_F_nomas_remal_alghaib_Rifleman";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=1;
            vehicle="AET_F_nomas_remal_alghaib_Rifleman";
            rank="PRIVATE";
            position[]={0,-15,0};
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
