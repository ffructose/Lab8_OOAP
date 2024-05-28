#include <iostream>
#include <vector>
#include "MapPointFactory.h"

using namespace std;

int main() {
    setlocale(LC_CTYPE, "ukr");

    AttractionFactory* attractionFactory = new AttractionFactory;
    RestaurantFactory* restaurantFactory = new RestaurantFactory;
    ToiletFactory* toiletFactory = new ToiletFactory;

    vector<MapPoint*> v;
    v.push_back(attractionFactory->createMapPoint());
    v.push_back(restaurantFactory->createMapPoint());
    v.push_back(toiletFactory->createMapPoint());

    for (int i = 0; i < v.size(); i++) {
        v[i]->displayPointOnMap();
    }

    return 0;
}
