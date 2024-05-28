
#include <iostream>

class MapPoint {
public:
    virtual ~MapPoint() {}
    virtual void displayPointOnMap() const = 0;
};

class Attraction : public MapPoint {
public:
    void displayPointOnMap() const override {
        std::cout << "�� ���i �i����������� ����� ���� ������i��" << std::endl;
    }
};

class Restaurant : public MapPoint {
public:
    void displayPointOnMap() const override {
        std::cout << "�� ���i �i����������� ����� ���� ��������" << std::endl;
    }
};

class Toilet : public MapPoint {
public:
    void displayPointOnMap() const override {
        std::cout << "�� ���i �i����������� ����� ���� ������" << std::endl;
    }
};

