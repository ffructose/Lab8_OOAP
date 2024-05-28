
#include "MapPoint.h"
using namespace std;

class Factory {
public:
    virtual ~Factory() {}
    virtual MapPoint* createMapPoint() const = 0;
};

class AttractionFactory : public Factory {
public:
    MapPoint* createMapPoint() const override {
        return new Attraction();
    }
};

class RestaurantFactory : public Factory {
public:
    MapPoint* createMapPoint() const override {
        return new Restaurant();
    }
};

class ToiletFactory : public Factory {
public:
    MapPoint* createMapPoint() const override {
        return new Toilet();
    }
};

