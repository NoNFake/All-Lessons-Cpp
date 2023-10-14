/*
// Ïðîãðàìà, ÿêà äðóêóº òåêñò

#include <iostream>	// Äîçâîëÿº ïðîãðàì³ â³äîáðàæàòè äàí³ íà åêðàí³
#include <cstdint>
#include <string>


using std::cout;  // <- Ïðîãðàìà âèêîðèñòîâóº 'cout'
using std::cin;   // <- Ïðîãðàìà âèêîðèñòîâóº 'cin'
using std::endl;  // <- Ïðîãðàìà âèêîðèñòîâóº 'endl'


// Îñíîâíà ôóíêöôÿ ïî÷èíàº âèêîíàííÿ ïðîãðàìè
int main()
{	// <- Ïî÷àòîê ôóíêö³¿ 'main' 



	std::cout << "\n-> Hi, \n-> Hallo\n\n";  // <- Â³äîáðàº ïîâ³äîìëåííÿ


	// Îãîëîøåííÿ çì³ííèõ

	//double - 8 byte
	//long double - 16 byte

	long double number_1; // <- Ïåðøå ÷èñëî 
	long double number_2; // <- Äðóãå ÷èñëî
	long double sum;	  // <- Ñóìà ÷èñåë
	long double sub;      // <- Ð³çíèöÿ ÷èñåë
	long double mnoj;     // <- *
	// int number_1, number_2, sum; // <- Ïåðøå, äðóãå òà ñóììà ÷èñåë
	


	int i = 1;

	for (;; i++) {// Counter
		cout << i << ". Work:" << endl;

		cout << "Enter first integer: ";		// <- Çàïðîñ íà âåäåííÿ ïåðøîãî ÷èñëà
		cin >> number_1;					// <- Ââåäåíå ÷èñëî çàïèñóºòüñÿ ó çì³ííó 'number_1'
		//std::cin >> number_1;

		cout << "Enter second integer: ";		// <- Çàïðîñ íà âåäåííÿ äðóãîãî ÷èñëà
		cin >> number_2;						// <- Ââåäåíå ÷èñëî çàïèñóºòüñÿ ó çì³ííó 'number_1'

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

		sum = number_1 + number_2;									 // <- Äîäàâàííÿ ÷èñåë òà çàïèñ ðåçóëüòàòó ó çì³ííó 'sum'
		std::cout << number_1 << " + " << number_2 << " = " << sum << "\t " << "(" << sizeof(sum) << " bytes) " << std::endl;		 // <- Â³äîáðàæàº ïîâ³äîìëåííÿ 'sum'
		// ^ endl - end line

		sub = number_1 - number_2;
		cout << number_1 << " - " << number_2 << " = " << sub << "\t " << "(" << sizeof(sub) << " bytes)" << endl;


		mnoj = number_1 * number_2;
		cout << number_1 << " * " << number_2 << " = " << mnoj << "\t" << "(" << sizeof(mnoj) << " bytes)\n" << endl;

		if (nums.length() == 0)
			cout << "Error\n";
	}
	//return 0;									 // <- Ïîêàçóº óñï³øíå çàâåðøåííÿ ïðîãðàìè
} // <- Ê³íåöü ôóíêö³¿ 'main'
*/
