//Вычисление площади круга 

#include <iostream>
#define PI 3.14

using std::cin;
using std::cout;

int example1()
{
    float r, pl;

    cout << "Ввести радиус" << '\n';
    cin >> r;

    pl = r * r * PI;

    cout << "Площадь круга = " << pl << '\n';

    return 0;
}