class CfgPatches
{
	class Knife_Durability
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Melee"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class KitchenKnife: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=170;  // Default: 85
				};
			};
		};
	};
	class SteakKnife: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=130;  // Default: 65
				};
			};
		};
	};
	class StoneKnife: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=90;  // Default: 45
				};
			};
		};
	};
	class KitchenKnife: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=170;  // Default: 85
				};
			};
		};
	};
	class SteakKnife: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=130;  // Default: 65
				};
			};
		};
	};
	class StoneKnife: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=90;  // Default: 45
				};
			};
		};
	};
};
