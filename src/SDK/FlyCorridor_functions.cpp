#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FlyCorridor

#include "Basic.hpp"

#include "FlyCorridor_classes.hpp"
#include "FlyCorridor_parameters.hpp"


namespace SDK
{

// Function FlyCorridor.FlyCorridorDebugComponent.HideCorridor
// (Final, Native, Public, BlueprintCallable)

void UFlyCorridorDebugComponent::HideCorridor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlyCorridorDebugComponent", "HideCorridor");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function FlyCorridor.FlyCorridorDebugComponent.HidePassedPath
// (Final, Native, Public, BlueprintCallable)

void UFlyCorridorDebugComponent::HidePassedPath()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlyCorridorDebugComponent", "HidePassedPath");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function FlyCorridor.FlyCorridorDebugComponent.ShowCorridor
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UAnimMontage*                     AnimMontage                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          StartLocation                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          EndLocation                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   DrawTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                                  ZScale                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFlyCorridorDebugComponent::ShowCorridor(const class UAnimMontage* AnimMontage, const struct FVector& StartLocation, const struct FVector& EndLocation, float DrawTime, double ZScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlyCorridorDebugComponent", "ShowCorridor");

	Params::FlyCorridorDebugComponent_ShowCorridor Parms{};

	Parms.AnimMontage = AnimMontage;
	Parms.StartLocation = std::move(StartLocation);
	Parms.EndLocation = std::move(EndLocation);
	Parms.DrawTime = DrawTime;
	Parms.ZScale = ZScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function FlyCorridor.FlyCorridorDebugComponent.ShowPassedPath
// (Final, Native, Public, BlueprintCallable)

void UFlyCorridorDebugComponent::ShowPassedPath()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlyCorridorDebugComponent", "ShowPassedPath");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

