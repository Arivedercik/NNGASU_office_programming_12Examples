//���������� ���������  

#include <iostream>

using std::cin;
using std::cout;

int example4()
{
    int n, a, b;
    cout << "������ �����" << '\n';
    cin >> n;

    a = n % 10;
    b = n / 100;

    if (a == b)
        cout << n << " - ���������" << '\n';
    else
        cout << n << " - �� ���������" << '\n';

    return 0;
}