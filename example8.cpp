//Вычисление среднего арифметического четных элементов

#include <iostream>
#define n 10

using std::cin;
using std::cout;

int example8()
{
    int a, kol = 0, i;
    float sum = 0, sr;

    cout << "Ввести последовательность" << '\n';

    for (int i = 0; i < n; i++)
    {
        cout << "Введите элемент послед-ти";
        cin >> a;

        if (a % 2 == 0)
        {
            sum = sum + a;
            kol = kol + 1;
        }
    }

    sr = sum / kol;
    cout << "Среднее значение = " << sr << '\n';

    return 0;
}