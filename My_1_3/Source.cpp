#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	const int N = 3;
	const int M = 3;

	int matr[N][M];
	cout << "Заполните матрицу: " << endl;

	for (int i = 0; i < N; i++) {
		cout << "Введите " << i + 1 << " строку: ";
		for (int j = 0; j < M; j++)
			cin >> matr[i][j];
	}
	int opred = matr[0][0] * matr[1][1] * matr[2][2] + matr[2][0] * matr[0][1] * matr[1][2] + matr[1][0] * matr[2][1] * matr[0][2] - matr[2][0] * matr[1][1] * matr[0][2] - matr[0][0] * matr[2][1] * matr[1][2] - matr[1][0] * matr[0][1] * matr[2][2];

	cout << "Определитель указанной матрицы: " << opred;
	return 0;
}