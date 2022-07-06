// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lyttleton_Tunnel/Lyttleton_TunnelGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyttleton_TunnelGameModeBase() {}
// Cross Module References
	LYTTLETON_TUNNEL_API UClass* Z_Construct_UClass_ALyttleton_TunnelGameModeBase_NoRegister();
	LYTTLETON_TUNNEL_API UClass* Z_Construct_UClass_ALyttleton_TunnelGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Lyttleton_Tunnel();
// End Cross Module References
	void ALyttleton_TunnelGameModeBase::StaticRegisterNativesALyttleton_TunnelGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALyttleton_TunnelGameModeBase);
	UClass* Z_Construct_UClass_ALyttleton_TunnelGameModeBase_NoRegister()
	{
		return ALyttleton_TunnelGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ALyttleton_TunnelGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALyttleton_TunnelGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Lyttleton_Tunnel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyttleton_TunnelGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Lyttleton_TunnelGameModeBase.h" },
		{ "ModuleRelativePath", "Lyttleton_TunnelGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALyttleton_TunnelGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALyttleton_TunnelGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALyttleton_TunnelGameModeBase_Statics::ClassParams = {
		&ALyttleton_TunnelGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALyttleton_TunnelGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALyttleton_TunnelGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALyttleton_TunnelGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ALyttleton_TunnelGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALyttleton_TunnelGameModeBase.OuterSingleton, Z_Construct_UClass_ALyttleton_TunnelGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALyttleton_TunnelGameModeBase.OuterSingleton;
	}
	template<> LYTTLETON_TUNNEL_API UClass* StaticClass<ALyttleton_TunnelGameModeBase>()
	{
		return ALyttleton_TunnelGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALyttleton_TunnelGameModeBase);
	struct Z_CompiledInDeferFile_FID_Lyttleton_Tunnel_Source_Lyttleton_Tunnel_Lyttleton_TunnelGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Lyttleton_Tunnel_Source_Lyttleton_Tunnel_Lyttleton_TunnelGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALyttleton_TunnelGameModeBase, ALyttleton_TunnelGameModeBase::StaticClass, TEXT("ALyttleton_TunnelGameModeBase"), &Z_Registration_Info_UClass_ALyttleton_TunnelGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALyttleton_TunnelGameModeBase), 1727875731U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Lyttleton_Tunnel_Source_Lyttleton_Tunnel_Lyttleton_TunnelGameModeBase_h_112270097(TEXT("/Script/Lyttleton_Tunnel"),
		Z_CompiledInDeferFile_FID_Lyttleton_Tunnel_Source_Lyttleton_Tunnel_Lyttleton_TunnelGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Lyttleton_Tunnel_Source_Lyttleton_Tunnel_Lyttleton_TunnelGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
