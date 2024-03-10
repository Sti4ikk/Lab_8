#include <iostream>
using namespace std;

void findIndex(char *str);

int main()
{
	setlocale(0, "rus");

	char str[101];
	
	cin.getline(str, 101);

	cout << "Индексы всех знаков пунктуации: ";

	findIndex(str);

	return 0;
}

void findIndex(char *str)
{
	char* p = str;
	for (int i = 0; i < 101; i++, p++)
	{
		if (*p == ',' or *p == '.' or *p == '?' or *p == '!')
		{
			cout << i << " ";
		}
	}
}