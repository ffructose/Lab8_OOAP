#pragma once
#include <iostream>
#include <vector>
#include "AllTypes.h"
using namespace std;

// class map that contains all possible types of objects on map 
// from AllTypes.h

class Map {
public:
    vector<Attraction> va;
    vector<Restaurant> vr;
    vector<Toilet> vt;

    void info() {
        int i;
        for (i = 0; i < va.size(); ++i) va[i].info();
        for (i = 0; i < vr.size(); ++i) vr[i].info();
        for (i = 0; i < vt.size(); ++i) vt[i].info();
    }
};

