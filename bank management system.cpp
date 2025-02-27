/*
Library Management System

Author: John Roy Mureithi
Reg No: BSE-05-0204/2024
Date: 25/2/2025
Version 1
*/

#include <iostream>
#include <string>
using namespace std;

//base class
class AccountHolder{
    protected:
        string name;

    //public functions
    public:
        //setter
        void setName(string n){
            name = n;
        }

        //getter
        string getName(){
            return name;
        }
};

//derived class BankAccount that inherits from AccountHolder
class BankAccount : public AccountHolder{
    private:
        int accountNumber;
        double balance;

    public:
    //constructor
    BankAccount(string n, int accNo, double bal){
        name = n;
        accountNumber = accNo;
        balance = bal;
    }

    //public functions
    int getAccountNumber(){     //returns the account number
        return accountNumber;
    }

    double getbalance(){       //returns the account balance
        return balance;
    }
};

//second derived class SavingsAccount that inherits from BankAccount
class SavingsAccount : public BankAccount {
    private:
        double interestRate;
    
    public:
        //constructor
        SavingsAccount(string n, int accNo, double bal, double rate) : BankAccount(n, accNo, bal), interestRate(rate){
            interestRate = rate;
        }
    
        //public function
        double getInterestRate() {      //returns the interest rate
            return interestRate;
        }
    };

int main() {
    //object
    SavingsAccount account1("RJ", 383475, 4000.00, 3.5);
    
    cout << "Account Holder: " << account1.getName() << endl;
    cout << "Account Number: " << account1.getAccountNumber() << endl;
    cout << "Balance: Ksh." << account1.getbalance() << endl;
    cout << "Interest Rate: " << account1.getInterestRate() << "%" << endl;

    return 0;
}