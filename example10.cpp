//���������� ������������� �����  

#include <iostream>

using std::cin;
using std::cout;

int example10()
{
    int a, max = 0;
    do
    {
        cout << "������ �����" << '\n';
        cin >> a;

        if (a > max)
            max = a;
    } 
    while (a > 0);

    cout << "������������ ����� = " << max << '\n';

    return 0;
}