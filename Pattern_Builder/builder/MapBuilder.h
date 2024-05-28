#pragma once
#include "MapPoint.h"
using namespace std;

// base class MapBuilder for step by step build 

class MapBuilder {
protected:
    Map* map;
public:
    MapBuilder() : map(0) {}
    virtual ~MapBuilder() {}
    virtual void createMap() {}
    virtual void buildAttraction() {}
    virtual void buildRestaurant() {}
    virtual void buildToilet() {}
    virtual Map* getMap() { return map; }
};

// map with all point but without restaurants
class NoRestaurantMapBuilder : public MapBuilder {
public:
    void createMap() { map = new Map; }
    void buildAttraction() override { map->va.push_back(Attraction()); }
    void buildToilet() override { map->vt.push_back(Toilet()); }
};

// map with all point but without toilets
class NoToiletMapBuilder : public MapBuilder {
public:
    void createMap() { map = new Map; }
    void buildAttraction() override { map->va.push_back(Attraction()); }
    void buildRestaurant() override { map->vr.push_back(Restaurant()); }
};

