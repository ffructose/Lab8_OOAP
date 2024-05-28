
#include <iostream>

class MapPoint {
public:
    virtual ~MapPoint() {}
    virtual void displayPointOnMap() const = 0;
};

class Attraction : public MapPoint {
public:
    void displayPointOnMap() const override {
        std::cout << "На мапi вiдображається точка типу Атракцiон" << std::endl;
    }
};

class Restaurant : public MapPoint {
public:
    void displayPointOnMap() const override {
        std::cout << "На мапi вiдображається точка типу Ресторан" << std::endl;
    }
};

class Toilet : public MapPoint {
public:
    void displayPointOnMap() const override {
        std::cout << "На мапi вiдображається точка типу Туалет" << std::endl;
    }
};

