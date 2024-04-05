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
	const int UPPER_RANGE = 8;
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
void task3()
{
	const int UPPER_RANGE = 8;
	const int LOWER_RANGE = 5;

	const int SIZE_OF_ARRAY = 5;
	int numbers[SIZE_OF_ARRAY];

	srand(time(NULL));

	for (int i = 0; i < SIZE_OF_ARRAY; i++)
	{
		numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
	}

	for (int i = 0; i < SIZE_OF_ARRAY; i++)
	{
		std::cout << numbers[i] << ", ";
		std::cout << "\n";
	}
	int sum = 0;
}
void task4()
{
	const int UPPER_RANGE = 8;
	const int LOWER_RANGE = 5;

	const int SIZE_OF_ARRAY = 5;
	int numbers[SIZE_OF_ARRAY];

	std::cout << "\nWersja 2\n";
	int numbersOFOccurrences[UPPER_RANGE - LOWER_RANGE + 1];
	for (int i = 0; i < UPPER_RANGE - LOWER_RANGE + 1; i++)
	{
		numbersOFOccurrences[i] = 0;
	}
	for (int j = 0; j < SIZE_OF_ARRAY; j++)
	{
		numbersOFOccurrences[numbers[j] - LOWER_RANGE]++;
	}
	for (int i = 0; i < UPPER_RANGE - LOWER_RANGE + 1; i++)
	{
		if (numbersOFOccurrences[i] = 0)
			std::cout << "liczba" << i + LOWER_RANGE << " wystapila " << numbersOFOccurrences[i] << "razy\n";
	}

}
void task5()
{
	const int UPPER_RANGE = 1000000;

	// wersja 1

	/*
	for (int numberToCheck = 2; numberToCheck <= UPPER_RANGE; UPPER_RANGE++)
	{
		bool isPrime = true;
		for (int i = 2; i <= sqrt(numberToCheck); i++)
		{
			if (numberToCheck % i == 0)
			{
				isPrime = false;
				break;
			}
		}

		if (isPrime)
		{
			std::cout << numberToCheck << ", ";
		}
		std::cout << numberToCheck << "\n";
	}
	*/

	//Wersja 2

	bool primeNumbers[UPPER_RANGE + 1];
	for (int i = 2; i < UPPER_RANGE + 1; i++)
	{
		primeNumbers[i] = true;
	}
	for (int i = 2; i < UPPER_RANGE; i++)
	{
		if (primeNumbers[i])
		{
			for (int j = i + i; j < UPPER_RANGE + 1; j = j + i)
			{
				primeNumbers[j] = false;
			}
		}
	}
	for (int i = 2; i < UPPER_RANGE + 1; i++)
	{
		if (primeNumbers[i])
			std::cout << i << ", ";
	}
	std::cout << "gotowe\n";
}

int main()
{
	//task1();
	//task2();
	//task3();
	//task4();
	task5();
}