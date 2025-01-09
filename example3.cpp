//Найти максимальное число  

#include <iostream>

using std::cin;
using std::cout;

int example3()
{
    int a, b, c, m, max;
    cout << "Ввести три числа" << '\n';
    cin >> a >> b >> c;

    if (a > b)
        m = a;
    else
        m = b;

    if (m > c)
        max = m;
    else
        max = c;

    cout << "Max = " << max << '\n';

    return 0;
}