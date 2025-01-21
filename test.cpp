#include <iostream>
#include <string>
#include <iomanip> // for fixed and setprecision
#include <ctime>   // for date manipulation

using namespace std;

// Function to parse a date in YYYYMMDD format into a tm structure
tm parseDate(int date) {
    tm parsedDate = {};
    parsedDate.tm_year = date / 10000 - 1900; // Extract year and adjust for tm structure
    parsedDate.tm_mon = (date / 100 % 100) - 1; // Extract month (0-based in tm)
    parsedDate.tm_mday = date % 100; // Extract day
    return parsedDate;
}

// Function to calculate the difference in days between two dates
double calculateDaysOverdue(int dueDate, int returnDate) {
    tm due = parseDate(dueDate);
    tm ret = parseDate(returnDate);

    time_t dueTime = mktime(&due);
    time_t returnTime = mktime(&ret);

    if (dueTime == -1 || returnTime == -1) {
        cerr << "Error: Invalid date format." << endl;
        return -1; // Indicate an error
    }

    double secondsDiff = difftime(returnTime, dueTime);
    return secondsDiff / (60 * 60 * 24); // Convert seconds to days
}

int main() {
    string bookID;
    int dueDate, returnDate;
    double daysOverdue = 0;
    int fineRate = 0;
    int fineAmount = 0;

    // Input from user
    cout << "Enter Book ID: ";
    cin >> bookID;

    cout << "Enter Due Date (YYYYMMDD): ";
    cin >> dueDate;

    cout << "Enter Return Date (YYYYMMDD): ";
    cin >> returnDate;

    // Calculate days overdue
    daysOverdue = calculateDaysOverdue(dueDate, returnDate);

    if (daysOverdue < 0) {
        daysOverdue = 0; // No overdue if return date is before or on due date
    }

    // Determine fine rate and fine amount
    if (daysOverdue > 0) {
        if (daysOverdue <= 7) {
            fineRate = 20;
        } else if (daysOverdue <= 14) {
            fineRate = 50;
        } else {
            fineRate = 100;
        }

        fineAmount = static_cast<int>(daysOverdue) * fineRate;
    }

    // Display results
    cout << fixed << setprecision(2);
    cout << "\n--- Overdue Book Details ---\n";
    cout << "Book ID: " << bookID << endl;
    cout << "Due Date: " << dueDate << endl;
    cout << "Return Date: " << returnDate << endl;
    cout << "Days Overdue: " << static_cast<int>(daysOverdue) << endl;
    cout << "Fine Rate: Ksh " << fineRate << " per day" << endl;
    cout << "Fine Amount: Ksh " << fineAmount << endl;

    return 0;
}
