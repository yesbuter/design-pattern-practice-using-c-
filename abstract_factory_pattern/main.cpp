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
    
    list<SingleAnimal*> s_animallist;    
    list<CoupleAnimal*> c_animallist;

    list<SingleAnimal*>::iterator si;
    list<CoupleAnimal*>::iterator ci;
    /* produce animal using factory */
    cout << "input scat, ccat, sdog, cdog for animal type, or input stop to stop input:" << endl;
    while(cin >> command){
        if(command == "stop")
            break;
        else if(command == "sdog")
            s_animallist.push_back(mydogfactory->CreateSingleAnimal());
        else if(command == "cdog")
            c_animallist.push_back(mydogfactory->CreateCoupleAnimal());
        else if(command == "scat")
            s_animallist.push_back(mycatfactory->CreateSingleAnimal());
        else if(command == "ccat")
            c_animallist.push_back(mycatfactory->CreateCoupleAnimal());
        else
            cout << "don't have factory to produce " << command << endl;
    }
    /* show animal type */
    cout << "now, show single animals:" << endl;
    for(si = s_animallist.begin(); si != s_animallist.end(); ++si){
        (*si)->Show();
    }
    cout << "now, show couple animals:" << endl;
    for(ci = c_animallist.begin(); ci != c_animallist.end(); ++ci){
        (*ci)->Happy();
    }
    /* free ptr and delete node */
    for(si = s_animallist.begin(); si != s_animallist.end();){
        delete *si;
        si = s_animallist.erase(si);
    }
    for(ci = c_animallist.begin(); ci != c_animallist.end();){
        ci = c_animallist.erase(ci);
    }
    return 0;
}
