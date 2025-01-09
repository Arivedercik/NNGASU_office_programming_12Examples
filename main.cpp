#include <iostream>

using std::cin;
using std::cout;

int example1();
int example2();
int example3();
int example4();
int example5();
int example6();
int example7();
int example8();
int example9();
int example10();
int example11();
int example12();

int main()
{
    setlocale(LC_ALL, "Rus");

    int answer = 0;

    while (1)
    {
        cout << "\nВведите номер задания (примера). Если необходимо выйти, нажмите 0" << '\n';
        cin >> answer;

        switch (answer)
        {
        case 0:        
            return 0;
        case 1:   
            example1();           
            break;
        case 2:
            example2();
            break;
        case 3:
            example3();
            break;
        case 4:
            example4();
            break;
        case 5:
            example5();
            break;
        case 6:
            example6();
            break;
        case 7:
            example7();
            break;
        case 8:
            example8();
            break;
        case 9:
            example9();
            break;
        case 10:
            example10();
            break;
        case 11:
            example11();
            break;
        case 12:
            example12();
            break;
        default:
            cout << "Неверный ввод" << '\n';
            break;
        }
    }    

    return 0;
}