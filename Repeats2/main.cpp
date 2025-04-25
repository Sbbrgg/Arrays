#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	const int ROWS = 3;
	const int COLS = 4;
	int arr[ROWS][COLS] = { {0} }, minRand = 0, maxRand = 20, temp[ROWS * COLS];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + maxRand;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	int index = 0;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			temp[index++] = arr[i][j];
		}
	}
	for (int i = 0; i < ROWS * COLS; i++)
	{
		bool isChecked = false;

		for (int j = 0; j < i; j++)
		{
			if (temp[i] == temp[j])
			{
				isChecked = true;
				break;
			}
		}

		if (!isChecked)
		{
			int count = 1;
			for (int s = i + 1; s < ROWS * COLS; s++)
			{
				if (temp[i] == temp[s])
				{
					count++;
				}
			}
			if (count > 1)
			{
				cout << "Число: " << temp[i] << " повторяется " << count << endl;
			}
		}
	}
}