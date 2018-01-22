/**
 ** 两种产品：猫，狗
 **/
#ifndef ANIMAL_H
#define ANIMAL_H

class SingleAnimal
{
public:
    virtual void Show() = 0;
};

//单身狗
class SingleDog: public SingleAnimal
{
public:
    void Show();
};

//单身猫
class SingleCat: public SingleAnimal
{
public:
    void Show();
};
#endif
