#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    int balance;

public:
    // Constructor to initialize account number and balance
    BankAccount(int accNum, int initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
    }

    // Function to deposit money
    void deposit(int amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount" << endl;
        }
    }

    // Function to withdraw money
    void withdraw(int amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: " << amount << endl;
        } else {
            cout << "Invalid withdraw amount or insufficient balance" << endl;
        }
    }

    // Function to display account details
    void display() const {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    // Create a BankAccount object
    BankAccount account(123456, 1000);

    int choice;
    int amount;

    while (true) {
        // Display menu options
        cout << "Menu:" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Display Account Details" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the amount to deposit: ";
                cin >> amount;
                account.deposit(amount);
                break;
            case 2:
                cout << "Enter the amount to withdraw: ";
                cin >> amount;
                account.withdraw(amount);
                break;
            case 3:
                account.display();
                break;
            case 4:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice" << endl;
        }

        cout << endl;
    }

    return 0;
}
               