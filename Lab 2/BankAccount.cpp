#include "BankAccount.h"
#include "iostream"

using namespace std;

BankAccount::BankAccount()
{

}

BankAccount::~BankAccount()
{

}

BankAccount::BankAccount(string name, double balance){
    this->Name = name;
    this->Balance = balance;
}

BankAccount::BankAccount(string name){
    this->Name = name;
}

void BankAccount::Withdraw(double withdraw){

    if ((this->Balance - withdraw) < -500){
        cout << "Withdrawal denied: exceeds your $500 overdraft limit" << endl;
    }
    else{
        this->Balance = this->Balance - withdraw;
        cout << "You have withdrawn $" << withdraw << endl;
    }
    
    cout << "New account balance: $" << this->Balance << endl;
}

void BankAccount::Deposit(double deposit){

    
    if (deposit >= 1000){
        cout << "The maxmimum deposit amount is $1,000" << endl;
    }
    else if (deposit < 0){
        cout << "Cannot deposit negative amount" << endl;
    }
    else{
        this->Balance = this->Balance + deposit;
        cout << "You have deposited $" << deposit << endl;
    }

    cout << "New account balance: $" << this->Balance << endl;
}

void BankAccount::SetBalance(double balance){
    this->Balance = balance;
    cout << "Your balance is now $" << this->Balance << endl;
}

double BankAccount::GetBalance(){
    return this->Balance;
}

string BankAccount::GetName(){
    return this->Name;
    
}