#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    string accountHolder;

  
    BankAccount(string holder, string accNum, double initialBalance) {
        accountHolder = holder;
        accountNumber = accNum;
        if (initialBalance >= 0) {
            balance = initialBalance;
        } else {
            balance = 0;
            cout << "Invalid initial balance! Setting balance to 0.00." << endl;
        }
    }


    void showAccount() const {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: TK " << fixed << setprecision(2) << balance << endl;
        
    }

    
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Successfully deposited TK " << fixed << setprecision(2) << amount 
                 << " to " << accountHolder << "'s account." << endl;
        } else {
            cout << "Invalid deposit amount! Amount must be greater than 0." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount! Amount must be greater than 0." << endl;
        } else if (amount > balance) {
            cout << "Insufficient funds! Withdrawal failed for " << accountHolder << "." << endl;
        } else {
            balance -= amount;
            cout << "Successfully withdrew TK " << fixed << setprecision(2) << amount 
                 << " from " << accountHolder << "'s account." << endl;
        }
    }

   
    double checkBalance() const {
        return balance;
    }
};

int main() {
    
    BankAccount acc1("Rahim Ahmed", "ACC001", 100000.00);
    BankAccount acc2("Karim Hasan", "ACC002", 50000.00);

  
    acc1.showAccount();
    acc2.showAccount();

  


  
    acc1.deposit(25000.00);  
    acc1.withdraw(10000.00); 

  
   
    acc2.withdraw(60000.00);  
    acc2.deposit(20000.00);   
    acc2.withdraw(15000.00);  
   
    acc1.showAccount();
    acc2.showAccount();

    return 0;
}