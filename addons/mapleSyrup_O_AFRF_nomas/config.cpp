class cfgPatches
{
  class AET_F_mapleSyrup_O_AFRF_nomas
  {
	skipWhenMissingDependencies = 1;
    units[]={"AET_F_mapleSyrup_I_AFRF_T50_generic","AET_F_mapleSyrup_I_AFRF_T50_blueonblue","AET_F_mapleSyrup_I_AFRF_Ka60_c"};
    weapons[]={};
    requiredVersion=0.1;
    requiredAddons[]={"rhs_c_air", "rhs_c_a3retex", "rhs_c_a2port_air"};
  };
};

class cfgFactionClasses
{
  class AET_F_mapleSyrup_O_AFRF_nomas
  {
    icon="";
    displayName="Armed Forces of the Russian Federation - Maple Syrup";
    side=0;
    priority=1;
  };
};

class cfgVehicles
{
  class RHS_T50_vvs_generic;
  class RHS_T50_vvs_blueonblue;
  class rhs_ka60_c;
  class rhs_pchela1t_vvs;

  class AET_F_mapleSyrup_I_AFRF_T50_generic : RHS_T50_vvs_generic
  {
	displayName = "Unknown";
	faction="AET_F_mapleSyrup_O_AFRF_nomas";
  };

  class AET_F_mapleSyrup_I_AFRF_T50_blueonblue : RHS_T50_vvs_blueonblue
  {
	displayName = "Unknown";
	faction="AET_F_mapleSyrup_O_AFRF_nomas";
  };

  class AET_F_mapleSyrup_I_AFRF_Ka60_c : rhs_ka60_c
  {
	displayName = "Unknown";
	faction="AET_F_mapleSyrup_O_AFRF_nomas";
  };

  class AET_F_mapleSyrup_O_AFRF_pachela1t : rhs_pchela1t_vvs
  {
	displayName = "Unknown";
	faction = "AET_F_mapleSyrup_O_AFRF_nomas";
  };
};