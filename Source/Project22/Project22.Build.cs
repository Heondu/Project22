// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Project22 : ModuleRules
{
	public Project22(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
