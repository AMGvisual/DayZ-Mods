class CfgPatches
{
	class Static_Crashes
	{
		units[]={};
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
	class HouseNoDestruct;
	class Static_Wreck_UH1Y: HouseNoDestruct
	{
		scope=2;
		model="\DZ\structures\Wrecks\Aircraft\Wreck_UH1Y.p3d";
	};
	class Static_Wreck_Mi8: HouseNoDestruct
	{
		scope=2;
		model="\DZ\structures\Wrecks\Aircraft\Wreck_Mi8.p3d";
	};
	class Static_Wreck_C130J: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures\Wrecks\Aircraft\Wreck_C130J.p3d";
	};
};
