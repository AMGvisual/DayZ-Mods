class ItemJournal extends Container_Base
{
	ref array<string> m_AllowedCargo = {"TRZ_Playingcard_Base", "TRZ_Photograph_Base", "Paper", "WrittenNote"};  // DEFINE WHICH ITEMS CAN BE STORED IN JOURNAL
	ref array<string> m_SpecialNotAllowedCargo = {"Weapon_Base", "Bottle_Base", "Item_Base", "Edible_Base"};
	
	override bool CanReceiveItemIntoCargo (EntityAI item)
	{
		foreach( string notAllowedCargo : m_SpecialNotAllowedCargo )
		{		
			if(item.IsKindOf(notAllowedCargo))
				return false;
		}

		foreach( string allowedCargo : m_AllowedCargo )
		{		
			if(item.IsKindOf(allowedCargo))
				return true;
		}
		
		return false;
	}
	
	override bool CanSwapItemInCargo (EntityAI child_entity, EntityAI new_entity)
	{
		foreach( string notAllowedCargo : m_SpecialNotAllowedCargo )
		{		
			if(child_entity.IsKindOf(notAllowedCargo) || new_entity.IsKindOf(notAllowedCargo))
				return false;
		}
		foreach( string allowedCargo : m_AllowedCargo )
		{		
			if(child_entity.IsKindOf(allowedCargo) && new_entity.IsKindOf(allowedCargo))
				return true;
		}		
		return false;		
	}
}