#include <iostream>
#include <cstdlib>
#include "BankAccount.h"

using namespace std;

void PrintMsg(string);



int main(){
    string name;
    double balance;
    double deposit;
    double withdraw;
    char option;
    
    cout << "Enter Account Owner Name ==> ";
    cin >> name;
    cout << "Enter Starting Balance ==> $";
    cin >> balance;
    BankAccount User(name, balance);
    
    do{
        cout << User.GetName() << " - OPTIONS:\n";
        cout << "<===================>\n\n";
        cout << "a. Withdraw\n";
        cout << "b. Deposit\n";
        cout << "x. To EXIT\n";
        cout << "\n\nEnter your choice ==> ";
        cin >> option;
        switch(option){
            case 'a':
                cout << "Enter withdrawal amount: $";
                cin >> withdraw;
                cout << User.GetName() << "'s Previous balance: $" << User.GetBalance() << endl;
                User.Withdraw(withdraw);
                cout << User.GetName() << "'s Current balance: $" << User.GetBalance() << endl;
                break;
            case 'b':
                cout << "Enter deposit amount: $";
                cin >> deposit;
                cout << User.GetName() << "'s Previous balance: $" << User.GetBalance() << endl;
                User.Deposit(deposit);
                cout << User.GetName() << "'s Current balance: $" << User.GetBalance() << endl;
                break;
            case 'x':
                PrintMsg("\nThanks for banking with us!\n\n");
                break;
            default:
                PrintMsg("\nINVALID ENTRY! PRESS ANY KEY TO TRY AGAIN\n\n");
            }
    }
    while(option != 'x'); 
    cout << "=====================" << endl;
    
    //BankAccount(name) TEST
    string name2;
    double balance2;
    double withdraw2;
    double deposit2;
    char option2;
    
    cout << "Enter Account Name ==> ";
    cin >> name2;
    BankAccount User2(name2);

    cout << "Enter Balance ==> ";
    cin >> balance2;
    User2.SetBalance(balance2);

    do{
        cout << User2.GetName() << " - OPTIONS:\n";
        cout << "<===================>\n\n";
        cout << "a. Withdraw\n";
        cout << "b. Deposit\n";
        cout << "x. To EXIT\n";
        cout << "\n\nEnter your choice ==> ";
        cin >> option2;
        switch(option2){
            case 'a':
                cout << "Enter withdrawal amount: ";
                cin >> withdraw;
                cout << User2.GetName() << "'s Previous balance: $" << User2.GetBalance() << endl;
                User.Withdraw(withdraw);
                cout << User2.GetName() << "'s Current balance: $" << User2.GetBalance() << endl;
                break;
            case 'b':
                cout << "Enter deposit amount: $";
                cin >> deposit;
                cout << User2.GetName() << "'s Previous balance: $" << User2.GetBalance() << endl;
                User.Deposit(deposit);
                cout << User2.GetName() << "'s Current balance: $" << User2.GetBalance() << endl;
                break;
            case 'x':
                PrintMsg("\nThanks for banking with us!\n\n");
                break;
            default:
                PrintMsg("\nINVALID ENTRY! PLEASE TRY AGAIN\n\n");
        }
    }
    while(option != 'x'); 
    cout << "=====================" << endl;}


void PrintMsg(string m){
    cout << m;
}