#include "factory.h"

SingleAnimal* Factory::CreateSingleAnimal(enum ATYPE atype)
{
    if(atype == CAT)
        return new SingleCat();
    else if(atype == DOG)
        return new SingleDog();
    else
        return 0;
}
