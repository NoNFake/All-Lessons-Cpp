/*
// ��������, ��� ����� �����

#include <iostream>	// �������� ������� ���������� ��� �� �����
#include <cstdint>
#include <string>


using std::cout;  // <- �������� ����������� 'cout'
using std::cin;   // <- �������� ����������� 'cin'
using std::endl;  // <- �������� ����������� 'endl'


// ������� ������� ������ ��������� ��������
int main()
{	// <- ������� ������� 'main' 



	std::cout << "\n-> Hi, \n-> Hallo\n\n";  // <- ³����� �����������


	// ���������� ������

	//double - 8 byte
	//long double - 16 byte

	long double number_1; // <- ����� ����� 
	long double number_2; // <- ����� �����
	long double sum;	  // <- ���� �����
	long double sub;      // <- г����� �����
	long double mnoj;     // <- *
	// int number_1, number_2, sum; // <- �����, ����� �� ����� �����
	


	int i = 1;

	for (;; i++) {// Counter
		cout << i << ". Work:" << endl;

		cout << "Enter first integer: ";		// <- ������ �� ������� ������� �����
		cin >> number_1;					// <- ������� ����� ���������� � ����� 'number_1'
		//std::cin >> number_1;

		cout << "Enter second integer: ";		// <- ������ �� ������� ������� �����
		cin >> number_2;						// <- ������� ����� ���������� � ����� 'number_1'

		std::string nums;
		nums = number_1, number_2;

		cout << "(" << sizeof(nums) << " bytes)" << endl;

		cout << endl;
		if (nums.length() != 0)
			if (number_1 == number_2)
				std::cout << number_1 << " == " << number_2 << std::endl; // 1 == 1

		if (number_1 != number_2)
			std::cout << number_1 << " != " << number_2 << std::endl; // 1 != 0

		if (number_1 > number_2)
			std::cout << number_1 << " > " << number_2 << std::endl;  // 2 > 1

		if (number_1 < number_2)
			std::cout << number_1 << " < " << number_2 << std::endl;  // 1 < 2



		// new line
		cout << endl;

		sum = number_1 + number_2;									 // <- ��������� ����� �� ����� ���������� � ����� 'sum'
		std::cout << number_1 << " + " << number_2 << " = " << sum << "\t " << "(" << sizeof(sum) << " bytes) " << std::endl;		 // <- ³������� ����������� 'sum'
		// ^ endl - end line

		sub = number_1 - number_2;
		cout << number_1 << " - " << number_2 << " = " << sub << "\t " << "(" << sizeof(sub) << " bytes)" << endl;


		mnoj = number_1 * number_2;
		cout << number_1 << " * " << number_2 << " = " << mnoj << "\t" << "(" << sizeof(mnoj) << " bytes)\n" << endl;

		if (nums.length() == 0)
			cout << "Error\n";
	}
	//return 0;									 // <- ������ ������ ���������� ��������
} // <- ʳ���� ������� 'main'
*/
