#pragma once
#include "MapBuilder.h"


class Director {
public:
    Map* createMap(MapBuilder& builder) {
        builder.createMap();
        builder.buildAttraction();
        builder.buildRestaurant();
        builder.buildToilet();
        return builder.getMap();
    }
};
