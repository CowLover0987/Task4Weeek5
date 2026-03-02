# Task 5

* * *

## 1. Introduction

This task was to create an interaction event by either a line trace or an overlap event with a visible interaction. This is to become familiar with creating interaction events within C++, my approach to this was via totorials and cheatsheets that translate bueprint nodes that I am familiar with into code for the IDE

* * *

## 2. Implementation

I used Unreal Engine as the game engine using C++ and my IDE is Visual Studio.

First I followed a toutorial that started from the first person shooter template and added a tigger capsule to my player and a overlap event function, using that, another tutorial and Copilotfor catching my sytax and spelling errors.

The main function is within an actor class I created called TriggerPrinter which when the player enters it fires a debug message to the screen. Some issues I met along the way were that I sucsessfully made a collsion actor for my player but in order to put it on Githib I closed the editor and when I reopened it, either I had forgotten to save or I did something wrong, but my collision actor had disappeared from the content browser so in order to get a video and work of from it I had to start again but still managed to make it.

* * *

## 3. Outcome (≈150 words)

I created a C++ actor class called TriggerPrinter, within the .cpp file is where I created the function OnOverlapBegin():

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

Which fires when the Trigger actor's collision box is overlapped by another to which it then prints to the screen 'Player entered the area!'.

The collision box was also created within the .cpp file and the OverlapBegin function is bound to it.

    Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
    RootComponent = Box;
    
    Box->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    Box->SetCollisionObjectType(ECC_WorldStatic);
    Box->SetCollisionResponseToAllChannels(ECR_Ignore);
    Box->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
    
    Box->OnComponentBeginOverlap.AddDynamic(this, &ATriggerPrinter::OnOverlapBegin);

Both are declared in the .h file but the .cpp is where they are defined:

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

For aid to visual, I made the collision box visisble during game from the actor's details pannel.

[Img]

**Demonstration video link:**

[link]

* * *

## 4. Bibliography

The tutorials I used to begin understanding how to carry out this task.

_How to Create OVERLAP EVENTS in Unreal Engine 5 C++_ (2023) Directed by Keltick’s Game Dev. At: [How to Create OVERLAP EVENTS in Unreal Engine 5 C++ - YouTube](https://www.youtube.com/watch?v=9l16RdmJ4KE) (Accessed 02/03/2026).

_Unreal Engine 4 C++ Tutorial: Character Overlap Events_ (2017) Directed by Harrison McGuire. At: [Unreal Engine 4 C++ Tutorial: Character Overlap Events - YouTube](https://www.youtube.com/watch?v=84B22sP2L1M) (Accessed 02/03/2026).

* * *

## 5. AI Usage Declaration

I used Copiolet to help with sytax and spelling which were causing errors.

* * *
