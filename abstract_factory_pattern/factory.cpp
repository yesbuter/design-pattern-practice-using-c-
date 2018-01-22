#include "factory.h"

SingleDog* FactoryDog::CreateSingleAnimal()
{
    return new SingleDog();
}

CoupleDog* FactoryDog::CreateCoupleAnimal()
{
    return new CoupleDog();
}

SingleCat* FactoryCat::CreateSingleAnimal()
{
    return new SingleCat();
}

CoupleCat* FactoryCat::CreateCoupleAnimal()
{
    return new CoupleCat();
}
