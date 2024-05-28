#pragma once
#include <iostream>
#include <vector>
using namespace std;

class MapObject {
public:
    virtual void info() const = 0;
    virtual ~MapObject() {}
};

class Attraction : public MapObject {
public:
    void info() const override {
        cout << "������i��" << endl;
    }
};

class Restaurant : public MapObject {
public:
    void info() const override {
        cout << "��������" << endl;
    }
};

class Toilet : public MapObject {
public:
    void info() const override {
        cout << "������" << endl;
    }
};

class Map {
public:
    vector<MapObject*> objects;

    ~Map() {
        for (auto obj : objects) {
            delete obj;
        }
    }

    void addObject(MapObject* obj) {
        objects.push_back(obj);
    }

    void showObjects() const {
        for (auto obj : objects) {
            obj->info();
        }
    }
};
