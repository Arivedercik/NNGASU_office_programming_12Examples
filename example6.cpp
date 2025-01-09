//Вычисление функции  

#include <iostream>

using std::cin;
using std::cout;

int example6()
{
    int x, y;
    cout << "Ввести значение х" << '\n';
    cin >> x;

    if (x < 2)
        y = 2 * x;
    else if (x <= 4)
        y = x * x + 5;
    else
        y = x + 3;

    cout << "y = " << y << '\n';

    return 0;
}