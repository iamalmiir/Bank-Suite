//
// Created by Almir Redzematovic on 1/24/2023.
//

#include "BankAccount.h"

#include <iostream>
#include <ctime>

using namespace std;

BankAccount::BankAccount(string_view fName,
                         string_view lName,
                         string address,
                         string city,
                         string state,
                         string zipcode,
                         string email,
                         string phoneNum,
                         string_view accountNum,
                         string_view type,
                         long double bal,
                         time_t since,
                         bool current_status) : firstName{fName},
                                                lastName{lName},
                                                address{std::move(address)},
                                                city{std::move(city)},
                                                state{std::move(state)},
                                                zipCode{std::move(zipcode)},
                                                email{std::move(email)},
                                                phoneNumber{std::move(phoneNum)},
                                                accountNumber{accountNum},
                                                type{type},
                                                balance{bal},
                                                since{since},
                                                status{current_status} {
}

void BankAccount::createAccount() {
  system("clear");
  cout << "Account created successfully!" << endl;
}

string_view BankAccount::getFirstName() {
  return this->firstName;
}

string_view BankAccount::getLastName() {
  return this->lastName;
}

string BankAccount::getAddress() {
  return this->address;
}

string BankAccount::getCity() {
  return this->city;
}

string BankAccount::getState() {
  return this->state;
}

string BankAccount::getZipCode() {
  return this->zipCode;
}

string_view BankAccount::getAccountNumber() {
  return this->accountNumber;
}

string_view BankAccount::getType() {
  return this->type;
}

long double BankAccount::getBalance() {
  return this->balance;
}

bool BankAccount::getStatus() {
  return this->status;
}

string BankAccount::getEmail() {
  return this->email;
}

string BankAccount::getPhoneNum() {
  return this->phoneNumber;
}

string BankAccount::getSince() {
  return ctime(&this->since);
}