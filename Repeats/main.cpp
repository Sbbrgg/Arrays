#include <iostream>
using namespace std;
//#define DEFAULT_ARRAY
void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 10;
#ifdef DEFAULT_ARRAY
	int arr[n], minRand = 0, maxRand = 5;
	for (int i = 0; i < n; i++) arr[i] = rand() % (maxRand - minRand) + minRand;
	for (int i = 0; i < n; i++) cout << arr[i] << " ";
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		int count = 1;
		bool isChecked = false;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				isChecked = true;
				break;
			}
		}
		if (!isChecked)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (arr[i] == arr[j])
				{
					count++;
				}
			}
		}
		cout << "Число: " << arr[i] << " повторяется " << count << endl;
	}
#endif // DEFAULT_ARRAY
	int arr[n][2] = { {0} }, minRand = 0, maxRand = 5;
	for (int i = 0; i < n; i++)
	{
		arr[i][0] = rand() % (maxRand - minRand) + minRand;
		arr[i][1] = 1;
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i][1] > 0)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (arr[i][0] == arr[j][0])
				{
					arr[i][1]++;
					arr[j][1] = 0;
				}
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i][1] > 0)
		{
			cout << "Число: " << arr[i][0] << " повторяется " << arr[i][1] << endl;
		}
	}
}