#include <iostream>
using namespace std;

#define tab "\t"

//#define HOMEWORK

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef HOMEWORK
	const int n = 10;
	int array[n] = { 0 }, minRand = 70, maxRand = 80, value = 0;
	for (int i = 0; i < n; i++)
	{
		value = rand() % (maxRand - minRand) + minRand;
		bool check = true;
		for (int j = 0; j < i; j++)
		{
			if (value == array[j])
			{
				check = false;
				i--;
				break;
			}
		}
		if (check)
		{
			array[i] = value;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}
#endif // HOMEWORK
	const int n = 10;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		bool unique;
		do
		{
			arr[i] = rand() % 10;
			unique = true;	//предположим, что сгенерировалось уникальное случайное число
							//но это нужно проверить
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}