#include <iostream>
#include <cstdlib>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int i;
    
    for (;;) {
        cin.get();
        system("cls");

        int task;
        cout << "1,2:\n1. None\n2. 1 2 3 4\n3. S and P\n4. Drow\n5. Min number\n6. +, -, *\n7. R-O\n8. Write number from 1 - 9\n9. BUG\n10. None\n\n3,4:\n11. None\n12. from 56.78 to 57\n13. sum and x\n14. Money\n15. Skorost\n16. Room\n17. Circle\n18. None\n19. From 35 - 87\n20. None\n21. None\n22. Next->\nChoose task: ";
        
        cin >> task;

        if (task == 22) {
            cout << "Is next";
            
            
            
            
            cin.get();
        }





        cout << "You choose task: " << task << "\n" << endl;
        if (task) {


            if (task == 12) {
                float j = 56.78;
                int normNumb = round(j);


                cout << j << endl;
                cout << normNumb;


                cin.get();
            }

            if (task == 13) {
                int x = 1;
                int sum = 0;

                sum = sum + x;
                cout << "Sum is: " << sum;

                cin.get();

            }


            if (task == 14) {
                int money = 352;
                float procent = 0.15;
                int people = 3;
                
                float end;

                end = (352 * 1.15) / 3;
                cout << "(" << money << "*" << procent << ")" << "/" << people << "=" << end << endl;

                cin.get();
            }

            if (task == 15) {
                float S = 200;
                float V = 80;

                float T;

                T = S / V;
                cout << ": " << T;
                cin.get();

            }


            if (task == 16) {
                /*float i;
                float end;

                cout << "Write number from 35 - 87: ";
                cin >> i;

                
                end = i / 7;

                if (end == 1) {
                    cout << "Have 1";
                }

                if (end == 2) {
                    cout << "Have 2";
                }

                if (end == 5) {
                    cout << "Have 6";
                }
                
                else {
                    cout << "Didn't have 1, 2, 5";
                }*/

                double length, width, height;

                cout << "Length room: ";
                cin >> length;

                cout << "Width room: ";
                cin >> width;

                cout << "Height room: ";
                cin >> height;

                // Об`єм кімнати
                double V = length * width * height;

                // Площа кімнати
                double S = length * width;

                cout << "room volume: " << V << endl;
                cout << "Area of ​​the room: " << S << endl;





                cout << "\n" << endl;
                cin.get(); 
                


            }

            if (task == 17) {
                double R;

                cout << "Enter the radius of the circle: ";
                cin >> R;

                // Площа кола
                double area = R * R;

                // Периметр кола
                double perimetr = 2 * R;

                cout << "Area of circle: " << area << endl;
                cout << "Perimetr of circle: " << perimetr << endl;

                cout << "\n" << endl;
                cin.get();
            }

            if (task == 19) {
                int number;

                cout << "Write number from 35 - 87: ";
                cin >> number;

                float end = number / 7;
                int remainder = number % 7;

                if (remainder == 1 || remainder == 2 || remainder == 5) {
                    
                    cout << number << " / " << "7 = " << end << "\nNumber have: " << remainder << endl;
                }
                else
                {
                    cout << "Nothing";
                }

                cout << "\n" << endl;
                cin.get();


            }
             
            if (task == 20) {
                int number;

                cout << "Enter a three-digit number: ";
                cin >> number;

                if (number >= 100 || number <= 999) {
                    // Сотні
                    int dig1 = number / 100;

                    // Десяті 
                    int dig2 = (number / 10) % 10;

                    // Одиниці
                    int dig3 = number % 10;



                    int end = dig1 * dig2 * dig3;

                    cout << dig1 << " * " << dig2 << " * " << dig3 << " = " << end << endl;


                }
                else {
                    cout << "The entered number is not a three-digit number.";
                }

                


                cout << "\n" << endl;
                cin.get();
            }




            if (task == 21) {

            }






            ////////////////////////////////////////////
            if (task == 1) {
                cout << "I didn't have task 1 (" << endl;

                cin.get();
            }
            
            if (task == 2) {
                // task 2 
                cout << "Task 2\n\n";

                for (i = 1; i <= 4; ++i)
                    cout << i << "   ";
                cout << endl;
                cin.get();
            }

            if (task == 3) {
                // task 3
                cout << "\n\nTask 3\n";
                int width;
                int height;
                int S; // <- Площа
                int P; // <- Периметер

                cout << "<--> Width: ";
                cin >> width;

                cout << "| | Height: ";
                cin >> height;

                P = (width + height) * 2;
                cout << "P: " << P << "cm" << endl;

                S = width * height;
                cout << "S: " << S << "cm^2" << endl;

                cin.get();
            }

            if (task == 4) {
                cout << "\n\nTask 4\n";

                // Квадрат
                cout << "*********\n*       *\n*       *\n*       *\n*       *\n*       *\n*       *\n*       *\n*       *\n*       *\n*********\n\n";

                // Овал
                cout << "  ***  \n *   *\n*     *\n*     *\n*     *\n*     *\n*     *\n *   * \n  ***   \n\n";

                // Стрілка
                cout << "  *\n *** \n*****\n  *\n  *\n  *\n  *\n  *\n  *\n\n";

                // Ромб
                cout << "    *\n   *  *\n  *    *\n *      *\n*        *\n *      *\n  *    *\n   *  *\n    *\n";

                cin.get();
            }

            if (task == 5) {
                cout << "\n\nTask 5\n";
                int number1;
                int number2;
                int number3;
                int min;

                cout << "First number: ";
                cin >> number1;

                cout << "Second number: ";
                cin >> number2;

                cout << "Third number: ";
                cin >> number3;

                min = number1;
                if (number2 < min) {
                    min = number2;
                }
                if (number3 < min) {
                    min = number3;
                }

                cout << "\nMin number: " << min << endl;

                cin.get();
            }

            if (task == 6) {
                cout << "\n\nTask 6\n";
                int num1;
                int num2;
                int num3;
                int sum;
                int sub;
                int mnoj;
                int min_2;

                cout << "First number: ";
                cin >> num1;

                cout << "Second number: ";
                cin >> num2;

                cout << "Third number: ";
                cin >> num3;

                min_2 = num1;
                if (num2 < min_2) {
                    min_2 = num2;
                }
                if (num3 < min_2) {
                    min_2 = num3;
                }

                sum = num1 + num2 + num3;
                sub = num1 - num2 - num3;
                mnoj = num1 * num2 * num3;

                cout << "\nSum: " << sum << endl;
                cout << "Sub: " << sub << endl;
                cout << "Multiplication: " << mnoj << endl;
                cout << "Min number: " << min_2 << endl;

                cin.get();
            }

            if (task == 7) {
                cout << "\n\nTask 7\n";
                float R;
                float R_S;
                float R_P;

                cout << "Enter the radius of the circle: ";
                cin >> R;

                R_S = R * R;
                cout << "Circle area: " << R_S << "pi" << endl;

                R_P = 2 * R;
                cout << "Perimeter of a circle: " << R_P << "pi" << endl;

                cin.get();
            }

            if (task == 8) {
                cout << "\n\nTask 8\n";
                int a;
                int b;
                int c;

                cout << "Enter first number from (1-9): ";
                cin >> a;
                if (a > 9) {
                    cout << "Write number from 1 - 9";
                    return 0;
                }

                cout << "Enter second number from (1-9): ";
                cin >> b;
                if (b > 9) {
                    cout << "Write number from 1 - 9";
                    return 0;
                }

                c = a * b;

                if (c > 50)
                    cout << "The number " << c << " is greater than 50" << endl;
                else
                    cout << "The number " << c << " is less than 50" << endl;

                cin.get();
            }

            if (task == 9) {
                cout << "\n\nTask 9\n";
                int numbers;
            
                int n, n1, n2, n3, n4;

                n = 1 + rand() % 5;
                n1 = 1 + rand() % 5;
                n2 = 1 + rand() % 5;
                n3 = 1 + rand() % 5;
                n4 = 1 + rand() % 5;
            
            
                cout << "Write a number of 5 digits (for example " << n << n1 << n2 << n3 << n4 << "): ";
                cin >> numbers;

                int i = 100;
                for (int nums = numbers % i; i <= 5; ++i) {
                    cout << nums;
                }

                cin.get();
            }
           
        }
 else
 {
     cout << "...";
     return 0;
 }
    }
    return 0;
}
