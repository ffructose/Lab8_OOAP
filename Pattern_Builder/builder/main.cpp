#include <iostream>
#include "Director.h"
#include "MapBuilder.h"
using namespace std;

int main() {
    setlocale(LC_CTYPE, "ukr");
    Director director;
    NoRestaurantMapBuilder noRestsB;
    NoToiletMapBuilder noToiletsB;

    Map* noResttMap = director.createMap(noRestsB);
    Map* noToiletMap = director.createMap(noToiletsB);

    cout << "���� ��� ��������i�:" << endl;
    noResttMap->info();

    cout << endl << "���� ��� ������i�:" << endl;
    noToiletMap->info();

    return 0;
}
