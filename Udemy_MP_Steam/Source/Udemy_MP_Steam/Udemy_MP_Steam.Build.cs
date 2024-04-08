// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Udemy_MP_Steam : ModuleRules
{
	public Udemy_MP_Steam(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "OnlineSubsystemSteam", "OnlineSubsystem" });
    }
}
