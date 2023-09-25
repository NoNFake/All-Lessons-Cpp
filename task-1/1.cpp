/*
// Програма, яка друкує текст

#include <iostream>	// Дозволяє програмі відображати дані на екрані
#include <cstdint>
#include <string>


using std::cout;  // <- Програма використовує 'cout'
using std::cin;   // <- Програма використовує 'cin'
using std::endl;  // <- Програма використовує 'endl'


// Основна функцфя починає виконання програми
int main()
{	// <- Початок функції 'main' 



	std::cout << "\n-> Hi, \n-> Hallo\n\n";  // <- Відобрає повідомлення


	// Оголошення змінних

	//double - 8 byte
	//long double - 16 byte

	long double number_1; // <- Перше число 
	long double number_2; // <- Друге число
	long double sum;	  // <- Сума чисел
	long double sub;      // <- Різниця чисел
	long double mnoj;     // <- *
	// int number_1, number_2, sum; // <- Перше, друге та сумма чисел
	


	int i = 1;

	for (;; i++) {// Counter
		cout << i << ". Work:" << endl;

		cout << "Enter first integer: ";		// <- Запрос на ведення першого числа
		cin >> number_1;					// <- Введене число записується у змінну 'number_1'
		//std::cin >> number_1;

		cout << "Enter second integer: ";		// <- Запрос на ведення другого числа
		cin >> number_2;						// <- Введене число записується у змінну 'number_1'

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

		sum = number_1 + number_2;									 // <- Додавання чисел та запис результату у змінну 'sum'
		std::cout << number_1 << " + " << number_2 << " = " << sum << "\t " << "(" << sizeof(sum) << " bytes) " << std::endl;		 // <- Відображає повідомлення 'sum'
		// ^ endl - end line

		sub = number_1 - number_2;
		cout << number_1 << " - " << number_2 << " = " << sub << "\t " << "(" << sizeof(sub) << " bytes)" << endl;


		mnoj = number_1 * number_2;
		cout << number_1 << " * " << number_2 << " = " << mnoj << "\t" << "(" << sizeof(mnoj) << " bytes)\n" << endl;

		if (nums.length() == 0)
			cout << "Error\n";
	}
	//return 0;									 // <- Показує успішне завершення програми
} // <- Кінець функції 'main'
*/
