#include <iostream>
using namespace std;

int main() {
    cout << "This program prints all positive divisors of a positive integer in decreasing order.\n";
    cout << "Enter a positive integer to get its divisors, or enter 0 or a negative number to exit.\n";
    
    while (true) {
        int number;
        cout << "Enter a positive integer: ";
        cin >> number;

        if (number <= 0) {
            cout << "Terminating program. Thank you!\n";
            break;
        }

        // Print divisors in decreasing order
        cout << "Divisors of " << number << " in decreasing order are:\n";
        for (int i = number; i >= 1; --i) {
            if (number % i == 0) {
                cout << i << "\n";
            }
        }

        // Ask if the user wants to continue
        char choice;
        cout << "Do you want to enter another integer? (y/n): ";
        cin >> choice;

        if (choice == 'n' || choice == 'N') {
            cout << "Terminating program. Thank you!\n";
            break;
        }
    }

    return 0;
}
