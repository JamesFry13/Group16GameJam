// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BaseProj16 : ModuleRules
{
	public BaseProj16(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
