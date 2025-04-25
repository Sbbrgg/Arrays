#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 10;
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
			if(count > 1) cout << "Число: " << arr[i] << " повторяется " << count << endl;
		}
	}
	cout << endl << endl;
}