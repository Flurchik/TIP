#include <iostream>
#include <string>
using namespace std;

string intToRoman(int X) {
    //Рекурсивное решение с помощью условного оператора if
    if (X >= 1000) return "M" + intToRoman(X - 1000);
    if (X >= 900)  return "CM" + intToRoman(X - 900);
    if (X >= 500)  return "D" + intToRoman(X - 500);
    if (X >= 400)  return "CD" + intToRoman(X - 400);
    if (X >= 100)  return "C" + intToRoman(X - 100);
    if (X >= 90)   return "XC" + intToRoman(X - 90);
    if (X >= 50)   return "L" + intToRoman(X - 50);
    if (X >= 40)   return "XL" + intToRoman(X - 40);
    if (X >= 10)   return "X" + intToRoman(X - 10);
    if (X >= 9)    return "IX" + intToRoman(X - 9);
    if (X >= 5)    return "V" + intToRoman(X - 5);
    if (X >= 4)    return "IV" + intToRoman(X - 4);
    if (X >= 1)    return "I" + intToRoman(X - 1);
    return "";
}

int main() {
    setlocale(LC_ALL, "Russian");
    int X;

    cout << "Введите число: ";
    cin >> X;

    cout << "Римское число: " << intToRoman(X) << endl;
    return 0;
}
