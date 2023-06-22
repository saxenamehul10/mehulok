#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountNumber;
    std::string accountHolderName;
    double balance;

public:
    // Constructor
    BankAccount(const std::string& number, const std::string& holder, double initialBalance) {
        accountNumber = number;
        accountHolderName = holder;
        balance = initialBalance;
    }

    // Member functions
    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            std::cout << "Insufficient balance" << std::endl;
        }
    }

    void display() {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Holder: " << accountHolderName << std::endl;
        std::cout << "Balance: " << balance << std::endl;
    }
};

int main() {
    BankAccount account("1234567890", "John Doe", 1000.0);

    account.display();          // Display initial account details

    account.deposit(500.0);     // Deposit 500

    account.withdraw(200.0);    // Withdraw 200

    account.display();          // Display updated account details

    return 0;
}
