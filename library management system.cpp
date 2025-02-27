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
class Person{
    protected:
        string name;

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

//derived class LibraryMember inheriting from Person
class LibraryMember : public Person{
    private:
        int memberID;
        int booksBorrowed;

    public:
    //constructor
    LibraryMember(string n, int ID, int books){
        name = n;
        memberID = ID;
        booksBorrowed = books;
    };

    //public functions
    int getmemberID(){     //returns the member ID
        return memberID;
    }

    int getbooksBorrowed(){    //returns the number of books borrowed
        return booksBorrowed;
    }    
};

//second derived class PremiumMember inheriting form LibraryMember
class PremiumMember : public LibraryMember{
    private:
        double membershipFee;

    public:
        //constructor
        PremiumMember(string n, int ID, int books, double fee) : LibraryMember(n, ID, books){
            membershipFee = fee;
        }

        //public function
        double getMembershipFee(){
            return membershipFee;
        }
};

int main(){
    //object
    PremiumMember member1("RJ", 67, 9, 3000);

    cout << "Name: " << member1.getName() << endl;
    cout << "Member ID: " << member1.getmemberID() << endl;
    cout << "Number of book(s) borrowed: " << member1.getbooksBorrowed() << endl;
    cout << "Membership fee: Ksh. " << member1.getMembershipFee() << endl;

    return 0;
}