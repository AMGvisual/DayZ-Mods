class CfgPatches
{
	class Durability_Fixes
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Melee",
			"DZ_Weapons_Magazines"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
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
	class HuntingKnife: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=260;  // Default: 130
				};
			};
		};
	};
	class FangeKnife: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=260;  // Default: 130
				};
			};
		};
	};
	class KukriKnife: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;  // Default: 150
				};
			};
		};
	};
	class CombatKnife: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;  // Default: 150
				};
			};
		};
	};
};
class CfgMagazines
{
	class Ammunition_Base;
	class Ammo_HuntingBolt: Ammunition_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=360;  // Default: 120
				};
			};
		};
	};
	class Ammo_ImprovisedBolt_1: Ammunition_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=195;  // Default: 65
				};
			};
		};
	};
	class Ammo_ImprovisedBolt_2: Ammunition_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=255;  // Default: 85
				};
			};
		};
	};
};