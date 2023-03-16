class CfgPatches
{
	class Admin_Crate
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
	class WoodenCrate;
	class WoodenCrate_Admin: WoodenCrate
	{
		displayName="ADMIN CRATE";
		descriptionShort="Wooden crate for admins to store lots of things";
		class Cargo
		{
			itemsCargoSize[]={10,500};
		};
	};
};