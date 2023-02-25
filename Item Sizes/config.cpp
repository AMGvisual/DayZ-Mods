class CfgPatches
{
	class Size_Fixes_Vanilla
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Consumables",
			"DZ_Gear_Optics",
			"DZ_Gear_Cooking",
			"DZ_Gear_Tools",
			"DZ_Characters",
			"DZ_Characters_Headgear",
			"DZ_Gear_Navigation"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class ItemOptics;
	class Switchable_Base;
	class Clothing_Base;
	class Bottle_Base;
	class Edible_Base;
	class Transmitter_Base;
	class FishingRod_Base;
	class FishingRod_Base_New;
	class ProxyAttachment_Base;
	class Pelt_Base;
	class Container_Base;
	class TentBase;
	class LargeGasCanister: Inventory_Base
	{
		itemSize[]={3,4};
	};
	class MediumGasCanister: Inventory_Base
	{
		itemSize[]={3,3};
	};
	class SmallGasCanister: Inventory_Base
	{
		itemSize[]={2,2};
	};
	class Tripod: Inventory_Base
	{
		itemSize[]={1,7};
	};
	class CookingStand: Inventory_Base
	{
		itemSize[]={1,7};
	};
	class Binoculars: ItemOptics
	{
		itemSize[]={3,2};
		weight=245;
	};
	class Flashlight: Inventory_Base
	{
		itemSize[]={2,1};
	};
	class Headtorch_ColorBase: Switchable_Base
	{
		itemSize[]={2,1};
	};
	class Rag: Inventory_Base
	{
		itemSize[]={1,2};
	};
	class Rope: Inventory_Base
	{
		itemSize[]={1,2};
	};
	class Pliers: Inventory_Base
	{
		itemSize[]={1,2};
	};
	class LeatherSewingKit: Inventory_Base
	{
		itemSize[]={3,2};
		displayName="Leather Kit";
		descriptionShort="A kit containing all the necessary tools used for tanning and stitching leather as well as patching various items";
	};
	class ImprovisedFishingRod: FishingRod_Base_New
	{
		itemSize[]={8,1};
	};
	class PortableGasLamp: Inventory_Base
	{
		itemSize[]={3,3};
	};
	class PortableGasStove: Inventory_Base
	{
		itemSize[]={3,3};
	};
	class BaseRadio: Transmitter_Base
	{
		itemSize[]={4,4};
	};
	class PersonalRadio: Transmitter_Base
	{
		itemSize[]={1,2};
		weight=0.05;
	};
	class Bark_ColorBase: Inventory_Base
	{
		itemSize[]={1,3};
	};
	class HandDrillKit: Inventory_Base
	{
		itemSize[]={1,3};
	};
	class GasMask: Clothing_Base
	{
		itemSize[]={3,3};
	};
	class GP5GasMask: Clothing_Base
	{
		itemSize[]={3,3};
	};
	class PlateCarrierHolster: Clothing_Base
	{
		itemSize[]={2,2};
	};
	class PlateCarrierPouches: Clothing_Base
	{
		itemSize[]={4,3};
	};
	class Firewood: Inventory_Base
	{
		itemSize[]={3,3};
	};
	class Heatpack: Inventory_Base
	{
		itemSize[]={1,2};
	};
	class Canteen: Bottle_Base
	{
		inventorySlot[]=
		{
			"WaterBottle",
			"Belt_Left"
		};
	};
	class Stone: Inventory_Base
	{
		itemSize[]={2,2};
	};
	class SmallStone: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Torch: Inventory_Base
	{
		itemSize[]={1,4};
	};
	class CombinationLock: Inventory_Base
	{
		itemSize[]={3,2};
	};
	class CamoNet: Inventory_Base
	{
		itemSize[]={7,2};
	};
	class ShelterBase: TentBase
	{
		itemsCargoSize[]={10,20};
	};	
	class BearPelt: Pelt_Base
	{
		itemSize[]={7,4};
	};
	class Rangefinder: ItemOptics
	{
		inventorySlot[]=
		{
			"Belt_Left"
		};
		itemSize[]={1,2};
	};
	class WoodenPlank: Inventory_Base
	{
		itemSize[]={2,6};
		varStackMax=20;
	};
	class Fabric: Inventory_Base
	{
		itemSize[]={3,4};
		varQuantityMax=20;
	};
	class FirstAidKit: Container_Base
	{
		itemSize[]={3,3};
		itemsCargoSize[]={8,4};
	};
	class Blowtorch: Inventory_Base
	{
		itemSize[]={2,3};
	};
	class TireRepairKit: Inventory_Base
	{
		itemSize[]={2,1};
	};
	class TetracyclineAntibiotics: Edible_Base
	{
		scope=2;
		displayName="Tetracycline Antibiotics";
		descriptionShort="Broad spectrum antibiotics that can be used to treat various infections and diseases";
		varQuantityInit=12;
		varQuantityMin=0;
		varQuantityMax=30;
		varStackMax=30;
		canBeSplit=1;
	};
	class CharcoalTablets: Edible_Base
	{
		scope=2;
		varQuantityInit=12;
		varQuantityMin=0;
		varQuantityMax=30;
		varStackMax=30;
		canBeSplit=1;
	};
	class PurificationTablets: Edible_Base
	{
		scope=2;
		varQuantityInit=12;
		varQuantityMin=0;
		varQuantityMax=30;
		varStackMax=30;
		canBeSplit=1;
	};
	class PainkillerTablets: Edible_Base
	{
		scope=2;
		varQuantityInit=12;
		varQuantityMin=0;
		varQuantityMax=30;
		varStackMax=30;
		canBeSplit=1;
	};
};
