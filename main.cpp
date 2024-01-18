#include <iostream>
#include <math.h>
#include <cstring>

using namespace std;

int main()
{
    int n1, n2, result = 0, choice, toCont;
    char name[20] = "";

    cout << "Enter your name: ";
    cin >> name;

    cout << "\nWelcome " << name << "!\n";

    do
    {
        cout << "\nPlease choose an operation\n"
            << "1. Add\n"
            << "2. Subtract\n"
            << "3. Multiply\n"
            << "4. Divide\n"
            << "5. Modulo\n"
            << "6. Power\n"
            << "7. EXIT\n"
            << "Enter choice: ";
        cin >> choice;

        if (choice == 7) {

            cout << "\nExiting Program...\n";
            exit(0);
        }
        else {

            cout << "\nEnter two values: ";
            cin >> n1 >> n2;

            switch (choice)
            {
            case 1: result = n1 + n2;
                break;

            case 2: result = n1 - n2;
                break;

            case 3: result = n1 * n2;
                break;

            case 4: result = n1 / n2;
                break;

            case 5: result = n1 % n2;
                break;

            case 6: result = pow(n1, n2);
                break;

            default: cout << "Incorrect choice";
            }
        }

        cout << "\nResult of the operation is " << result;

        cout << "\n\nDo you want to continue?\n"
            << "Press 1 to CONTINUE\n"
            << "Press 0 to EXIT\n"
            << "Enter choice: ";
        cin >> toCont;
        cout << endl;

    }
    while (toCont != 0);
    
    return 0;
}
