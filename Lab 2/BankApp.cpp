#include <iostream>
#include <string>
#include "BankAccount.h"

using namespace std;

int main(){
    string name;
    double balance;
    double deposit;
    double withdraw;
    cout << "Enter Account Owner Name ==> ";
    cin >> name;
    cout << "Enter Starting Balance ==> ";
    cin >> balance;
    BankAccount User(name, balance);
    cout << "Enter withdrawal amount: ";
    cin >> withdraw;
    cout << User.GetName() << "'s Previous balance: $" << User.GetBalance() << endl;
    User.Withdraw(withdraw);
    cout << User.GetName() << "'s Current balance: $" << User.GetBalance() << endl;
    cout << endl;
    cout << "Enter deposit amount: $";
    cin >> deposit;
    cout << User.GetName() << "'s Previous balance: $" << User.GetBalance() << endl;
    User.Deposit(deposit);
    cout << User.GetName() << "'s Current balance: $" << User.GetBalance() << endl;
    cout << "=====================" << endl;
    
    



    //BankAccount(name) TEST
    string name2;
    double balance2;
    double withdraw2;
    double deposit2;
    cout << "Enter Account Name ==> ";
    
    cin >> name2;
    
    BankAccount User2(name2);
    cout << "Enter Balance ==> ";
    cin >> balance2;
    User2.SetBalance(balance2);
    cout << "Enter withdrawal amount: ";
    cin >> withdraw2;
    cout << User2.GetName() << "'s Previous balance: $" << User2.GetBalance() << endl;
    User2.Withdraw(withdraw2);
    cout << User2.GetName() << "'s Current balance: $" << User2.GetBalance() << endl;
    cout << endl;
    cout << "Enter deposit amount: $";
    cin >> deposit2;
    cout << User2.GetName() << "'s Previous balance: $" << User2.GetBalance() << endl;
    User2.Deposit(deposit2);
    cout << User2.GetName() << "'s Current balance: $" << User2.GetBalance() << endl;
    
    





}