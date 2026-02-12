#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int N;
    cout << "Введите N: ";
    cin >> N;

    double sum = 1.0; // 1=1/0!
    double x = 1.0; // 1/i!, где i = 1 от N

    for (int i = 1; i <= N; i++) {
        x /= i;
        sum += x;
    }

    cout << "Сумма = " << sum << endl;
    return 0;
}
