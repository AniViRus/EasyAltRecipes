// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyAltRecipes/Public/EasyAltRecipesLib.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEasyAltRecipesLib() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	EASYALTRECIPES_API UClass* Z_Construct_UClass_UEasyAltRecipesLib();
	EASYALTRECIPES_API UClass* Z_Construct_UClass_UEasyAltRecipesLib_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_EasyAltRecipes();
// End Cross Module References
	DEFINE_FUNCTION(UEasyAltRecipesLib::execGetCDO)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=UEasyAltRecipesLib::GetCDO(Z_Param_Class);
		P_NATIVE_END;
	}
	void UEasyAltRecipesLib::StaticRegisterNativesUEasyAltRecipesLib()
	{
		UClass* Class = UEasyAltRecipesLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCDO", &UEasyAltRecipesLib::execGetCDO },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEasyAltRecipesLib_GetCDO_Statics
	{
		struct EasyAltRecipesLib_eventGetCDO_Parms
		{
			UClass* Class;
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEasyAltRecipesLib_GetCDO_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyAltRecipesLib_eventGetCDO_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEasyAltRecipesLib_GetCDO_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyAltRecipesLib_eventGetCDO_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyAltRecipesLib_GetCDO_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyAltRecipesLib_GetCDO_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyAltRecipesLib_GetCDO_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEasyAltRecipesLib_GetCDO_Statics::Function_MetaDataParams[] = {
		{ "Category", "EasyAlt Recipes" },
		{ "DeterminesOutputType", "Class" },
		{ "ModuleRelativePath", "Public/EasyAltRecipesLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyAltRecipesLib_GetCDO_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyAltRecipesLib, nullptr, "GetCDO", nullptr, nullptr, Z_Construct_UFunction_UEasyAltRecipesLib_GetCDO_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyAltRecipesLib_GetCDO_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyAltRecipesLib_GetCDO_Statics::EasyAltRecipesLib_eventGetCDO_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyAltRecipesLib_GetCDO_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyAltRecipesLib_GetCDO_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyAltRecipesLib_GetCDO_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEasyAltRecipesLib_GetCDO_Statics::EasyAltRecipesLib_eventGetCDO_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEasyAltRecipesLib_GetCDO()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyAltRecipesLib_GetCDO_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEasyAltRecipesLib);
	UClass* Z_Construct_UClass_UEasyAltRecipesLib_NoRegister()
	{
		return UEasyAltRecipesLib::StaticClass();
	}
	struct Z_Construct_UClass_UEasyAltRecipesLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEasyAltRecipesLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyAltRecipes,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEasyAltRecipesLib_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UEasyAltRecipesLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEasyAltRecipesLib_GetCDO, "GetCDO" }, // 1372528558
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEasyAltRecipesLib_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEasyAltRecipesLib_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EasyAltRecipesLib.h" },
		{ "ModuleRelativePath", "Public/EasyAltRecipesLib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEasyAltRecipesLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEasyAltRecipesLib>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEasyAltRecipesLib_Statics::ClassParams = {
		&UEasyAltRecipesLib::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEasyAltRecipesLib_Statics::Class_MetaDataParams), Z_Construct_UClass_UEasyAltRecipesLib_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UEasyAltRecipesLib()
	{
		if (!Z_Registration_Info_UClass_UEasyAltRecipesLib.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEasyAltRecipesLib.OuterSingleton, Z_Construct_UClass_UEasyAltRecipesLib_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEasyAltRecipesLib.OuterSingleton;
	}
	template<> EASYALTRECIPES_API UClass* StaticClass<UEasyAltRecipesLib>()
	{
		return UEasyAltRecipesLib::StaticClass();
	}
	UEasyAltRecipesLib::UEasyAltRecipesLib(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEasyAltRecipesLib);
	UEasyAltRecipesLib::~UEasyAltRecipesLib() {}
	struct Z_CompiledInDeferFile_FID_SatisfactoryModding_SatisfactoryModLoader_Mods_EasyAltRecipes_Source_EasyAltRecipes_Public_EasyAltRecipesLib_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SatisfactoryModding_SatisfactoryModLoader_Mods_EasyAltRecipes_Source_EasyAltRecipes_Public_EasyAltRecipesLib_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEasyAltRecipesLib, UEasyAltRecipesLib::StaticClass, TEXT("UEasyAltRecipesLib"), &Z_Registration_Info_UClass_UEasyAltRecipesLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEasyAltRecipesLib), 1844919933U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SatisfactoryModding_SatisfactoryModLoader_Mods_EasyAltRecipes_Source_EasyAltRecipes_Public_EasyAltRecipesLib_h_1095825203(TEXT("/Script/EasyAltRecipes"),
		Z_CompiledInDeferFile_FID_SatisfactoryModding_SatisfactoryModLoader_Mods_EasyAltRecipes_Source_EasyAltRecipes_Public_EasyAltRecipesLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SatisfactoryModding_SatisfactoryModLoader_Mods_EasyAltRecipes_Source_EasyAltRecipes_Public_EasyAltRecipesLib_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
