#include<iostream>
using namespace std;



void main()
{
	setlocale(LC_ALL, "Russian");
	int temperature;
	cout << "Введите температуру воздуха: "; cin >> temperature;
	if (temperature >= 70)
	{
		cout << "Вы на другой планате!" << endl;
	}
	else if (temperature >= 50)
	{
		cout << "Вы на экваторе" << endl;
	}
	else if (temperature >= 40)
	{
		cout << "Очень жарко" << endl;
	}
	else if (temperature >= 25)
	{
		cout << "Жарко" << endl;
	}
	else if (temperature >= 15)
	{
		cout << "Тепло" << endl;
	}
	else if (temperature >= 0)
	{
		cout << "Прохладно" << endl;
	}
	else if (temperature >= -9)
	{
		cout << "Прохладно" << endl;
	}
	else if (temperature >= -10)
	{
		cout << "Мороз" << endl;
	}
	else if (temperature >= -19)
	{
		cout << "Мороз" << endl;
	}
	else if (temperature <= -20)
	{
		cout << "Сильный мороз" << endl;
	}
}