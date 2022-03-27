class CfgPatches
{
	class TRZ_Blood
	{
		units[]=
		{
			"BloodBagIV_0Positive",
			"BloodBagIV_0Negative",
			"BloodBagIV_APositive",
			"BloodBagIV_ANegative",
			"BloodBagIV_BPositive",
			"BloodBagIV_BNegative",
			"BloodBagIV_ABPositive",
			"BloodBagIV_ABNegative"
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
	class Inventory_Base;
	class Switchable_Base;
	class Edible_Base;
	class Bottle_Base;
	class BloodBagIV: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_BloodBagIV0";
		descriptionShort="$STR_CfgVehicles_BloodBagIV1";
		model="\dz\gear\medical\BloodBag_Full_IV.p3d";
		rotationFlags=17;
		itemSize[]={2,2};
		weight=110;
		quantityBar=1;
		stackedUnit="ml";
		varQuantityInit=500;
		varQuantityMin=0;
		varQuantityMax=500;
		varQuantityDestroyOnMin=1;
		varLiquidTypeInit=4;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256";
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
								"DZ\gear\medical\data\BloodBag_Full.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\BloodBag_Full.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\BloodBag_Full_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\BloodBag_Full_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\BloodBag_Full_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class BloodBag_start
				{
					soundSet="BloodBag_start_SoundSet";
					id=201;
				};
				class BloodBag_spear
				{
					soundSet="BloodBag_spear_SoundSet";
					id=202;
				};
				class BloodBag_loop
				{
					soundSet="BloodBag_loop_SoundSet";
					id=203;
				};
				class BloodBag_loop2
				{
					soundSet="BloodBag_loop_SoundSet";
					id=204;
				};
				class BloodBag_end
				{
					soundSet="BloodBag_end_SoundSet";
					id=205;
				};
				class pickUpItem
				{
					soundSet="pickUpBloodBag_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="bloodbag_drop_SoundSet";
					id=898;
				};
			};
		};

	};
		class BloodBagIV_0Positive: BloodBagIV
	{
		displayName="$STR_CfgVehicles_BloodBagIV0";
		descriptionShort="$STR_CfgVehicles_BloodBagIV1";
		varLiquidTypeInit=1;
		scope=2;
	};
		class BloodBagIV_0Negative: BloodBagIV
	{
		displayName="$STR_CfgVehicles_BloodBagIV0";
		descriptionShort="$STR_CfgVehicles_BloodBagIV1";
		varLiquidTypeInit=2;
		scope=2;
	};
		class BloodBagIV_APositive: BloodBagIV
	{
		displayName="$STR_CfgVehicles_BloodBagIV0";
		descriptionShort="$STR_CfgVehicles_BloodBagIV1";
		varLiquidTypeInit=4;
		scope=2;
	};
		class BloodBagIV_ANegative: BloodBagIV
	{
		displayName="$STR_CfgVehicles_BloodBagIV0";
		descriptionShort="$STR_CfgVehicles_BloodBagIV1";
		varLiquidTypeInit=8;
		scope=2;
	};
		class BloodBagIV_BPositive: BloodBagIV
	{
		displayName="$STR_CfgVehicles_BloodBagIV0";
		descriptionShort="$STR_CfgVehicles_BloodBagIV1";
		varLiquidTypeInit=16;
		scope=2;
	};
		class BloodBagIV_BNegative: BloodBagIV
	{
		displayName="$STR_CfgVehicles_BloodBagIV0";
		descriptionShort="$STR_CfgVehicles_BloodBagIV1";
		varLiquidTypeInit=32;
		scope=2;
	};
		class BloodBagIV_ABPositive: BloodBagIV
	{
		displayName="$STR_CfgVehicles_BloodBagIV0";
		descriptionShort="$STR_CfgVehicles_BloodBagIV1";
		varLiquidTypeInit=64;
		scope=2;
	};
		class BloodBagIV_ABNegative: BloodBagIV
	{
		displayName="$STR_CfgVehicles_BloodBagIV0";
		descriptionShort="$STR_CfgVehicles_BloodBagIV1";
		varLiquidTypeInit=128;
		scope=2;
	};
};
