// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lyttleton_Tunnel/MyCharacterDesktop.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCharacterDesktop() {}
// Cross Module References
	LYTTLETON_TUNNEL_API UClass* Z_Construct_UClass_AMyCharacterDesktop_NoRegister();
	LYTTLETON_TUNNEL_API UClass* Z_Construct_UClass_AMyCharacterDesktop();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Lyttleton_Tunnel();
// End Cross Module References
	void AMyCharacterDesktop::StaticRegisterNativesAMyCharacterDesktop()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyCharacterDesktop);
	UClass* Z_Construct_UClass_AMyCharacterDesktop_NoRegister()
	{
		return AMyCharacterDesktop::StaticClass();
	}
	struct Z_Construct_UClass_AMyCharacterDesktop_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyCharacterDesktop_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Lyttleton_Tunnel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacterDesktop_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyCharacterDesktop.h" },
		{ "ModuleRelativePath", "MyCharacterDesktop.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyCharacterDesktop_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCharacterDesktop>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyCharacterDesktop_Statics::ClassParams = {
		&AMyCharacterDesktop::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyCharacterDesktop_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterDesktop_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyCharacterDesktop()
	{
		if (!Z_Registration_Info_UClass_AMyCharacterDesktop.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyCharacterDesktop.OuterSingleton, Z_Construct_UClass_AMyCharacterDesktop_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyCharacterDesktop.OuterSingleton;
	}
	template<> LYTTLETON_TUNNEL_API UClass* StaticClass<AMyCharacterDesktop>()
	{
		return AMyCharacterDesktop::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCharacterDesktop);
	struct Z_CompiledInDeferFile_FID_Lyttleton_Tunnel_Source_Lyttleton_Tunnel_MyCharacterDesktop_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Lyttleton_Tunnel_Source_Lyttleton_Tunnel_MyCharacterDesktop_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyCharacterDesktop, AMyCharacterDesktop::StaticClass, TEXT("AMyCharacterDesktop"), &Z_Registration_Info_UClass_AMyCharacterDesktop, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyCharacterDesktop), 617520862U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Lyttleton_Tunnel_Source_Lyttleton_Tunnel_MyCharacterDesktop_h_2137171594(TEXT("/Script/Lyttleton_Tunnel"),
		Z_CompiledInDeferFile_FID_Lyttleton_Tunnel_Source_Lyttleton_Tunnel_MyCharacterDesktop_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Lyttleton_Tunnel_Source_Lyttleton_Tunnel_MyCharacterDesktop_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
