/*
Fine for overdue library books

Author: John Roy Mureithi
Reg No: BSE-05-0204/2024
Date: 21/1/2025
Version 1
*/

#include <iostream>
#include <string>   //header file that handles strings

using namespace std;    //simplifies the code

//function to calculate the number of days between return date and due date
int calculateDaysOverdue(int returnDate, int dueDate){
    return returnDate - dueDate;
}

int main(){
    //variable declaration
    string bookID;
    int returnDate, dueDate, daysOverdue;

    //prompt the user to enter the book id and store it in approriate variable
    cout << "Please enter the book ID: ";
    cin >> bookID;

    //prompt the user to enter the due date and store it in appropriate variable
    cout << "Please enter the due date of the book (YYYYMMDD): " << endl;
    cin >> dueDate;

    //prompt the user to enter the return date and store it in appropriate variabble
    cout << "Please enter the actual return date (YYYYMMDD): " << endl;
    cin >> returnDate;

    //function calling to calculate the number of days overdue
    daysOverdue = calculateDaysOverdue(returnDate, dueDate);

    //fine rates
    int fineRate = 0, fineAmount = 0;

    if (daysOverdue > 0) {
        if (daysOverdue <= 7) {
            fineRate = 20;
        } else if (daysOverdue <= 14) {
            fineRate = 50;
        } else {
            fineRate = 100;
        }
        fineAmount = fineRate * daysOverdue;
    } else {
        daysOverdue = 0; // No overdue
    }

    //output
    cout << "Book ID: " << bookID << endl;
    cout << "Due date: " << dueDate << endl;
    cout << "Return date: " << returnDate << endl;
    cout << "Days overdue: " << daysOverdue << endl;
    cout << "Fine Rate: Ksh. " << fineRate << " per day" << endl;
    cout << "Fine Amount: Ksh. " << fineAmount << endl;


    return 0;
}