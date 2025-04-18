#include <iostream>
#include <Windows.h>
using std::cout;
using std::cin;
using std::endl;

//#define HOMEWORK
#define tab "\t"

const int n = 10;
void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef HOMEWORK
	int array[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
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
		cout << (i == (n - 1) ? "" : " ");
	}
	cout << "]";
#endif // HOMEWORK
	const int n = 10;
	int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//Вывод исходного массива
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
		Sleep(500);
		system("CLS");
		//Вывод сдвинутого массива
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}
		cout << endl;
	}
}