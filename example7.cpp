//Арифметические операции через switch с двумя операндами  

#include <iostream>

using std::cin;
using std::cout;

int example7()
{
	double x, y, z;
	char op;

	cout << "Ввести два операнда" << '\n';
	cin >> x >> y;
	cout << "Ввести знак арифметической операции" << '\n';
	cin >> op;

	switch (op)
	{
	case '+':
		z = x + y;
		cout << "z = " << z << '\n';
		break;
	case '-':
		z = x - y;
		cout << "z = " << z << '\n';
		break;
	case '*':
		z = x * y;
		cout << "z = " << z << '\n';
		break;
	case '/':
		if (y != 0)
		{
			z = x / y;
			cout << "z = " << z << '\n';
		}		
		break;
	default:
		cout << "Неверный ввод" << '\n';
		break;
	}

    return 0;
}