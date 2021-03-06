// Player Controller by Jacob Tjernström

#pragma once

#include "CoreMinimal.h"
#include "CableComponent.h"
#include "MyCableComponent.generated.h"

/**
 * 
 */
UCLASS(hidecategories = (Object, Physics, Activation, "Components|Activation"), editinlinenew, meta = (BlueprintSpawnableComponent), ClassGroup = Rendering)
class NEPALVILLAGE_API UMyCableComponent : public UCableComponent
{
	GENERATED_BODY()
	
public:
	int NoOfSegments;
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	//virtual void OnConstruction() override;

	UPROPERTY(EditAnywhere, Category = "Properties", BlueprintReadWrite)
		int NumOfSegments;

protected:
	

};
