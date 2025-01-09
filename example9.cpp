//Вычисление суммы и количества числа  

#include <iostream>

using std::cin;
using std::cout;

int example9()
{
    long int n;
    int a, sum = 0, k = 0;

    cout << "Ввести число" << '\n';
    cin >> n;

    while (n != 0) 
    {
        a = n % 10;
        sum = sum + a;
        k = k + 1;
        n = n / 10;
    }

    cout << "Sum = " << sum << '\n';
    cout << "k = " << k << '\n';

    return 0;
}