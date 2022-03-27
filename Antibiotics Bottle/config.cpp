class CfgPatches
{
	class Antibiotics_Bottle
	{
		units[]=
		{
			"AntibioticsBottle"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
	class Edible_Base;
	class AntibioticsBottle: Edible_Base
	{
		scope=2;
		displayName="Antibiotics";
		descriptionShort="A bottle of broad spectrum antibiotics that can be used to treat various infections and diseases";
		model="\dz\gear\medical\VitaminBottle.p3d";
		varQuantityInit=50;
		varQuantityMin=0;
		varQuantityMax=50;
		varQuantityDestroyOnMin=1;
		itemSize[]={1,2};
		weight=20;
		stackedUnit="pills";
		quantityBar=0;
		repairableWithKits[]={8};
		repairCosts[]={10};
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"TheRedZone\client\assets\Medical\data\antibiotics_bottle.paa",  // MUST CHANGE FILEPATH
			"TheRedZone\client\assets\Medical\data\antibiotics_bottle.paa",  
			"TheRedZone\client\assets\Medical\data\antibiotics_bottle.paa" 
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\vitamin_bottle.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\vitamin_bottle.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\vitamin_bottle_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\vitamin_bottle_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\vitamin_bottle_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Medicine
		{
			prevention=0;
			treatment=0.89999998;
			diseaseExit=1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class VitaminBottle_open
				{
					soundSet="VitaminBottle_open_SoundSet";
					id=201;
				};
				class VitaminBottle_shake
				{
					soundSet="VitaminBottle_shake_SoundSet";
					id=202;
				};
				class VitaminBottle_close
				{
					soundSet="VitaminBottle_close_SoundSet";
					id=203;
				};
				class pickUpItem
				{
					soundSet="vitaminbottle_pickup_SoundSet";
					id=797;
				};
			};
		};
	};
};
