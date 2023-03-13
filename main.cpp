#include <iostream>
#include "BankAccount.h"
#include <iomanip>

using namespace std;

void displayMainMenu();

int main() {
  BankAccount account("John",
                      "Doe",
                      "123 Main St",
                      "New York",
                      "NY",
                      "12345",
                      "john@doe.io",
                      "123-456-7890",
                      "1234567890",
                      "Checking",
                      1000.00,
                      chrono::system_clock::now(),
                      AccountStatus::Active);
  account.SetFirstName("Almir");
  account.SetLastName("R.");
  cout << account.GetFirstName() + " " << account.GetLastName() << endl;

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