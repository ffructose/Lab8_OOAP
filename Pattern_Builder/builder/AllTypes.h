#pragma once
#include <iostream>
using namespace std;

// classes of all possible types of objects on map

class Attraction {
public:
    void info() {
        cout << "Атракцiон" << endl;
    }
};

class Restaurant {
public:
    void info() {
        cout << "Ресторан" << endl;
    }
};

class Toilet {
public:
    void info() {
        cout << "Туалет" << endl;
    }
};

