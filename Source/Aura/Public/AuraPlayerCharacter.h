#pragma once

#include "CoreMinimal.h"
#include "AuraCharacterBase.h"
#include "AuraPlayerCharacter.generated.h"

UCLASS()
class AURA_API AAuraPlayerCharacter : public AAuraCharacterBase
{
	GENERATED_BODY()
protected:

public:
	void BeginPlay() override;
};
