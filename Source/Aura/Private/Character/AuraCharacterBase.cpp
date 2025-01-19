// Copyright Gabriel Moura


#include "Character/AuraCharacterBase.h"

AAuraCharacterBase::AAuraCharacterBase()
{
	PrimaryActorTick.bCanEverTick = false;

	Wapon = CreateDefaultSubobject<USkeletalMeshComponent>("Wapon");
	Wapon->SetupAttachment(GetMesh(), FName(TEXT("WaponHandSocket")));
	Wapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AAuraCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

