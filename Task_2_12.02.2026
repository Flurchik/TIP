#include <iostream>
#include <string>
using namespace std;

string intToRoman(int num) {
    //Массивы с данными, где каждый элемент i соответствует своему числу в своей системе исчисления
    int value[] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 }; 
    string symbol[] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };

    string romanNum = "";

    for (int i = 0; i < 13; i++) {
        while (num >= value[i])  {
            romanNum += symbol[i];
            num -= value[i];
        }
    }
    return romanNum;
}

int main() {
    setlocale(LC_ALL, "Russian");

    int X;
    cout << "Введите число: ";
    cin >> X;

    cout << "Результат: " << intToRoman(X) << endl;

    return 0;
}
