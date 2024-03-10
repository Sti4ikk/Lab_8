#include <iostream>

void inicilization(char str[3][7][12], const int A, const int B, const int C)
{
	// инициальзаци€ массива случайными символами от A до Z
	for (int i = 0; i < A; ++i)
	{
		for (int j = 0; j < B; ++j)
		{
			for (int k = 0; k < C; ++k)
			{
				str[i][j][k] = rand() % ('Z' - 'A' + 1) + 'A';
				//std::cout << str[i][j][k] << " ";
			}
		}
	}
}

void checkGlasnye(char str[3][7][12], const int A, const int B, const int C)
{
	char* p = str[0][0];
	// проверка на гласные
	for (int i = 0; i < 3 * 7 * 12 - 1; i++, p++)
	{
		if (*p == 'A' or *p == 'E' or *p == 'Y' or *p == 'U' or *p == 'I' or *p == 'O')
		{
			std::cout << *p << " ";
		}
	}
}

void countOfQ(char str[3][7][12], const int A, const int B, const int C)
{
	// // ѕодсчет количества букв 'Q' в элементах с последним индексом 10
	int countQ = 0;
	for (int i = 0; i < A; ++i)
	{
		for (int j = 0; j < B; ++j)
		{
			if (str[i][j][C - 2] == 'Q')
			{
				countQ++;
			}
		}
	}
	std::cout << countQ;
}