#pragma once

#include "EasyAltRecipesLib.generated.h"

UCLASS()
class EASYALTRECIPES_API UEasyAltRecipesLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category="EasyAlt Recipes", meta=(DeterminesOutputType="Class"))
	static UObject* GetCDO(UClass* Class)
	{
		if (IsValid(Class))
		{
			return Class->GetDefaultObject();
		}
		return nullptr;
	}
};
