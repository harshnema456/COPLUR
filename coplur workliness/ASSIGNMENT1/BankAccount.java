package ASSIGNMENT1;


    public class BankAccount {
    // Private field for encapsulation
    private double balance;

    // Constructor
    public BankAccount(double initialBalance) {
        if (initialBalance >= 0) {
            this.balance = initialBalance;
        } else {
            System.out.println("Initial balance can't be negative. Setting to 0.");
            this.balance = 0;
        }
    }

    // Public method to deposit money
    public void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            System.out.println("Deposited: " + amount);
        } else {
            System.out.println("Invalid deposit amount!");
        }
    }

    // Public method to withdraw money
    public void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            System.out.println("Withdrawn: " + amount);
        } else if (amount > balance) {
            System.out.println("Insufficient balance!");
        } else {
            System.out.println("Invalid withdrawal amount!");
        }
    }

    // Public getter to show balance (no direct access to balance)
    public double getBalance() {
        return balance;
    }

    // Method to display balance
    public void showBalance() {
        System.out.println("Current Balance: " + getBalance());
    }

    // Main method to test
    public static void main(String[] args) {
        BankAccount account = new BankAccount(1000);

        account.showBalance();
        account.deposit(500);       // Deposit ₹500
        account.withdraw(200);      // Withdraw ₹200
        account.withdraw(2000);     // Try to withdraw too much
        account.deposit(-100);      // Invalid deposit
        account.showBalance();      // Final balance
    }
}

