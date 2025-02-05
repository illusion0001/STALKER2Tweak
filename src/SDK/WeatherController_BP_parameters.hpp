#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WeatherController_BP

#include "Basic.hpp"


namespace SDK::Params
{

// Function WeatherController_BP.WeatherController_BP_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct WeatherController_BP_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeatherController_BP_C_ReceiveTick) == 0x000004, "Wrong alignment on WeatherController_BP_C_ReceiveTick");
static_assert(sizeof(WeatherController_BP_C_ReceiveTick) == 0x000004, "Wrong size on WeatherController_BP_C_ReceiveTick");
static_assert(offsetof(WeatherController_BP_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'WeatherController_BP_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function WeatherController_BP.WeatherController_BP_C.ExecuteUbergraph_WeatherController_BP
// 0x0008 (0x0008 - 0x0000)
struct WeatherController_BP_C_ExecuteUbergraph_WeatherController_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeatherController_BP_C_ExecuteUbergraph_WeatherController_BP) == 0x000004, "Wrong alignment on WeatherController_BP_C_ExecuteUbergraph_WeatherController_BP");
static_assert(sizeof(WeatherController_BP_C_ExecuteUbergraph_WeatherController_BP) == 0x000008, "Wrong size on WeatherController_BP_C_ExecuteUbergraph_WeatherController_BP");
static_assert(offsetof(WeatherController_BP_C_ExecuteUbergraph_WeatherController_BP, EntryPoint) == 0x000000, "Member 'WeatherController_BP_C_ExecuteUbergraph_WeatherController_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(WeatherController_BP_C_ExecuteUbergraph_WeatherController_BP, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'WeatherController_BP_C_ExecuteUbergraph_WeatherController_BP::K2Node_Event_DeltaSeconds' has a wrong offset!");

}

