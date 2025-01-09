//Вычисление суммы трёхзначного числа  

#include <iostream>

using std::cin;
using std::cout;

int example2()
{
    int n, a, b, sum = 0;
    cout << "Ввести число" << '\n';
    cin >> n;

    a = n % 10;
    n = n / 10;
    b = n % 10;
    n = n / 10;

    sum = a + b + n;
    cout << "Сумма = " << sum << '\n';

    return 0;
}