// C# bank application API

public static class BankApplicationAPI {
    private static double accountBalance = 1000;

    public static double GetAccountBalance() {
        return accountBalance;
    }

    public static void Deposit(double amount) {
        if (amount <= 0) {
            throw new ArgumentException("Invalid amount. Amount must be greater than zero.");
        }
        accountBalance += amount;
    }

    public static bool Withdraw(double amount) {
        if (amount <= 0) {
            throw new ArgumentException("Invalid amount. Amount must be greater than zero.");
        }
        if (amount > accountBalance) {
            throw new InvalidOperationException("Insufficient balance.");
        }
        accountBalance -= amount;
        return true;
    }
}

