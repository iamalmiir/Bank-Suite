#include <iostream>
#include "BankAccount.h"
#include <iomanip>

using namespace std;

int main() {
  BankAccount account("Almir", "R.", "1234", "1234", "1234");
  cout << account.GetFirstName() + " " << account.GetLastName() << endl;

  return 0;
}