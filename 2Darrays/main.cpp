#include <iostream>
using namespace std;

//#define CLASSWORK
#define HOMEWORK

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef CLASSWORK
	cout << "2Darrays" << endl;
	const int ROWS = 3;
	const int COLS = 4;
	int arr[ROWS][COLS] =
	{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9},
	};
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
#endif // CLASSWORK
#ifdef HOMEWORK
	const int ROWS = 3, COLS = 4;
	int arr[ROWS][COLS] = { {0} }, minRand = 0, maxRand = 5, count = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() /*% (maxRand - minRand) + minRand*/;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	int summ = 0, minElement = arr[0][0], maxElement = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			summ += arr[i][j];
			count++;
			arr[i][j] < minElement ? minElement = arr[i][j] : 0;
			arr[i][j] > maxElement ? maxElement = arr[i][j] : 0;
		}
	}


	cout << "Сумма элементов массива: " << summ << endl;
	cout << "Среднее арифметическое элементов массива: " << (double)summ / count << endl;
	cout << "Минимальный элемент массива: " << minElement << endl << "Максимальный элемент массива: " << maxElement << endl;

#endif // HOMEWORK


}