/*
 * BankAccount.cpp
 * Created on: 1/24/2023
 * Author: Almir Redzematovic
 * Description: This file contains the implementation of the BankAccount class.
 * The BankAccount class is used to create, manage, and store bank account information.
 */

#include "BankAccount.h"

#include <iostream>
#include <chrono>

using namespace std;

// constructor function for creating a new bank account
BankAccount::BankAccount(std::string_view fName,
                         std::string_view lName,
                         const std::string &address,
                         const std::string &city,
                         const std::string &state,
                         const std::string &zipcode,
                         std::string_view email,
                         const std::string &phoneNum,
                         std::string_view accountNum,
                         std::string_view type,
                         long double bal,
                         const std::chrono::time_point<std::chrono::system_clock> &since,
                         AccountStatus current_status)
    : firstName_{fName},
      lastName_{lName},
      address_{address},
      city_{city},
      state_{state},
      zipCode_{zipcode},
      email_{email},
      phoneNumber_{phoneNum},
      accountNumber_{accountNum},
      type_{type},
      balance_{bal},
      since_{since},
      status_{current_status} {
  createAccount();
}

void BankAccount::createAccount() {
  system("clear");
  cout << "Account created successfully!" << endl;
}

// constructor function for creating a new bank account
const string &BankAccount::GetFirstName() const {
  return firstName_;
}
// setter function for the first name
void BankAccount::SetFirstName(const string &first_name) {
  firstName_ = first_name;
}
// getter function for the last name
const string &BankAccount::GetLastName() const { return lastName_; }
// setter function for the last name
void BankAccount::SetLastName(const string &last_name) { lastName_ = last_name; }
// getter function for the address
const optional<std::string> &BankAccount::GetAddress() const { return address_; }
// setter function for the address
void BankAccount::SetAddress(const optional<std::string> &address) { address_ = address; }
// getter function for the city
const optional<std::string> &BankAccount::GetCity() const { return city_; }
// setter function for the city
void BankAccount::SetCity(const optional<std::string> &city) { city_ = city; }
// getter function for the state
const optional<std::string> &BankAccount::GetState() const { return state_; }
// setter function for the state
void BankAccount::SetState(const optional<std::string> &state) { state_ = state; }
// getter function for the zip code
const optional<std::string> &BankAccount::GetZipCode() const { return zipCode_; }
// setter function for the zip code
void BankAccount::SetZipCode(const optional<std::string> &zip_code) { zipCode_ = zip_code; }
// getter function for the email
const string &BankAccount::GetEmail() const { return email_; }
// setter function for the email
void BankAccount::SetEmail(const string &email) { email_ = email; }
// getter function for the phone number
const optional<std::string> &BankAccount::GetPhoneNumber() const { return phoneNumber_; }
// setter function for the phone number
void BankAccount::SetPhoneNumber(const optional<std::string> &phone_number) { phoneNumber_ = phone_number; }
// getter function for the account number
const string &BankAccount::GetAccountNumber() const { return accountNumber_; }
// setter function for the account number
void BankAccount::SetAccountNumber(const string &account_number) { accountNumber_ = account_number; }
// getter function for the account type
const string &BankAccount::GetType() const { return type_; }
// setter function for the account type
void BankAccount::SetType(const string &type) { type_ = type; }
// getter function for the account balance
long double BankAccount::GetBalance() const { return balance_; }
// setter function for the account balance
void BankAccount::SetBalance(long double balance) { balance_ = balance; }
// getter function for the account creation date
const chrono::time_point<std::chrono::system_clock> &BankAccount::GetSince() const { return since_; }
// setter function for the account creation date
void BankAccount::SetSince(const chrono::time_point<std::chrono::system_clock> &since) { since_ = since; }
// getter function for the account status
AccountStatus BankAccount::GetStatus() const { return status_; }
// setter function for the account status
void BankAccount::SetStatus(AccountStatus status) { status_ = status; }
