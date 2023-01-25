#include <iostream>
#include "BankAccount.h"
#include <iomanip>
#include <stdlib.h>

using namespace std;

void displayMainMenu();

int main() {
    auto account = BankAccount("John", "Doe", "123 Main St", "New York", "NY", "10001", "john@doe.io", "123-456-7890",
                               "1234567890", "Checking", 1000.00, true);

    displayMainMenu();

    // Validate input and handle errors such as string input and out of range input
    int choice;
    do {
        cin >> choice;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            system("clear");
            displayMainMenu();
            cout << "Invalid input. Please enter a number between 1 and 7." << endl;
        } else if (choice < 1 || choice > 7) {
            system("clear");
            displayMainMenu();
            cout << "Invalid input. Please enter a number between 1 and 7." << endl;
        }
    } while (choice < 1 || choice > 7);
    cout << "You entered: " << choice << endl;

    return 0;
}

void displayMainMenu() {
    cout << "✳✳✳✳✳✳✳✳✳✳✳✳✳✳✳✳✳✳✳✳✳✳✳✳✳✳✳✳✳✳✳✳✳✳\t" << setw(18) << "C++ Bank Suite Inc. SYSTEM" << endl;
    cout << "✳✳✳✳✳✳✳✳✳✳✳✳✳✳✳✳✳✳✳✳✳✳✳✳✳✳✳✳✳✳✳✳✳✳\t" << setw(18) << ":: Main Menu ::" << endl;
    cout << "1. Create New Bank Account" << endl;
    cout << "2. Deposit Money" << endl;
    cout << "3. Withdraw Money" << endl;
    cout << "4. Check Balance" << endl;
    cout << "5. Close Account" << endl;
    cout << "6. Update Account Information" << endl;
    cout << "7. Exit" << endl;

    cout << "Enter your choice: <1-7> " << endl;
    cout << ":> ";
}