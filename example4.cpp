//ќпределить палиндром  

#include <iostream>

using std::cin;
using std::cout;

int example4()
{
    int n, a, b;
    cout << "¬вести число" << '\n';
    cin >> n;

    a = n % 10;
    b = n / 100;

    if (a == b)
        cout << n << " - палиндром" << '\n';
    else
        cout << n << " - не палиндром" << '\n';

    return 0;
}