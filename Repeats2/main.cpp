#include <iostream>
using namespace std;
//#define HOMEWORK
#define CLASSWORK

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef HOMEWORK
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
#endif // HOMEWORK
#ifdef CLASSWORK
	const int ROWS = 4;
	const int COLS = 4;
	int arr[ROWS][COLS];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;

	//for (int i = 0; i < ROWS; i++)
	//{
	//	for (int j = 0; j < COLS; j++)
	//	{
	//		bool met_before = false;
	//		for (int k = 0; k < i; k++)
	//		{
	//			for (int l = 0; l < (k == i ? j : COLS); l++)
	//			{
	//				if (arr[i][j] == arr[k][l])
	//				{
	//					met_before = true;
	//					break;				//прерывает текущую итерацию и все последующие
	//				}
	//			}
	//			if (met_before)break;
	//		}
	//		if (met_before)continue;		//прерывает текущую итерацию и переходит к следующей
	//		int count = 0;
	//		for (int k = i; k < ROWS; k++)
	//		{
	//			for (int l = (k == i ? j + 1 : 0); l < COLS; l++)
	//			{
	//				if (arr[i][j] == arr[k][l])count++;
	//			}
	//		}
	//		if (count)cout << "Значение " << arr[i][j] << " повторяется " << count << " раз." << endl;
	//	}
	//}
	for (int i = 0; i < ROWS * COLS; i++)
	{
		bool met_before = false;
		for (int j = 0; j < i; j++)
		{
			if (arr[0][i] == arr[0][j])
			{
				met_before = true;
				break;
			}
		}
		if (met_before)continue;
		int count = 0;
		for (int j = i + 1; j < ROWS * COLS; j++)
		{
			if (arr[0][i] == arr[0][j])count++;
		}
		if (count)cout << "Значение " << arr[0][i] << " повторяется " << count << " раз;\n";
	}
#endif // CLASSWORK

}