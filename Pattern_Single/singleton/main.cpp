#include <iostream>
#include "Singleton.h"

Singleton* Singleton::p_instance = 0;


int main() {
    setlocale(LC_CTYPE, "ukr");

    Singleton* s1 = Singleton::getInstance();

    Map* map = s1->getMap();
    map->addObject(new Attraction());
    map->addObject(new Restaurant());
    map->addObject(new Toilet());

    cout << "��'���� �� ���i:" << endl;
    map->showObjects();

    Singleton* s2 = Singleton::getInstance();
    Map* map2 = s2->getMap();

    if (s1 == s2) {
        cout << "������ ����i����� �������� �� ���� i ��� ����� ���������." << endl;
    }

    return 0;
}
