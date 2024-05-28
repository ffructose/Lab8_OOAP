#pragma once
#include <iostream>
using namespace std;
#include "Map.h"

class Singleton {
private:
    static Singleton* p_instance;
    Map* map;

    // constr and prysvoyennia operator are not available for users
    Singleton() {
        cout << "Мапа створена." << endl;
        map = new Map();
    }
    Singleton(const Singleton&);
    Singleton& operator=(Singleton&);
public:
    static Singleton* getInstance() {
        if (!p_instance) {
            p_instance = new Singleton();
        }
        return p_instance;
    }
    Map* getMap() {
        return map;
    }
};
