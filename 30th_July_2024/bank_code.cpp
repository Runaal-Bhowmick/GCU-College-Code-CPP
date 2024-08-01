#include <iostream>
using namespace std;

class BankAccount {
private:
    
    int accn = 123456;
    int bal = 1000;

public:

    void deposit(int amt) {
        if (amt > 0) {
            bal += amt;
            cout << "Deposited: " << amt << endl;
        } else {
            cout << "Invalid deposit amount" << endl;
        }
    }

    void withdraw(int amt) {
        if (amt > 0 && amt <= bal) {
            bal -= amt;
            cout << "Withdrew: " << amt << endl;
        } else {
            cout << "Invalid withdraw amount or insufficient balance" << endl;
        }
    }

    // Function to display account details
    void display() {
        cout << "Account Number: " << accn << endl;
        cout << "Balance: " << bal << endl;
    }
};

int main() {
    
    BankAccount account;

    int choice;
    int amt;

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
                cin >> amt;
                account.deposit(amt);
                break;
            case 2:
                cout << "Enter the amount to withdraw: ";
                cin >> amt;
                account.withdraw(amt);
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
               