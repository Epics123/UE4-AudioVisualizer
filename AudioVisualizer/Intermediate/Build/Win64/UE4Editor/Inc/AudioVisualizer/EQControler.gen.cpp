// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioVisualizer/Public/EQControler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEQControler() {}
// Cross Module References
	AUDIOVISUALIZER_API UClass* Z_Construct_UClass_AEQControler_NoRegister();
	AUDIOVISUALIZER_API UClass* Z_Construct_UClass_AEQControler();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AudioVisualizer();
	AUDIOVISUALIZER_API UFunction* Z_Construct_UFunction_AEQControler_SpawnGrid();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
// End Cross Module References
	void AEQControler::StaticRegisterNativesAEQControler()
	{
		UClass* Class = AEQControler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnGrid", &AEQControler::execSpawnGrid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEQControler_SpawnGrid_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEQControler_SpawnGrid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EQControler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEQControler_SpawnGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEQControler, nullptr, "SpawnGrid", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEQControler_SpawnGrid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEQControler_SpawnGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEQControler_SpawnGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEQControler_SpawnGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEQControler_NoRegister()
	{
		return AEQControler::StaticClass();
	}
	struct Z_Construct_UClass_AEQControler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CubeDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CubeDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cols_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Cols;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rows_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Rows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumCubes_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumCubes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEQControler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioVisualizer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEQControler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEQControler_SpawnGrid, "SpawnGrid" }, // 2652506690
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEQControler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EQControler.h" },
		{ "ModuleRelativePath", "Public/EQControler.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEQControler_Statics::NewProp_Actors_MetaData[] = {
		{ "Category", "EQControler" },
		{ "ModuleRelativePath", "Public/EQControler.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEQControler_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEQControler, Actors), METADATA_PARAMS(Z_Construct_UClass_AEQControler_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEQControler_Statics::NewProp_Actors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEQControler_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEQControler_Statics::NewProp_ActorToSpawn_MetaData[] = {
		{ "Category", "EQControler" },
		{ "ModuleRelativePath", "Public/EQControler.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEQControler_Statics::NewProp_ActorToSpawn = { "ActorToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEQControler, ActorToSpawn), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AEQControler_Statics::NewProp_ActorToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEQControler_Statics::NewProp_ActorToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEQControler_Statics::NewProp_CubeDistance_MetaData[] = {
		{ "Category", "EQControler" },
		{ "ModuleRelativePath", "Public/EQControler.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEQControler_Statics::NewProp_CubeDistance = { "CubeDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEQControler, CubeDistance), METADATA_PARAMS(Z_Construct_UClass_AEQControler_Statics::NewProp_CubeDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEQControler_Statics::NewProp_CubeDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEQControler_Statics::NewProp_Cols_MetaData[] = {
		{ "Category", "EQControler" },
		{ "ModuleRelativePath", "Public/EQControler.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AEQControler_Statics::NewProp_Cols = { "Cols", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEQControler, Cols), METADATA_PARAMS(Z_Construct_UClass_AEQControler_Statics::NewProp_Cols_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEQControler_Statics::NewProp_Cols_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEQControler_Statics::NewProp_Rows_MetaData[] = {
		{ "Category", "EQControler" },
		{ "ModuleRelativePath", "Public/EQControler.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AEQControler_Statics::NewProp_Rows = { "Rows", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEQControler, Rows), METADATA_PARAMS(Z_Construct_UClass_AEQControler_Statics::NewProp_Rows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEQControler_Statics::NewProp_Rows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEQControler_Statics::NewProp_NumCubes_MetaData[] = {
		{ "Category", "EQControler" },
		{ "ModuleRelativePath", "Public/EQControler.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AEQControler_Statics::NewProp_NumCubes = { "NumCubes", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEQControler, NumCubes), METADATA_PARAMS(Z_Construct_UClass_AEQControler_Statics::NewProp_NumCubes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEQControler_Statics::NewProp_NumCubes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEQControler_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "Category", "Audio" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EQControler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEQControler_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEQControler, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEQControler_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEQControler_Statics::NewProp_AudioComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEQControler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQControler_Statics::NewProp_Actors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQControler_Statics::NewProp_Actors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQControler_Statics::NewProp_ActorToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQControler_Statics::NewProp_CubeDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQControler_Statics::NewProp_Cols,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQControler_Statics::NewProp_Rows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQControler_Statics::NewProp_NumCubes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQControler_Statics::NewProp_AudioComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEQControler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEQControler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEQControler_Statics::ClassParams = {
		&AEQControler::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEQControler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEQControler_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEQControler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEQControler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEQControler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEQControler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEQControler, 2548981091);
	template<> AUDIOVISUALIZER_API UClass* StaticClass<AEQControler>()
	{
		return AEQControler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEQControler(Z_Construct_UClass_AEQControler, &AEQControler::StaticClass, TEXT("/Script/AudioVisualizer"), TEXT("AEQControler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEQControler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
