//
// Created by Almir Redzematovic on 1/24/2023.
//

#ifndef BANK_SUITE__BANKACCOUNT_H_
#define BANK_SUITE__BANKACCOUNT_H_

#include <iostream>
#include <ctime>

class BankAccount {
private:
    std::string_view firstName; // first name of the account holder
    std::string_view lastName; // last name of the account holder
    std::string address; // // address of the account holder
    std::string city; // city of the account holder
    std::string state; // state of the account holder
    std::string zipCode; // zip code of the account holder
    std::string email; // email address of the account holder
    std::string phoneNumber; // phone number of the account holder
    std::string_view accountNumber; // account number
    std::string_view type; // account type
    long double balance; // current balance of the account
    std::time_t since;  // account creation date
    bool status; // status of the account (active or inactive)

public:
    // constructor function for creating a new bank account
    explicit BankAccount(std::string_view,
                         std::string_view,
                         std::string,
                         std::string,
                         std::string,
                         std::string,
                         std::string,
                         std::string,
                         std::string_view,
                         std::string_view,
                         long double,
                         bool);

    // Create a new bank account
    void createAccount();

    // getter functions for the private member variables
    std::string_view getFirstName();

    std::string_view getLastName();

    std::string getAddress();

    std::string getCity();

    std::string getState();

    std::string getZipCode();

    std::string_view getAccountNumber();

    std::string_view getType();

    long double getBalance();

    bool getStatus();

    std::string getEmail();

    std::string getPhoneNum();

    std::string getSince();
};

#endif //BANK_SUITE__BANKACCOUNT_H_
