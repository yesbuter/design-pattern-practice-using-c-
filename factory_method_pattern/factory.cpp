#include "factory.h"

SingleDog* FactoryDog::CreateSingleAnimal()
{
    return new SingleDog();
}

SingleCat* FactoryCat::CreateSingleAnimal()
{
    return new SingleCat();
}
