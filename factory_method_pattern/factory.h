/**
 **工厂能够生产两种动物
 **/
#ifndef FACTORY_H
#define FACTORY_H

#include "animal.h"

class Factory
{
public:
    virtual SingleAnimal* CreateSingleAnimal() = 0;
};

/* 生产狗的工厂 */
class FactoryDog: public Factory
{
public:
    SingleDog* CreateSingleAnimal();
};

/* 生产猫的工厂 */
class FactoryCat: public Factory
{
public:
    SingleCat* CreateSingleAnimal();
};
#endif
