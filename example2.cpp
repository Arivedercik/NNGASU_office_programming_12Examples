//���������� ����� ����������� �����  

#include <iostream>

using std::cin;
using std::cout;

int example2()
{
    int n, a, b, sum = 0;
    cout << "������ �����" << '\n';
    cin >> n;

    a = n % 10;
    n = n / 10;
    b = n % 10;
    n = n / 10;

    sum = a + b + n;
    cout << "����� = " << sum << '\n';

    return 0;
}