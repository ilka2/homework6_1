#include <iostream>
#include <Windows.h>

using namespace std;

#define MODE 1

int add(int x, int y)
{
	return x + y;
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	
#if MODE == 0

	cout << "Работаю в режиме тренеровки." << endl;

#elif MODE == 1

	int x = 0, y = 0;

	cout << "Введите число 1: ";
	cin >> x;
	cout << endl;
	cout << "Введите число 2: ";
	cin >> y;
	cout << endl;

	cout << "Результат сложения: " << add(x, y) << endl;

#elif !defined MODE
#error Константа MODE не определена

#else

	cout << "Неизвестный режим. Завершение работы" << endl;

#endif
}