#include <iostream>
#include "Singleton.h"

Singleton* Singleton::p_instance = 0;


int main() {
    setlocale(LC_CTYPE, "ukr");

    Singleton* Singleton1 = Singleton::getInstance();
    Singleton* Singleton2 = Singleton::getInstance();

    if (Singleton1 == Singleton2) {
        cout << "������ ����i����� �������� �� ���� i ��� ����� ���������." << endl;
    }

    return 0;
}
