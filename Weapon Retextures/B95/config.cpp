class CfgPatches
{
	class TRZ_Weapons_B95
	{
		units[]=
		{
			"B95_Green",
			"B95_Black",
			"B95_Rose",
			"B95_Walnut",
			"B95_Oak"

		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms_B95"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class Muzzle_Base;
class OpticsInfoRifle;
class cfgWeapons
{
	class B95;
	class B95_Black: B95
	{
		descriptionShort="Double-barreled break-action rifle loaded with two .308 rounds that has been spray painted black";
		scope=2;
		hiddenSelections[]={"zbytek", "camo"};
		hiddenSelectionsTextures[]=
		{
			"TheRedZone\client\assets\Weapons\Firearms\B95\data\b95_black_co.paa",
			"TheRedZone\client\assets\Weapons\Firearms\B95\data\b95_black_co.paa",
			"TheRedZone\client\assets\Weapons\Firearms\B95\data\b95_black_co.paa"
		};
		
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\B95\data\b95_painted.rvmat"
		};
	};
	class B95_Green: B95
	{
		descriptionShort="Double-barreled break-action rifle loaded with two .308 rounds that has been spray painted green";
		scope=2;
		hiddenSelections[]={"zbytek", "camo"};
		hiddenSelectionsTextures[]=
		{
			"TheRedZone\client\assets\Weapons\Firearms\B95\data\b95_green_co.paa",
			"TheRedZone\client\assets\Weapons\Firearms\B95\data\b95_green_co.paa",
			"TheRedZone\client\assets\Weapons\Firearms\B95\data\b95_green_co.paa"
		};
		
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\B95\data\b95_painted.rvmat"
		};
	};
	class B95_Rose: B95
	{
		displayname="Rose Wood B95";
		descriptionShort="Rose wood double-barreled break-action rifle loaded with two .308 rounds";
		scope=2;
		hiddenSelections[]={"zbytek", "camo"};
		hiddenSelectionsTextures[]=
		{
			"TheRedZone\client\assets\Weapons\Firearms\B95\data\b95_rose.paa",
			"TheRedZone\client\assets\Weapons\Firearms\B95\data\b95_rose.paa",
			"TheRedZone\client\assets\Weapons\Firearms\B95\data\b95_rose.paa"
		};
		
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\B95\data\b95_painted.rvmat"
		};
	};
	class B95_Walnut: B95
	{
		displayname="Walnut B95";
		descriptionShort="Walnut double-barreled break-action rifle loaded with two .308 rounds";
		scope=2;
		hiddenSelections[]={"zbytek", "camo"};
		hiddenSelectionsTextures[]=
		{
			"TheRedZone\client\assets\Weapons\Firearms\B95\data\b95_walnut.paa",
			"TheRedZone\client\assets\Weapons\Firearms\B95\data\b95_walnut.paa",
			"TheRedZone\client\assets\Weapons\Firearms\B95\data\b95_walnut.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\B95\data\b95_painted.rvmat"
		};
	};
	class B95_Oak: B95
	{
		displayname="Oak Wood B95";
		descriptionShort="Oak wood double-barreled break-action rifle loaded with two .308 rounds";
		scope=2;
		hiddenSelections[]={"zbytek", "camo"};
		hiddenSelectionsTextures[]=
		{
			"TheRedZone\client\assets\Weapons\Firearms\B95\data\b95_oak.paa",
			"TheRedZone\client\assets\Weapons\Firearms\B95\data\b95_oak.paa",
			"TheRedZone\client\assets\Weapons\Firearms\B95\data\b95_oak.paa"
		};
		
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\B95\data\b95_painted.rvmat"
		};
	};
	class B95_Marcus: B95
	{
		descriptionShort="Custom painted and engraved double-barreled break-action rifle loaded with two .308 rounds";
		scope=2;
		hiddenSelections[]={"zbytek", "camo"};
		hiddenSelectionsTextures[]=
		{
			"TheRedZone\client\assets\Weapons\Firearms\B95\data\b95_marcus.paa",
			"TheRedZone\client\assets\Weapons\Firearms\B95\data\b95_marcus.paa",
			"TheRedZone\client\assets\Weapons\Firearms\B95\data\b95_marcus.paa"
		};
		
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\B95\data\b95_painted.rvmat"
		};
	};
};

			
