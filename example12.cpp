//Операторы break и continue

#include <iostream>

using std::cin;
using std::cout;

int example12()
{
    cout << "Оператор break" << '\n';
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
            break;

        cout << i << '\t';
    }

    cout << "\nОператор continue" << '\n';
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
            continue;

        cout << i << '\t';
    }

    cout << '\n';

    return 0;
}