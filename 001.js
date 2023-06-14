// JavaScript bank application API

let accountBalance = 1000;

function getAccountBalance() {
  return accountBalance;
}

function deposit(amount) {
  if (amount <= 0) {
    throw new Error("Invalid amount. Amount must be greater than zero.");
  }
  accountBalance += amount;
}

function withdraw(amount) {
  if (amount <= 0) {
    throw new Error("Invalid amount. Amount must be greater than zero.");
  }
  if (amount > accountBalance) {
    throw new Error("Insufficient balance.");
  }
  accountBalance -= amount;
}

