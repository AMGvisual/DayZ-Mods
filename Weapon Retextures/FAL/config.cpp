class CfgPatches
{
	class TRZ_Weapons_FAL
	{
		units[]=
		{
			"FAL_Jasper"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms_FAL"
		};
	};
};
class cfgWeapons
{
	class FAL;
	class FAL_Jasper: FAL
	{
		displayName="Jasper's FAL";
		descriptionShort="A FAL semi-automatic rifle that has clearly been through the ringer and seen better days. Barely visible and faded over time are knife carvings with the words 'Ted Jasper Keener' etched into the steel";
		scope=2;
		hiddenSelections[]={"zbytek", "camo"};
		hiddenSelectionsTextures[]=
		{
			"TheRedZone\client\assets\Weapons\Firearms\FAL\data\fal_jasper.paa",
			"TheRedZone\client\assets\Weapons\Firearms\FAL\data\fal_jasper.paa",
			"TheRedZone\client\assets\Weapons\Firearms\FAL\data\fal_jasper.paa"
		};
	};
};

			
