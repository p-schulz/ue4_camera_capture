// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CameraCaptureToDisk/Public/CameraCaptureManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraCaptureManager() {}
// Cross Module References
	CAMERACAPTURETODISK_API UScriptStruct* Z_Construct_UScriptStruct_FRenderRequestStruct();
	UPackage* Z_Construct_UPackage__Script_CameraCaptureToDisk();
	CAMERACAPTURETODISK_API UClass* Z_Construct_UClass_ACameraCaptureManager_NoRegister();
	CAMERACAPTURETODISK_API UClass* Z_Construct_UClass_ACameraCaptureManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_ASceneCapture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
class UScriptStruct* FRenderRequestStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CAMERACAPTURETODISK_API uint32 Get_Z_Construct_UScriptStruct_FRenderRequestStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenderRequestStruct, Z_Construct_UPackage__Script_CameraCaptureToDisk(), TEXT("RenderRequestStruct"), sizeof(FRenderRequestStruct), Get_Z_Construct_UScriptStruct_FRenderRequestStruct_Hash());
	}
	return Singleton;
}
template<> CAMERACAPTURETODISK_API UScriptStruct* StaticStruct<FRenderRequestStruct>()
{
	return FRenderRequestStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRenderRequestStruct(FRenderRequestStruct::StaticStruct, TEXT("/Script/CameraCaptureToDisk"), TEXT("RenderRequestStruct"), false, nullptr, nullptr);
static struct FScriptStruct_CameraCaptureToDisk_StaticRegisterNativesFRenderRequestStruct
{
	FScriptStruct_CameraCaptureToDisk_StaticRegisterNativesFRenderRequestStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RenderRequestStruct")),new UScriptStruct::TCppStructOps<FRenderRequestStruct>);
	}
} ScriptStruct_CameraCaptureToDisk_StaticRegisterNativesFRenderRequestStruct;
	struct Z_Construct_UScriptStruct_FRenderRequestStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderRequestStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CameraCaptureManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRenderRequestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenderRequestStruct>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRenderRequestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCaptureToDisk,
		nullptr,
		&NewStructOps,
		"RenderRequestStruct",
		sizeof(FRenderRequestStruct),
		alignof(FRenderRequestStruct),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderRequestStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderRequestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRenderRequestStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRenderRequestStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CameraCaptureToDisk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RenderRequestStruct"), sizeof(FRenderRequestStruct), Get_Z_Construct_UScriptStruct_FRenderRequestStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRenderRequestStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRenderRequestStruct_Hash() { return 1044411837U; }
	DEFINE_FUNCTION(ACameraCaptureManager::execCaptureNonBlocking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CaptureNonBlocking();
		P_NATIVE_END;
	}
	void ACameraCaptureManager::StaticRegisterNativesACameraCaptureManager()
	{
		UClass* Class = ACameraCaptureManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CaptureNonBlocking", &ACameraCaptureManager::execCaptureNonBlocking },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACameraCaptureManager_CaptureNonBlocking_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACameraCaptureManager_CaptureNonBlocking_Statics::Function_MetaDataParams[] = {
		{ "Category", "ImageCapture" },
		{ "ModuleRelativePath", "Public/CameraCaptureManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACameraCaptureManager_CaptureNonBlocking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACameraCaptureManager, nullptr, "CaptureNonBlocking", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACameraCaptureManager_CaptureNonBlocking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraCaptureManager_CaptureNonBlocking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACameraCaptureManager_CaptureNonBlocking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACameraCaptureManager_CaptureNonBlocking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACameraCaptureManager_NoRegister()
	{
		return ACameraCaptureManager::StaticClass();
	}
	struct Z_Construct_UClass_ACameraCaptureManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubDirectoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SubDirectoryName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumDigits_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumDigits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FrameWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FrameHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsePNG_MetaData[];
#endif
		static void NewProp_UsePNG_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UsePNG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CaptureComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PostProcessMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerboseLogging_MetaData[];
#endif
		static void NewProp_VerboseLogging_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VerboseLogging;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACameraCaptureManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCaptureToDisk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACameraCaptureManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACameraCaptureManager_CaptureNonBlocking, "CaptureNonBlocking" }, // 979588909
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraCaptureManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CameraCaptureManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CameraCaptureManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_SubDirectoryName_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "// Captured Data Sub-Directory Name \n" },
		{ "ModuleRelativePath", "Public/CameraCaptureManager.h" },
		{ "ToolTip", "Captured Data Sub-Directory Name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_SubDirectoryName = { "SubDirectoryName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraCaptureManager, SubDirectoryName), METADATA_PARAMS(Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_SubDirectoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_SubDirectoryName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_NumDigits_MetaData[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/CameraCaptureManager.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_NumDigits = { "NumDigits", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraCaptureManager, NumDigits), METADATA_PARAMS(Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_NumDigits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_NumDigits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_FrameWidth_MetaData[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/CameraCaptureManager.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_FrameWidth = { "FrameWidth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraCaptureManager, FrameWidth), METADATA_PARAMS(Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_FrameWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_FrameWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_FrameHeight_MetaData[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/CameraCaptureManager.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_FrameHeight = { "FrameHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraCaptureManager, FrameHeight), METADATA_PARAMS(Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_FrameHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_FrameHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_UsePNG_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "// If not UsePNG, JPEG format is used (For Non-Color purposes PNG is necessary, elsewise compression will mess with labels!)\n" },
		{ "ModuleRelativePath", "Public/CameraCaptureManager.h" },
		{ "ToolTip", "If not UsePNG, JPEG format is used (For Non-Color purposes PNG is necessary, elsewise compression will mess with labels!)" },
	};
#endif
	void Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_UsePNG_SetBit(void* Obj)
	{
		((ACameraCaptureManager*)Obj)->UsePNG = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_UsePNG = { "UsePNG", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACameraCaptureManager), &Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_UsePNG_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_UsePNG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_UsePNG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_CaptureComponent_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "// Color Capture Components\n" },
		{ "ModuleRelativePath", "Public/CameraCaptureManager.h" },
		{ "ToolTip", "Color Capture Components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_CaptureComponent = { "CaptureComponent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraCaptureManager, CaptureComponent), Z_Construct_UClass_ASceneCapture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_CaptureComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_CaptureComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_PostProcessMaterial_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "// PostProcessMaterial used for segmentation\n" },
		{ "ModuleRelativePath", "Public/CameraCaptureManager.h" },
		{ "ToolTip", "PostProcessMaterial used for segmentation" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_PostProcessMaterial = { "PostProcessMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraCaptureManager, PostProcessMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_PostProcessMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_PostProcessMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_VerboseLogging_MetaData[] = {
		{ "Category", "Logging" },
		{ "ModuleRelativePath", "Public/CameraCaptureManager.h" },
	};
#endif
	void Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_VerboseLogging_SetBit(void* Obj)
	{
		((ACameraCaptureManager*)Obj)->VerboseLogging = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_VerboseLogging = { "VerboseLogging", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACameraCaptureManager), &Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_VerboseLogging_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_VerboseLogging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_VerboseLogging_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACameraCaptureManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_SubDirectoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_NumDigits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_FrameWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_FrameHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_UsePNG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_CaptureComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_PostProcessMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraCaptureManager_Statics::NewProp_VerboseLogging,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACameraCaptureManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraCaptureManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACameraCaptureManager_Statics::ClassParams = {
		&ACameraCaptureManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACameraCaptureManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACameraCaptureManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACameraCaptureManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraCaptureManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACameraCaptureManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACameraCaptureManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACameraCaptureManager, 2270691838);
	template<> CAMERACAPTURETODISK_API UClass* StaticClass<ACameraCaptureManager>()
	{
		return ACameraCaptureManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACameraCaptureManager(Z_Construct_UClass_ACameraCaptureManager, &ACameraCaptureManager::StaticClass, TEXT("/Script/CameraCaptureToDisk"), TEXT("ACameraCaptureManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraCaptureManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
