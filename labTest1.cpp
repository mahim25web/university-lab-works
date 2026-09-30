#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string accountNo;
    string holder;
    double balance;

public:

    BankAccount()
    {
        accountNo = "N/A";
        holder = "Unknown";
        balance = 0;

        cout << "Default Function Called." << endl;
    }

     BankAccount(string accountNo, string holder, double balance)
    {
        this->accountNo = accountNo;
        this->holder = holder;
        this->balance = balance;

        
    }

    BankAccount(string accountNo, string holder)
    {
        this->accountNo = accountNo;
        this->holder = holder;
        this->balance = 0;

        cout << "2 parameterized constructor called." << endl;
    }

    BankAccount(BankAccount &account)
    {
        accountNo = account.accountNo;
        holder = account.holder;
        balance = account.balance;

        
    }

    void display()
    {
        cout << "Account No: " << accountNo << endl;
        cout << "Account Holder: " << holder << endl;
        cout << "Balance: $" << balance << endl;
    }

   
    void deposit(int amount)
    {
        balance = balance + amount;

        cout << "Deposited: $" << amount << endl;
    }

void deposit(double amount)
    {
        balance = balance + amount;

        cout << "Deposited: $" << amount << endl;
    }

    void deposit(int amount, string description)
    {
        balance = balance + amount;

        cout << "Deposited: $" << amount << endl;
        cout << "Description: " << description << endl;
    }

 void showAccountByValue(BankAccount account)
    {
        cout << "Account information received by value." << endl;
        account.display();
    }

  
    void showAccountByReference(BankAccount &account)
    {
        cout << "Account information received by reference." << endl;
        account.display();
    }


inline bool isPremiumAccount(){
    return balance >=100000;
}

};

class Customer{
    private:
    string customerID;
    string customerName;
    string phoneNumber;

    public:

    Customer(){

        customerID="N/A";
        customerName="Unknown";
        phoneNumber="N/A";


    }

    Customer(string id, string name, string phone)
    {
        customerID = id;
        customerName = name;
        phoneNumber = phone;
    }


void displayCustomer(){

     cout<< "Customer ID: " << customerID << endl;
    cout<< "Customer Name: " << customerName << endl;
     cout<< "Phone: " << phoneNumber << endl;

}

  
};


int main(){

 cout << "BANK ACCOUNT MANAGEMENT SYSTEM"<< endl;
   
    BankAccount account1; cout << endl;
   cout << "3 parameterized constructor called." << endl;
    BankAccount account2("ACC1001", "Rahim Ahmed", 50000);
    account2.display();cout << endl;
   cout << "premium Account information." << endl;
    BankAccount account3("ACC1002", "Karim Hasan", 125000);
    account3.display();
    cout << endl;

    BankAccount account4("ACC1003", "Nusrat Jahan");
    account4.display(); cout << endl;
    cout << "Function Overloading" << endl;
    account2.deposit(10000);
    account2.deposit(5500.50);
    account2.deposit(15000, "Salary Deposit");cout << endl;

    cout << "Copy Constructor" << endl;

    BankAccount account5 = account2;
    cout<<"main account"<<endl;
    account2.display();cout << endl;

      cout << "Copied Account:" << endl;
    account5.display(); cout << endl;

    cout << "Pass by Value" << endl;
    account2.showAccountByValue(account2); cout << endl;

    cout << "Pass by Reference" << endl;

    account2.showAccountByReference(account2);

    cout << endl;


    cout << "Inline Function" << endl;

    if (account2.isPremiumAccount())
        cout << "Rahim Ahmed: Premium Account" << endl;
    else
        cout << "Rahim Ahmed: Regular Account" << endl;


    if (account3.isPremiumAccount())
        cout << "Karim Hasan: Premium Account" << endl;
    else
        cout << "Karim Hasan: Regular Account" << endl;


    if (account4.isPremiumAccount())
        cout << "Nusrat Jahan: Premium Account" << endl;
    else
        cout << "Nusrat Jahan: Regular Account" << endl; cout << endl;


        cout << "Customer Information" << endl;

    Customer customer1;

    Customer customer2("C001", "Rahim Ahmed", "01717177146");

    customer1.displayCustomer();

    cout << endl;

    customer2.displayCustomer();

    cout << endl;

    cout << "Final Account Information" << endl;

    account2.display();

    cout << endl;

    return 0;
}