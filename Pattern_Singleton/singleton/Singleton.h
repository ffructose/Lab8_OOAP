#pragma once
#include <iostream>
using namespace std;

class Singleton {
private:
    static Singleton* p_instance;

    // constr and prysvoyennia operator are not available for users
    Singleton() { cout << "Мапа створена." << endl; }
    Singleton(const Singleton&);
    Singleton& operator=(Singleton&);
public:
    static Singleton* getInstance() {
        if (!p_instance) {
            p_instance = new Singleton();
        }
        return p_instance;
    }
};
