//Таблица умножения  

#include<iostream>

using std::cin;
using std::cout;

int example11()
{
    system("cls");
   
    int i, j;

    for (i = 1; i < 10; i++)
    {
        for (j = 1; j < 10; j++)
        {
            cout << i * j << '\t';           
        }
        cout << '\n';
    }

    return 0;
}