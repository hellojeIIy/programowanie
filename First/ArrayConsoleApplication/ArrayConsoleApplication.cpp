#include <iostream>

void task1()
{
	const int SIZE = 5;
		int numbers[SIZE];
		for (int i = 0; i < SIZE; i++)
		{
			std::cout << "Podaj liczbe\n";
			std::cin >> numbers[i];
		}
		for (int i = SIZE - 1; i >= 0; i--)
		{
			std::cout << "Podana liczba" << numbers[i] << "\n";
		}
}
void task2()
{
	const int UPPER_RANGE = 100;
	const int LOWER_RANGE = 5;

	const int SIZE_OF_ARRAY = 5;
	int numbers[SIZE_OF_ARRAY];

	srand(time(NULL));

	for (int i = 0; i <  SIZE_OF_ARRAY; i++)
	{
		numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
 	}

	for (int i = 0; i < SIZE_OF_ARRAY; i++)
	{
		std::cout << numbers[i] << ", ";
		std::cout << "\n";
	}

	//szukanie maksimum
	int max = numbers[0];
	for (size_t i = 1; i < SIZE_OF_ARRAY; i++)
		if (numbers[i] > max)
			max = numbers[i];

	//szukanie maksimum
	int min = numbers[0];
	for (size_t i = 1; i < SIZE_OF_ARRAY; i++)
		if (numbers[i] < max)
			min = numbers[i];
}
int main()
{
	task1()
}