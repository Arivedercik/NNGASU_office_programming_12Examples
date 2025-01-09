//Вычисление максимального числа  

#include <iostream>

using std::cin;
using std::cout;

int example10()
{
    int a, max = 0;
    do
    {
        cout << "Ввести число" << '\n';
        cin >> a;

        if (a > max)
            max = a;
    } 
    while (a > 0);

    cout << "Максимальное число = " << max << '\n';

    return 0;
}