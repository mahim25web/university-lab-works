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
            cout << "Invalid initial balance."<< endl;
        }
    }


    void showAccount(){
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
    
        
    }

    
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Successfully deposited TK "  << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount." << endl;
        } else if (amount > balance) {
            cout << "Insufficient funds." << accountHolder << "." << endl;
        } else {
            balance -= amount;
     cout<<"Withdrew Successfull"<<endl;
        }
    }

   
    double checkBalance(){
        return balance;
    }
};


int main(){
   
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



