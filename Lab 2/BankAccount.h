#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <string>

using namespace std;

#pragma once

class BankAccount
{
public:
    BankAccount(string);
    BankAccount(string, double);
    void Withdraw(double);
    void Deposit(double);
    void SetBalance(double);
    string GetName();
    double GetBalance();
    BankAccount();
    ~BankAccount();

private:
    string Name;
    double Balance;


};

#endif