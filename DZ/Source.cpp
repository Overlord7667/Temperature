#include<iostream>
using namespace std;



void main()
{
	setlocale(LC_ALL, "Russian");
	int temperature;
	cout << "������� ����������� �������: "; cin >> temperature;
	if (temperature >= 70)
	{
		cout << "�� �� ������ �������!" << endl;
	}
	else if (temperature >= 50)
	{
		cout << "�� �� ��������" << endl;
	}
	else if (temperature >= 40)
	{
		cout << "����� �����" << endl;
	}
	else if (temperature >= 25)
	{
		cout << "�����" << endl;
	}
	else if (temperature >= 15)
	{
		cout << "�����" << endl;
	}
	else if (temperature >= 0)
	{
		cout << "���������" << endl;
	}
	else if (temperature >= -9)
	{
		cout << "���������" << endl;
	}
	else if (temperature >= -10)
	{
		cout << "�����" << endl;
	}
	else if (temperature >= -19)
	{
		cout << "�����" << endl;
	}
	else if (temperature <= -20)
	{
		cout << "������� �����" << endl;
	}
}