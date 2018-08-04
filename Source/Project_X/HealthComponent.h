// // Copyright Jason M Malutich 2018

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECT_X_API UHealthComponent : public UActorComponent
{
    GENERATED_BODY ( )

public:
    // Sets default values for this component's properties
    UHealthComponent ( );

    UPROPERTY ( EditAnywhere )
    int TotalHealth;

    UPROPERTY ( EditAnywhere )
    int CurrentHealth;

    bool HealthIsDepleted ( );

protected:
    // Called when the game starts
    virtual void BeginPlay ( ) override;

public:
    // Called every frame
    virtual void TickComponent ( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;



};
