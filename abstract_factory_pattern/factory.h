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
    virtual CoupleAnimal* CreateCoupleAnimal() = 0;
};

/* 生产狗的工厂 */
class FactoryDog: public Factory
{
public:
    /* 生产单身狗 */
    SingleDog* CreateSingleAnimal();
    /* 生产现充狗 */
    CoupleDog* CreateCoupleAnimal();
};

/* 生产猫的工厂 */
class FactoryCat: public Factory
{
public:
    /* 生产单身猫 */
    SingleCat* CreateSingleAnimal();
    /* 生产现充猫 */
    CoupleCat* CreateCoupleAnimal();
};
#endif
