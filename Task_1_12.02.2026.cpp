#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int n, m; 
	cout << "Введите два числа через пробел: ";
	cin >> n >> m; /*Присваиваем числа переменным*/

	cout << (n % m == 0 || m % n == 0); /*Выводим 0(False) или 1(True) при проверке деления*/
	return 0;
}
