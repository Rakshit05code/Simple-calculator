#include <iostream>
using namespace std;

void displayMenu() {
    cout << "Select operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Exit\n";
}

int main() {
    int choice;
    double num1, num2, result;

    while (true) {
        displayMenu();
        cout << "Enter your choice (1-5): "<<endl;
        cin >> choice ;

        // Check for exit condition
        if (choice == 5) {
            cout << "Exiting the program.\n";
            break;
        }

        // Check if the choice is valid
        if (choice < 1 || choice > 5) {
            cout << "Invalid choice. Please try again.\n";
            continue;
        }

        // Input numbers
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        switch (choice) {
            case 1:
                result = num1 + num2;
                cout << "Result: " << result << endl;
                break;
            case 2:
                result = num1 - num2;
                cout << "Result: " << result << endl;
                break;
            case 3:
                result = num1 * num2;
                cout << "Result: " << result << endl;
                break;
            case 4:
                // Handle division by zero
                if (num2 == 0) {
                    cout << "Error: Division by zero is not allowed.\n";
                } else {
                    result = num1 / num2;
                    cout << "Result: " << result << endl;
                }
                break;
            default:
                cout << "Invalid choice.\n";
                break;
        }
    }

    return 0;
}
