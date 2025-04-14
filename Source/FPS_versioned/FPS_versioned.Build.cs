// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FPS_versioned : ModuleRules
{
	public FPS_versioned(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
