// Java bank application API

public class BankApplicationAPI {
    private static double accountBalance = 1000;

    public static double getAccountBalance() {
        return accountBalance;
    }

    public static void deposit(double amount) {
        if (amount <= 0) {
            throw new IllegalArgumentException("Invalid amount. Amount must be greater than zero.");
        }
        accountBalance += amount;
    }

    public static boolean withdraw(double amount) {
        if (amount <= 0) {
            throw new IllegalArgumentException("Invalid amount. Amount must be greater than zero.");
        }
        if (amount > accountBalance) {
            throw new IllegalArgumentException("Insufficient balance.");
        }
        accountBalance -= amount;
        return true;
    }
}

