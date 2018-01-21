#include <iostream>
#include <string>
#include <list>
#include "factory.h"

using namespace std;

int main(){
    string command;
    ATYPE animaltype;
    Factory *myfactory = new Factory();
    
    list<SingleAnimal*> animallist;    
    list<SingleAnimal*>::iterator i;
    SingleAnimal* temp;
    /* produce core using factory */
    cout << "input cat or dog for animal type, or input stop to stop input:" << endl;
    while(cin >> command){
        if(command == "stop")
            break;
        else if(command == "dog")
            animaltype = DOG;
        else if(command == "cat")
            animaltype = CAT;
        else
            animaltype = OTHER;
        //cout << coretype << endl;
        temp = myfactory->CreateSingleAnimal(animaltype);
        if(temp != 0)
            animallist.push_back(temp);
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
    delete temp;
    return 0;
}
