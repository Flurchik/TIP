#include <iostream>
#include <vector>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n, m;
    cout << "Введите n и m: ";
    cin >> n >> m;

    // Создаем двумерный массив и задаём первые элементы
    vector<vector<int>> A(n, vector<int>(m));
    for (int j = 0; j < m; j++) {
        A[0][j] = 1;
    }
    for (int i = 0; i < n; i++) {
        A[i][0] = 1;
    }

    // Заполняем ячейки остальных элементов
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            A[i][j] = A[i - 1][j] + A[i][j - 1];
        }
    }

    cout << "Полученный массив:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
