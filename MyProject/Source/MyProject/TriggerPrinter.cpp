// TriggerPrinter.cpp
#include "TriggerPrinter.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Character.h"

ATriggerPrinter::ATriggerPrinter()
{
    PrimaryActorTick.bCanEverTick = false;

    Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
    RootComponent = Box;

    Box->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    Box->SetCollisionObjectType(ECC_WorldStatic);
    Box->SetCollisionResponseToAllChannels(ECR_Ignore);
    Box->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);

    Box->OnComponentBeginOverlap.AddDynamic(this, &ATriggerPrinter::OnOverlapBegin);
}

void ATriggerPrinter::OnOverlapBegin(
    UPrimitiveComponent* OverlappedComp,
    AActor* OtherActor,
    UPrimitiveComponent* OtherComp,
    int32 OtherBodyIndex,
    bool bFromSweep,
    const FHitResult& SweepResult
)
{
    if (OtherActor && OtherActor->IsA(ACharacter::StaticClass()))
    {
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(
                -1, 2.0f, FColor::Yellow, TEXT("Player entered the area!")
            );
        }

    }
}