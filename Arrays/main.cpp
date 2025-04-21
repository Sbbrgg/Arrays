#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#define CLASSWORK
#define CHOICE_SORT
//#define DEFAULT_COUT
//#define REVERSE_COUT
//#define ARITHMETIC_MEAN_OF_ELEMENTS 
//#define MIN_MAX_OF_ELEMENTS
//#define CLICHE

void main()
{
#ifdef CLASSWORK
	setlocale(LC_ALL, "Russian");

	const int n = 50;
	int arr[n] = { 3, 5, 8 };
	arr[1] = 1024;			//обращаемся к элементу массива на запись
	//cout << arr[1] << endl;	//обращаемся к элементу на чтение
	

	int minRand, maxRand;
	//Обработка неправильного ввода
	do
	{
		cout << "Введите минимальное случайное число: "; cin >> minRand;
		cout << "Введите максимальное случайное число: "; cin >> maxRand;
		if (minRand > maxRand)cout << "Минимальное должно быть меньше максимального" << endl;
		if (minRand == maxRand) cout << "Числа должны быть разные" << endl;
	} while (minRand >= maxRand);


	//Меняем местами, если введённые числа не соответствуют
	/*if (maxRand < minRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = minRand;
	}*/

	//Заполнение массива псевдослучайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}

	//Вывод массива, заполненого псевдослучайными числами
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

#ifdef CHOICE_SORT
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
		cout << arr[i] << " ";
	}
#endif // CHOICE_SORT

#endif //CLASSWORK

	//Заготовка для следующих задач
#ifdef CLICHE
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	cout << "Введите значения массива: " << endl;
	int array[n];
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << ": "; cin >> array[i];
	}
#endif // CLICHE
#ifdef DEFAULT_COUT
	cout << "Прямой вывод массива: " << endl;
	cout << "[";
	for (int i = 0; i < n; i++)
	{
		cout << array[i];
		cout << (i == (n - 1) ? "" : " ");
	}
	cout << "]" << endl;
#endif // DEFAULT_COUT
#ifdef REVERSE_COUT
	cout << "Обратный вывод массива: " << endl;
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
	cout << "Среднее арифметическое элементов массива: " << (double)summ / n;
#endif // ARITHMETIC_MEAN_OF_ELEMENTS
#ifdef MIN_MAX_OF_ELEMENTS
	int min_element = array[0], max_element = array[0];
	for (int i = 1; i < n; i++)
	{
		array[i] < min_element ? min_element = array[i] : min_element = min_element;
		array[i] > max_element ? max_element = array[i] : max_element = max_element;
	}
	cout << "Минимальный элемент массива: " << min_element << endl;
	cout << "Максимальный элемент массива: " << max_element << endl;
#endif // MIN_MAX_OF_ELEMENTS

}