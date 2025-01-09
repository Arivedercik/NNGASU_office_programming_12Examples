//�������������� �������� ����� switch � ����� ����������  

#include <iostream>

using std::cin;
using std::cout;

int example7()
{
	double x, y, z;
	char op;

	cout << "������ ��� ��������" << '\n';
	cin >> x >> y;
	cout << "������ ���� �������������� ��������" << '\n';
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
		cout << "�������� ����" << '\n';
		break;
	}

    return 0;
}