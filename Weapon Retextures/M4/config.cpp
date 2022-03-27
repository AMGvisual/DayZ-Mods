class CfgPatches
{
	class TRZ_Weapons_Firearms_M4
	{
		units[]=
		{
			"M4A1_Spades",
			"M4A1_Jalen",
			"M4A1_FortuneAndGlory"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class M4A1;
	class M4A1_Spades: M4A1
	{
		scope=2;
		displayName="M4A1";
		descriptionShort="A well maintained and refinished custom engraved M4A1 rifle that, judging by it's condition, has clearly been used many times before and likely has great sentimental value to someone";
		hiddenSelections[]={"zbytek", "camo"};
		hiddenSelectionsTextures[]=
		{
			"TheRedZone\client\assets\Weapons\Firearms\M4\data\m4_spades.paa",
			"TheRedZone\client\assets\Weapons\Firearms\M4\data\m4_spades.paa",
			"TheRedZone\client\assets\Weapons\Firearms\M4\data\m4_spades.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\m4\data\m4_body.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\firearms\M4\Data\m4_body.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\M4\Data\m4_body.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\M4\Data\m4_body.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\M4\Data\m4_body.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\M4\Data\m4_body.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class M4A1_Jalen: M4A1
	{
		scope=2;
		displayName="Jalen's M4A1";
		descriptionShort="A well maintained and refinished M4A1 rifle with the name 'Jalen' hand carved into the steel that, judging by it's condition, has clearly been used many times before and likely has great sentimental value to someone";
		hiddenSelections[]={"zbytek", "camo"};
		hiddenSelectionsTextures[]=
		{
			"TheRedZone\client\assets\Weapons\Firearms\M4\data\m4_jalen.paa",
			"TheRedZone\client\assets\Weapons\Firearms\M4\data\m4_jalen.paa",
			"TheRedZone\client\assets\Weapons\Firearms\M4\data\m4_jalen.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\m4\data\m4_body_camo.rvmat"
		};
	};
	class M4A1_FortuneAndGlory: M4A1
	{
		scope=2;
		displayName="Fortune and Glory M4A1";
		descriptionShort="A custom painted M4A1 rifle with the words 'Fortune and Glory' hand carved into the steel";
		hiddenSelections[]={"zbytek", "camo"};
		hiddenSelectionsTextures[]=
		{
			"TheRedZone\client\assets\Weapons\Firearms\M4\data\m4_fortuneandglory.paa",
			"TheRedZone\client\assets\Weapons\Firearms\M4\data\m4_fortuneandglory.paa",
			"TheRedZone\client\assets\Weapons\Firearms\M4\data\m4_fortuneandglory.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\m4\data\m4_body_camo.rvmat"
		};
	};
};
