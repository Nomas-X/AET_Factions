# Documentation
## Description
This is the Antistasi Event Team [AET] Faction mod. It contains factions accesible in the Editor & Zeus for our operations and missions.

The mod can also be found on the [Steam Workshop](https://steamcommunity.com/sharedfiles/filedetails/?id=3539186205).
## Contribution Guide
All configs are generated using [Drongos Config Generator](https://steamcommunity.com/sharedfiles/filedetails/?id=1771335720).

When generating your configs the fields MUST be filled exactly as follows:

### "Your mod tag" Field
The field must be filled using the following template `AET_F_missionName_side_faction`.

BLUFOR = B
Independent = I
OPFOR = O
Civilian = C

Examples:

`AET_F_AthenasShield_B_AltianRebels`

`AET_F_RemalAlGhaib_I_Tura`

`AET_F_RemalAlGhaib_B_UNA`


### "Your mod name" Field
This field must be filled with the author name, using no spaces or dashes, only underscores.

Examples:

`nomas`

`esmeray`

`hombre`

### "Faction Side" Option
Select the intended side of your faction.

### "Generate Weapons" Option
Set to `True`.

### Other
1. All vehicles and units created will inherit from their base unit and vehicle they were based on, so avoid using 3CB Factions or mods known to cause issues as base units.

2. Once the faction and groups are generated, find the `name` field in them where you palced your faction name and modify it to include the mission name and remove underscores. For example `name="hombre"` becomes `name="Altian Rebels - Athena's Shield".

3. You are allowed to modify your factions if you know what you're doing, [this link](https://community.bistudio.com/wiki/Arma_3:_Characters_And_Gear_Encoding_Guide#Backpack_Configuration) for example shows how to handle inventories of vehicles.

4. Make sure to add `skipWhenMissingDependencies = 1;` to the CfgPatches at the start of the config file of each addon.

5. Weapons use one of the magazines found in the inventory of the unit, and does not care about what is in the weapon, as such always ensure to either edit the loadout config or include an extra magazine for the weapon. This will be most noticable with units that carry a launcher but no backpack.
