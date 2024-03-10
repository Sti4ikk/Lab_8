#include <iostream>
#include <ctime>

void inicilization(char str[3][7][12], const int A, const int B, const int C);
void checkGlasnye(char str[3][7][12], const int A, const int B, const int C);
void countOfQ(char str[3][7][12], const int A, const int B, const int C);

int main()
{
	setlocale(0, "rus");
	srand(time(0));

	const int A = 3;
	const int B = 7;
	const int C = 12;

	char str[A][B][C];

	inicilization(str, A, B, C);

	std::cout <<std::endl;
	std::cout << std::endl;
	std::cout << "Все гласные массива: ";
	
	checkGlasnye(str, A, B, C);

	std::cout << std::endl;
	std::cout << "Количество букв 'Q' в элементах с последним индексом 10: ";
	
	countOfQ(str, A, B, C);

	return 0;
}