#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_JiraBookmarksFlag

#include "Basic.hpp"

#include "BP_JiraBookmarksFlag_classes.hpp"
#include "BP_JiraBookmarksFlag_parameters.hpp"


namespace SDK
{

// Function BP_JiraBookmarksFlag.BP_JiraBookmarksFlag_C.ExecuteUbergraph_BP_JiraBookmarksFlag
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_JiraBookmarksFlag_C::ExecuteUbergraph_BP_JiraBookmarksFlag(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JiraBookmarksFlag_C", "ExecuteUbergraph_BP_JiraBookmarksFlag");

	Params::BP_JiraBookmarksFlag_C_ExecuteUbergraph_BP_JiraBookmarksFlag Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_JiraBookmarksFlag.BP_JiraBookmarksFlag_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_JiraBookmarksFlag_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JiraBookmarksFlag_C", "ReceiveTick");

	Params::BP_JiraBookmarksFlag_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

