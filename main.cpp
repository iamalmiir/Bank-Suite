#include <iostream>
#include "BankAccount.h"

using namespace std;

int main() {
    auto account = BankAccount("John", "Doe", "123 Main St", "New York", "NY", "10001", "john@doe.io", "123-456-7890",
                               "1234567890", "Checking", 1000.00, true);
    
    return 0;
}
