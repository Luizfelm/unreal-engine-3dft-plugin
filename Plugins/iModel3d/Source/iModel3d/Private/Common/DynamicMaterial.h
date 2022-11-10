#pragma once

#include "CoreMinimal.h"

#include "Materials/MaterialInstanceDynamic.h"

class FDynamicMaterial
{
private:
	UMaterialInstanceDynamic* Instance = nullptr;
	UMaterialInterface* BaseMaterial = nullptr;

public:
	void Initialize(UMaterialInterface* Material);

	UMaterialInstanceDynamic* Get();

	operator bool() const { return Instance ? true : false; };
};