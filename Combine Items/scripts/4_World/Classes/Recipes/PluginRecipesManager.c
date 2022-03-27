modded class PluginRecipesManager 
{
    override void RegisterRecipies() 
	{   
		super.RegisterRecipies();

		//Combining
		RegisterRecipe(new CombineRice);
		RegisterRecipe(new CombineLime);
		RegisterRecipe(new CombineSewingKit);
		RegisterRecipe(new CombineLeatherSewingKit);
		RegisterRecipe(new CombineCleaningKit);
		RegisterRecipe(new CombineEpoxy);
		RegisterRecipe(new CombineDuctTape);
		RegisterRecipe(new CombineAntibiotics);
		RegisterRecipe(new CombineDisinfectantSpray);
		RegisterRecipe(new CombineDisinfectantAlcohol);
		RegisterRecipe(new CombineBandages);

    }
};


