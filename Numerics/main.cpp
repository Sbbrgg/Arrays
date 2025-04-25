#include <iostream>
using std::cout;
using std::cin;
using std::endl;
//#define HOMEWORK
//#define BINARY
void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef HOMEWORK
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
#endif // HOMEWORK
	int decimal;	//эта переменная будет хранить десятичное число, введённое пользователем
	cout << "Введите десятичное число: "; cin >> decimal;
#ifdef BINARY
	const int n = 32;	//максимальная возможная разрядность двоичного числа
	bool binary[n] = { 0 };		//этот массив будет хранить разряды двоичного числа
	int i = 0;
	for (; decimal; decimal >>= 1) // decimal > 0
		binary[i++] = decimal & 1;
	for (--i; i >= 0; i--)
	{
		cout << binary[i];
		if (i % 8 == 0)cout << " ";
		if (i % 4 == 0)cout << " ";
	}
	cout << endl;
#endif // BINARY
	const int n = 8;
	char hex[n] = {};
	int i = 0;
	for (; decimal; decimal >>= 4)
	{
		hex[i] = decimal & 15;
		hex[i++] += hex[i] < 10 ? 48 : 55;
	}

	for (--i; i >= 0; i--)
		cout << hex[i];
		//cout << (char)(hex[i] < 10 ? hex[i] + 48 : hex[i] + 55);
	cout << endl;


}