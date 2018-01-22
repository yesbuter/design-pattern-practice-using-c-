#include "animal.h"
#include <iostream>
using std::cout;
using std::endl;

void SingleDog::Show()
{
    cout << "a singledog: wan wan" << endl;
}

void SingleCat::Show(){
    cout << "a singlecat: miao miao" << endl;
}

void CoupleDog::Happy()
{
    cout << "double happy dogs" << endl;
}

void CoupleCat::Happy()
{
    cout << "double happy cats" << endl;
}
