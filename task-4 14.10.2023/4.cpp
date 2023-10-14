#include <iostream>
#include <string>
//#include "windows.h";

using namespace std;

int main()
{
	while (true) {
		cin.get();
		system("cls");


		int n;
		cout << "1. \n2. \n3. \n4. \n5. \n6.\nChoose: ";
		cin >> n;


		// Task 1
		if (n == 1) {
			// 1

			cout << "1." << endl;
			int num[10] = { 0, 0, 1, 1, 1, 0, 1, 1, 1, 0 };
			int a = 0;

			for (int i = 0; i < 10; i++)
			{
				a += num[i];
			}
			cout << a << endl;

			cin.get();
		} //1 


		// Task 2
		if (n == 2) {
			//2
			cout << "2." << endl;



			int num[10] = { 1, 7, 14, 0, 9, 4, 18, 18, 2, 4 };
			int min = num[0];
			int a = 0;

			for (int i = 0; i < 10; i++) {
				if (num[i] < min) {
					min = num[i];
					a = i;
				}
			}
			cout << "Min: " << num[a] << endl;

			for (int i = 0; i < 10; i++) {
				if (num[i] > min) {
					min = num[i];
					a = i;
				}
			}
			cout << "Max: " << num[a];
			cin.get();

		} //2


		// Task 3
		if (n == 3) {
			cout << "3. " << endl;
			string cars[5] = { "Volvo", "BMW", "Ford", "Mazda", "Renault" };
			cout << cars[0];

			string a = "BMW";

			cout << "Searching car " << a << endl;
			for (int i = 0; i < 5; i++) {

				if (cars[i] == a) {
					cout << "Found!" << endl;
				}
				else
				{
					cout << "Not found! " << endl;
				}
			}
			cin.get();
		}// 3


		// Task 4
		if (n == 4) {
			int num[3][4] = {
				{1, 2, 3, 4},
				{5, 6, 7, 8},
				{9, 10, 11, 12}
			};


			int sum = 0;
			int ne_sum = 0;



			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 4; j++) {
					if (num[i][j] % 2 == 0) {
						sum++;
					}
					else
					{
						ne_sum++;
					}
				} // j
			}// i
			cout << "Parni: " << sum << endl;
			cout << "Ne parni: " << ne_sum << endl;

			cin.get();
		}// 4


		// Task 5
		if (n == 5) {
			int num[5][5] = {
				{1, 2, 3, 4, 5},
				{5, 6, 7, 8, 9,},
				{9, 4, 3, 1, 7},
				{3, 6, 3, 6, 2},
				{7, 3, 9, 1, 4}
			};

			int a = 0;
			int b = 0;

			for (int i = 0; i < 5; i++) {
				num[i][i] = 0;
			}// 1

			for (int i = 0; i < 5; i++) {
				num[i][4 - i] = 0;
			} // 2


			for (int i = 0; i < 5; i++) {
				for (int j = 0; j < 5; j++) {

					num[i][j];
					cout << num[i][j] << " ";
				}
				cout << endl;
			}



			cin.get();
		} // 5


		// Task 6
		if (n == 6) {
			int matrix_1[3][3] = {
				{1, 2, 3},
				{5, 6, 7},
				{9, 4, 3}
			};

			int matrix_2[3][3] = {
				{3, 4, 5},
				{6, 7, 3},
				{9, 5, 2}
			};

			int matrix_end[3][3];

			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++)
					matrix_end[i][j] = 0;
			}


			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					for (int k = 0; k < 3; k++) {
						matrix_end[i][j] += matrix_1[i][k] * matrix_2[k][j];
					}// k
				}// j
			}// i


			cout << "Result: " << endl;
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					cout << matrix_end[i][j] << " ";
				}
				cout << endl;
			}
			cin.get();
		}// 6




	} // whie
}// main