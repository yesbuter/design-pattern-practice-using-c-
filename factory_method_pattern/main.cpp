/**
 **用户输入猫或狗，然后从工厂获得
 **/

#include <iostream>
#include <string>
#include <list>
#include "factory.h"

using namespace std;

int main(){
    string command;
    Factory *mydogfactory = new FactoryDog();
    Factory *mycatfactory = new FactoryCat();
    
    list<SingleAnimal*> animallist;    
    list<SingleAnimal*>::iterator i;
    /* produce animal using factory */
    cout << "input cat or dog for animal type, or input stop to stop input:" << endl;
    while(cin >> command){
        if(command == "stop")
            break;
        else if(command == "dog")
            animallist.push_back(mydogfactory->CreateSingleAnimal());
        else if(command == "cat")
            animallist.push_back(mycatfactory->CreateSingleAnimal());
        else
            cout << "don't have factory to produce " << command << endl;
    }
    /* show core type */
    cout << "now, show them:" << endl;
    for(i = animallist.begin(); i != animallist.end(); ++i){
        (*i)->Show();
    }
    /* free ptr and delete node */
    for(i = animallist.begin(); i != animallist.end();){
        delete *i;
        i = animallist.erase(i);
    }
    return 0;
}
