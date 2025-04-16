#include <iostream>
using namespace std;

const int n = 10;
void main()
{
	setlocale(LC_ALL, "Russian");
	int array[n] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int shift;
	cout << "Введите число, на которое сдвигаем массив: "; cin >> shift;
	int temp[9] = { 0 };
	shift %= n;
	for (int i = 0; i < shift; i++)
	{
		temp[i] = array[i];
	}
	for (int i = shift; i < n; i++)
	{
		array[i - shift] = array[i];
	}
	for (int i = 0; i < shift; i++)
	{
		array[n - shift + i] = temp[i];
	}
	cout << "[";
	for (int i = 0; i < n; i++)
	{
		cout << array[i];
		cout << (i == (n - 1) ? "": " ");
 	}
	cout << "]";
}