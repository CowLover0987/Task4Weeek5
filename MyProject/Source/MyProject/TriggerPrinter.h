// TriggerPrinter.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TriggerPrinter.generated.h"

class UBoxComponent;

UCLASS()
class ATriggerPrinter : public AActor
{
    GENERATED_BODY()

public:
    ATriggerPrinter();

protected:
    UPROPERTY(VisibleAnywhere)
    UBoxComponent* Box;

    UFUNCTION()
    void OnOverlapBegin(
        UPrimitiveComponent* OverlappedComp,
        AActor* OtherActor,
        UPrimitiveComponent* OtherComp,
        int32 OtherBodyIndex,
        bool bFromSweep,
        const FHitResult& SweepResult
    );
};