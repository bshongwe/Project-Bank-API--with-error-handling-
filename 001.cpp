// C++ bank application API

#include <iostream>
#include <stdexcept>

class BankApplicationAPI {
private:
    static double accountBalance;

public:
    static double getAccountBalance() {
        return accountBalance;
    }

    static void deposit(double amount) {
        if (amount <= 0) {
            throw std::invalid_argument("Invalid amount. Amount must be greater than zero.");
        }
        accountBalance += amount;
    }

    static bool withdraw(double amount) {
        if (amount <= 0) {
            throw std::invalid_argument("Invalid amount. Amount must be greater than zero.");
        }
        if (amount > accountBalance) {
            throw std::runtime_error("Insufficient balance.");
        }
        accountBalance -= amount;
        return true;
    }
};

double BankApplicationAPI::accountBalance = 1000;

