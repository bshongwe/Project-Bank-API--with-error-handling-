// C bank application API

#include <stdbool.h>
#include <stdio.h>

double accountBalance = 1000;

double getAccountBalance() {
  return accountBalance;
}

void deposit(double amount) {
  if (amount <= 0) {
    fprintf(stderr, "Invalid amount. Amount must be greater than zero.\n");
    return;
  }
  accountBalance += amount;
}

bool withdraw(double amount) {
  if (amount <= 0) {
    fprintf(stderr, "Invalid amount. Amount must be greater than zero.\n");
    return false;
  }
  if (amount > accountBalance) {
    fprintf(stderr, "Insufficient balance.\n");
    return false;
  }
  accountBalance -= amount;
  return true;
}

