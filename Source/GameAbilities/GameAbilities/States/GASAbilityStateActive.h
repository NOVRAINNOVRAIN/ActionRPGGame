// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GASAbilityState.h"
#include "GASAbilityStateActive.generated.h"

UCLASS(DefaultToInstanced, EditInLineNew, Within = GASAbility)
class UGASAbilityStateActive : public UGASAbilityState
{
	GENERATED_UCLASS_BODY()
public:
	virtual void BeginState(UGASAbilityState* PrevState) override;
	virtual void EndState() override;
	virtual void BeginActionSequence() override;
	virtual void EndActionSequence() override;
};