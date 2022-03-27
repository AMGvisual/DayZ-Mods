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
	class Transmitter_Base;
	class FishingRod_Base_New;
	class Pelt_Base;
	class Container_Base;
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
		itemSize[]={1,8};
	};
	class Binoculars: ItemOptics
	{
		itemSize[]={3,2};
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
	class BurlapSack: Inventory_Base
	{
		itemSize[]={2,2};
	};
	class BurlapStrip: Inventory_Base
	{
		itemSize[]={1,2};
	};
	class Netting: Inventory_Base
	{
		itemSize[]={1,3};
	};
	class Pliers: Inventory_Base
	{
		itemSize[]={1,2};
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
	};
	class Bark_ColorBase: Inventory_Base
	{
		itemSize[]={1,3};
	};
	class HandDrillKit: Inventory_Base
	{
		itemSize[]={1,3};
	};
	class Armband_ColorBase: Clothing_Base
	{
		itemSize[]={2,1};
	};
	class CargoPants_ColorBase: Clothing_Base
	{
		itemSize[]={3,2};
	};
	class TTSKOPants: Clothing_Base
	{
		itemSize[]={3,2};
	};
	class HunterPants_ColorBase: Clothing_Base
	{
		itemSize[]={3,2};
	};
	class GorkaPants_ColorBase: Clothing_Base
	{
		itemSize[]={3,2};
	};
	class PolicePantsOrel: Clothing_Base
	{
		itemSize[]={3,2};
	};
	class ParamedicPants_ColorBase: Clothing_Base
	{
		itemSize[]={3,2};
	};
	class FirefightersPants_ColorBase: Clothing_Base
	{
		itemSize[]={3,2};
	};
	class LeatherPants_ColorBase: Clothing_Base
	{
		itemSize[]={3,2};
	};
	class USMCPants_ColorBase: Clothing_Base
	{
		itemSize[]={3,2};
	};
	class BDUPants: Clothing_Base
	{
		itemSize[]={3,2};
	};
	class BeanieHat_ColorBase: Clothing_Base
	{
		itemSize[]={2,2};
	};
	class BaseballCap_ColorBase: Clothing_Base
	{
		itemSize[]={2,2};
	};
	class Shirt_ColorBase: Clothing_Base
	{
		itemSize[]={2,2};
	};
	class TShirt_ColorBase: Clothing_Base
	{
		itemSize[]={2,2};
	};
	class Hoodie_ColorBase: Clothing_Base
	{
		itemSize[]={3,2};
	};
	class TacticalShirt_ColorBase: Clothing_Base
	{
		itemSize[]={3,2};
	};
	class HikingJacket_ColorBase: Clothing_Base
	{
		itemSize[]={3,3};
	};
	class M65Jacket_ColorBase: Clothing_Base
	{
		itemSize[]={3,3};
	};
	class TTsKOJacket_ColorBase: Clothing_Base
	{
		itemSize[]={3,3};
	};
	class GorkaEJacket_ColorBase: Clothing_Base
	{
		itemSize[]={3,3};
	};
	class RidersJacket_ColorBase: Clothing_Base
	{
		itemSize[]={3,3};
	};
	class WoolCoat_ColorBase: Clothing_Base
	{
		itemSize[]={3,3};
	};
	class PoliceJacket: Clothing_Base
	{
		itemSize[]={3,3};
	};
	class PoliceJacketOrel: Clothing_Base
	{
		itemSize[]={3,3};
	};
	class ParamedicJacket_ColorBase: Clothing_Base
	{
		itemSize[]={3,3};
	};
	class FirefighterJacket_ColorBase: Clothing_Base
	{
		itemSize[]={3,3};
	};
	class QuiltedJacket_ColorBase: Clothing_Base
	{
		itemSize[]={3,3};
	};
	class BomberJacket_ColorBase: Clothing_Base
	{
		itemSize[]={3,3};
	};
	class HuntingJacket_ColorBase: Clothing_Base
	{
		itemSize[]={3,3};
	};
	class MedicalScrubsShirt_ColorBase: Clothing_Base
	{
		itemSize[]={2,2};
	};
	class Skirt_ColorBase: Clothing_Base
	{
		itemSize[]={2,1};
	};
	class LabCoat: Clothing_Base
	{
		itemSize[]={2,2};
	};
	class NurseDress_ColorBase: Clothing_Base
	{
		itemSize[]={2,2};
	};
	class MiniDress_ColorBase: Clothing_Base
	{
		itemSize[]={2,2};
	};
	class USMCJacket_ColorBase: Clothing_Base
	{
		itemSize[]={3,3};
	};
	class Blouse_ColorBase: Clothing_Base
	{
		itemSize[]={2,2};
	};
	class NBCHoodBase: Clothing_Base
	{
		itemSize[]={2,2};
	};
	class NBCJacketBase: Clothing_Base
	{
		itemSize[]={2,3};
	};
	class NBCPantsBase: Clothing_Base
	{
		itemSize[]={2,3};
	};
	class NBCBootsBase: Clothing_Base
	{
		itemSize[]={2,2};
	};
	class NBCGloves_ColorBase: Clothing_Base
	{
		itemSize[]={2,2};
	};
	class DenimJacket: Clothing_Base
	{
		itemSize[]={3,3};
	};
	class TelnyashkaShirt: Clothing_Base
	{
		itemSize[]={2,2};
	};
	class JumpsuitJacket_ColorBase: Clothing_Base
	{
		itemSize[]={3,3};
	};
	class BDUJacket: Clothing_Base
	{
		itemSize[]={3,3};
	};
	class Bandana_ColorBase: Clothing_Base
	{
		itemSize[]={2,1};
	};
	class BandanaHead_ColorBase: Clothing_Base
	{
		itemSize[]={2,1};
	};
	class BandanaMask_ColorBase: Clothing_Base
	{
		itemSize[]={2,1};
	};
	class ZmijovkaCap_ColorBase: Clothing_Base
	{
		itemSize[]={2,2};
	};
	class PrisonerCap: Clothing_Base
	{
		itemSize[]={2,2};
	};
	class MedicalScrubsHat_ColorBase: Clothing_Base
	{
		itemSize[]={2,1};
	};
	class BalaclavaMask_ColorBase: Clothing_Base
	{
		itemSize[]={2,2};
	};
	class Balaclava3Holes_ColorBase: Clothing_Base
	{
		itemSize[]={2,2};
	};
	class GasMask: Clothing_Base
	{
		itemSize[]={3,3};
	};
	class GP5GasMask: Clothing_Base
	{
		itemSize[]={3,3};
	};
	class SurgicalMask: Clothing_Base
	{
		itemSize[]={2,1};
	};
	class HikingBoots_ColorBase: Clothing_Base
	{
		itemSize[]={4,3};
	};
	class HikingBootsLow_ColorBase: Clothing_Base
	{
		itemSize[]={4,3};
	};
	class PlateCarrierHolster: Clothing_Base
	{
		itemSize[]={3,2};
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
};
