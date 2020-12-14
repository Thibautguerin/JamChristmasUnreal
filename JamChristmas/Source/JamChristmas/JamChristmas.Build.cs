// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class JamChristmas : ModuleRules
{
	public JamChristmas(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
