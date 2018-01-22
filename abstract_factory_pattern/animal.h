/**
 ** 两种产品：猫，狗
 **/
#ifndef ANIMAL_H
#define ANIMAL_H

//宅
class SingleAnimal
{
public:
    virtual void Show() = 0;
};

//现充
class CoupleAnimal
{
public:
    virtual void Happy() = 0;
};

//单身狗
class SingleDog : public SingleAnimal
{
public:
    void Show();
};

//单身猫
class SingleCat : public SingleAnimal
{
public:
    void Show();
};

//现充狗
class CoupleDog : public CoupleAnimal
{
public:
    void Happy();
};

//现充猫
class CoupleCat : public CoupleAnimal
{
public:
    void Happy();
};
#endif
