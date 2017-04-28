#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	cout << "\t\t\tЛоло, будь более терпеливой" << endl;
	cout << "=======================================================" << endl;

	const int n = 3;
	int massA[n][n], massB[n][n],massC[n][n];

	srand(time(NULL));

	system("color a");

	cout << "\nГенерация случайных чисел для массива A и B" << endl;
	for(int i(0); i<n; i++){
		for(int j(0); j<n; j++){
			massA[i][j] = 10 - rand() % 10 + 1;
			massB[i][j] = 10 - rand() % 10 + 1;
		}
	}

	cout << "\nВывод всех значений массива A" << endl;
	cout << "=======================================================" << endl;


	for(int i(0); i<n; i++){
		for(int j(0); j<n; j++){
			cout << massA[i][j] << "\t";
		}
		cout << endl;
	}
	
	cout << "=======================================================" << endl;

	cout << "Вывод всех значений массива A" << endl;

	for(int i(0); i<n; i++){
		for(int j(0); j<n; j++){
			cout << massB[i][j] << "\t";
		}
		cout << endl;
	}

	for (int i(0); i<n; i++) {
		for (int j(0); j<n; j++) {
			massC[i][j] = massA[i][j] * massB[j][i];
		}
	}

	cout << "Вывод всех значений массива C" << endl;
	cout << "=======================================================" << endl;
	for (int i(0); i<n; i++) {
		for (int j(0); j<n; j++) {
			cout << massC[i][j] << "\t";
		}
		cout << endl;
	}

	_getch();
}