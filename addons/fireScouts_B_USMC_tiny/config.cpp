class CfgPatches
{
  class AET_F_fireScouts_B_USMC_tiny
  {
	skipWhenMissingDependencies = 1;
    units[]={"AET_F_fireScouts_B_a4e"};
    requiredVersion=0.1;
    requiredAddons[]={"A3_Data_F_AoW_Loadorder", "loadorder_f_vietnam", "vnx_build_number"};
  };
};

class CfgVehicles
{
  class vnx_b_air_a4e_usmc_cap;
  class AET_F_fireScouts_B_a4e: vnx_b_air_a4e_usmc_cap {
    memoryPointDriverOptics = "pip2_pos";
    aileronSensitivity = 1.2;
    fuelCapacity = 1250;
  };
};