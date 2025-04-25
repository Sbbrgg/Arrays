#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	const int ROWS = 3;
	const int COLS = 4;
	int minRand = 0, maxRand = 40;
	int arr[ROWS][COLS] = { {0} }, value, temp[ROWS * COLS] = { {0} };
	for (int i = 0; i < ROWS * COLS; i++)
	{
		value = rand() % (maxRand - minRand) + minRand;
		bool isUnique = true;

		for (int j = 0; j < i; j++)
		{
			if (temp[j] == value)
			{
				isUnique = false;
				i--;
				break;
			}
		}

		if (isUnique)
		{
			temp[i] = value;
		}
	}
	int count = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = temp[count];
			count++;
		}
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << " \t";
		}
		cout << endl;
	}
}