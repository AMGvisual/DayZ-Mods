class CfgPatches
{
	class Blood_Types
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
	class BloodBagIV;
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
