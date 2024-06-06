#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InputCore

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class InputCore.InputCoreTypes
// 0x0000 (0x0030 - 0x0030)
class UInputCoreTypes final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InputCoreTypes">();
	}
	static class UInputCoreTypes* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputCoreTypes>();
	}
};
static_assert(alignof(UInputCoreTypes) == 0x000008, "Wrong alignment on UInputCoreTypes");
static_assert(sizeof(UInputCoreTypes) == 0x000030, "Wrong size on UInputCoreTypes");

}

