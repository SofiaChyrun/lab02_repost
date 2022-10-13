// ChyrunSofialab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lab_02.cpp
// < Чирун Софія >
// Лабораторна робота № 2
// Лінійні програми
// Варіант 18
#include<cmath>
#include <iostream>
using namespace std;

int main()
{
    double a;
    //double z1;
    double z2;

    std::cout << "a =";
    std::cin >> a;

    //z1 = (((a + 2) / sqrt(2 * a)) - (a / (sqrt(2 * a) + 2)) + (2 / (a - sqrt(2 * a)))) * ((sqrt(a) - sqrt(2)) / (a + 2));

    z2 = 1 / (sqrt(a) + sqrt(2));

    std::cout << endl;
    //std::cout << " z1 = " << z1 << endl;
    std::cout << " z2 = " << z2 << endl;

    std::cin.get();
    return 0;
}