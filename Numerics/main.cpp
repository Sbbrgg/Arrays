#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int number;
	cout << "Введите десятичное число: "; cin >> number; cout << endl;
	cout << "Двоичное представление числа: ";
	if (number == 0) cout << 0;
	else
	{
		int array_of_binary[32] = { 0 };
		int i = 0;
		int temp = number;
		while (temp > 0)
		{
			array_of_binary[i] = temp % 2;
			temp /= 2;
			i++;
		}
		for (int j = i - 1; j >= 0; j--)cout << array_of_binary[j];
	}
	cout << endl << "Шестнадцатиричное представление числа: ";
	if (number == 0) cout << 0;
	else 
	{
		char array_of_binary[32] = { 0 };
		int i = 0;
		int temp = number;
		while (temp > 0)
		{
			int remainder = 0;
			remainder = temp % 16;
			if (remainder < 10)
			{
				array_of_binary[i] = '0' + remainder;
			}
			else 
			{
				array_of_binary[i] = 'A' + (remainder - 10);
			}
			temp /= 16;
			i++;
		}
		for (int j = i - 1; j >= 0; j--)cout << array_of_binary[j];
	}
}