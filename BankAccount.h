//
// Created by Almir Redzematovic on 1/24/2023.
//

#pragma once

#include <string>
#include <chrono>
#include <optional>

enum class AccountStatus {
  Active,
  Inactive
};

class BankAccount {
 public:
  // constructor function for creating a new bank account
  BankAccount(std::string_view,
              std::string_view,
              const std::string &,
              const std::string &,
              const std::string &,
              const std::string &,
              std::string_view,
              const std::string &,
              std::string_view,
              std::string_view,
              long double bal,
              const std::chrono::time_point<std::chrono::system_clock> &,
              AccountStatus);

  static void createAccount();

  [[nodiscard]] const std::string &GetFirstName() const;

  void SetFirstName(const std::string &first_name);

  [[nodiscard]] const std::string &GetLastName() const;

  void SetLastName(const std::string &last_name);

  [[nodiscard]] const std::optional<std::string> &GetAddress() const;

  void SetAddress(const std::optional<std::string> &address);

  [[nodiscard]] const std::optional<std::string> &GetCity() const;

  void SetCity(const std::optional<std::string> &city);

  [[nodiscard]] const std::optional<std::string> &GetState() const;

  void SetState(const std::optional<std::string> &state);

  [[nodiscard]] const std::optional<std::string> &GetZipCode() const;
  void SetZipCode(const std::optional<std::string> &zip_code);

  [[nodiscard]] const std::string &GetEmail() const;

  void SetEmail(const std::string &email);

  [[nodiscard]] const std::optional<std::string> &GetPhoneNumber() const;

  void SetPhoneNumber(const std::optional<std::string> &phone_number);

  [[nodiscard]] const std::string &GetAccountNumber() const;

  void SetAccountNumber(const std::string &account_number);

  [[nodiscard]] const std::string &GetType() const;

  void SetType(const std::string &type);

  [[nodiscard]] long double GetBalance() const;

  void SetBalance(long double balance);

  [[nodiscard]] const std::chrono::time_point<std::chrono::system_clock> &GetSince() const;

  void SetSince(const std::chrono::time_point<std::chrono::system_clock> &since);

  [[nodiscard]] AccountStatus GetStatus() const;

  void SetStatus(AccountStatus status);

 private:
  std::string firstName_;
  std::string lastName_;
  std::optional<std::string> address_;
  std::optional<std::string> city_;
  std::optional<std::string> state_;
  std::optional<std::string> zipCode_;
  std::string email_;
  std::optional<std::string> phoneNumber_;
  std::string accountNumber_;
  std::string type_;
  long double balance_ = 0.0;
  std::chrono::time_point<std::chrono::system_clock> since_;
  AccountStatus status_ = AccountStatus::Active;
};
