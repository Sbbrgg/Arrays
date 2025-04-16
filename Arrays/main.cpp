#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//#define CLASSWORK
//#define DEFAULT_COUT
//#define REVERSE_COUT
//#define ARITHMETIC_MEAN_OF_ELEMENTS 
//#define MIN_MAX_OF_ELEMENTS
void main()
{
#ifdef CLASSWORK
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n] = { 3, 5, 8 };
	arr[1] = 1024;			//���������� � �������� ������� �� ������
	cout << arr[1] << endl;	//���������� � �������� �� ������

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif //CLASSWORK
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	cout << "������� �������� �������: " << endl;
	int array[n];
	for (int i = 0; i < n; i++)
	{
		cout << i+1 << ": "; cin >> array[i];
	}
#ifdef DEFAULT_COUT
	cout << "������ ����� �������: " << endl;
	cout << "[";
	for (int i = 0; i < n; i++)
	{
		cout << array[i];
		cout << (i == (n - 1) ? "" : " ");
	}
	cout << "]" << endl;
#endif // DEFAULT_COUT
#ifdef REVERSE_COUT
	cout << "�������� ����� �������: " << endl;
	cout << "[";
	for (int i = n - 1; i >= 0; i--)
	{
		cout << array[i];
		cout << (i == 0 ? "" : " ");
	}
	cout << "]" << endl;
#endif // REVERSE_COUT
#ifdef ARITHMETIC_MEAN_OF_ELEMENTS
	int summ = 0;
	for (int i = 0; i < n; i++)
	{
		summ += array[i];
	}
	cout << "������� �������������� ��������� �������: " << summ / n;
#endif // ARITHMETIC_MEAN_OF_ELEMENTS
#ifdef MIN_MAX_OF_ELEMENTS
	int min_element = array[0], max_element = array[0];
	for (int i = 1; i < n; i++)
	{
		array[i] < min_element ? min_element = array[i] : min_element = min_element;
		array[i] > max_element ? max_element = array[i] : max_element = max_element;
	}
	cout << "����������� ������� �������: " << min_element << endl;
	cout << "������������ ������� �������: " << max_element << endl;
#endif // MIN_MAX_OF_ELEMENTS

}