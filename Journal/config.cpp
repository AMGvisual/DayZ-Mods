class CfgPatches
{
	class Journal
	{
		units[]=
		{
			"JournalPlain"
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
	class Book_Base;
	class Container_Base;
	class ItemBook: Book_Base
	{
		itemSize[]={1,2};
		quantityShow=0;
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
								"DZ\gear\books\Data\book.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\books\Data\book.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\books\Data\book_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\books\Data\book_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\books\Data\book_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class ItemJournal: Container_Base
	{
		model="\dz\gear\books\book_kniga.p3d";
		itemSize[]={1,2};
		itemsCargoSize[]={3,4};
		weight=0.01;
		lootTag[]=
		{
			"Hygiene",
			"Civilian"
		};
		lootCategory="Medical";
		allowOwnedCargoManipulation=1;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"TheRedZone\client\assets\Books\data\book_journal.paa",  // MUST CHANGE FILEPATH
			"TheRedZone\client\assets\Books\data\book_journal.paa",
			"TheRedZone\client\assets\Books\data\book_journal.paa"
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
								"DZ\gear\books\Data\book.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\books\Data\book.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\books\Data\book_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\books\Data\book_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\books\Data\book_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class JournalPlain: ItemJournal
	{
		scope=2;
		title="Journal";
		author="Unknown";
		displayName="Journal";
		descriptionShort="A worn and weathered journal of unknown origin";
		rotationFlags=1;
        hiddenSelections[]=
        {
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"TheRedZone\client\assets\Books\data\book_journal.paa",
			"TheRedZone\client\assets\Books\data\book_journal.paa",
			"TheRedZone\client\assets\Books\data\book_journal.paa"
		};
	};
};
