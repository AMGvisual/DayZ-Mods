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
			"DZ_Weapons_Melee"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Ammunition_Base;
	class Bolt_Base;
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