/* 25.09.2023 */

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
	int grade;

	cout << "Enter grade: ";
	cin >> grade;

	cout << (grade >= 60 ? " Passed" : " Failed");
	return 0;
}