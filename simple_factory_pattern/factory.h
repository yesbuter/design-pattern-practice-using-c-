/**
 **工厂能够生产两种动物
 **/
#ifndef FACTORY_H
#define FACTORY_H

#include "animal.h"

enum ATYPE{
    DOG ,
    CAT ,
    OTHER
};

class Factory
{
public:
    SingleAnimal* CreateSingleAnimal(enum ATYPE atype);
};

#endif
