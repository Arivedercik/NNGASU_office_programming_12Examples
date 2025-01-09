//Вычисление корня квадратного уравнения  

#include <iostream>

using std::cin;
using std::cout;

int example5()
{
    float a, b, c, d, x, x1, x2;
    cout << "Ввести коэффициенты уравнения" << '\n';
    cin >> a >> b >> c;

    d = b * b - 4 * a * c;

    if (d == 0)
    {
        x = -b / (2 * a);
        cout << "x = " << x << '\n';
    }
    else if (d > 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);

        cout << "x1 = " << x1 << '\n';
        cout << "x2 = " << x2 << '\n';
    }
    else
        cout << "Корней нет" << '\n';

    return 0;
}