#include <iostream>
#include <string>
using namespace std;

//Structure for Customer
struct Customer {
    string Name;
    double AccountBalance;
    string LastTransaction;
};

//Customer details display function
void displayCustomer(const Customer & c){
    cout << "Customer name: " << c.Name << endl;
    cout << "Account balance: " << c.AccountBalance << endl;
    cout << "Last transactions: " << c.LastTransaction << endl;
};

int main() {
    Customer customer1, customer2;

    //First customer
    cout << "Enter details for Customer 1: " << endl;
    cout << "Name: " << endl;
    getline(cin, customer1.Name);
    cout << "Account Balance: Ksh." << endl;
    cin >> customer1.AccountBalance;
    cin.ignore(); // Clear newline character from buffer
    cout << "Last Transaction: " << endl;
    getline(cin, customer1.LastTransaction);

    //Second customer
    cout << "Enter details for Customer 2: " << endl;
    cout << "Name: " << endl;
    getline(cin, customer2.Name);
    cout << "Account Balance: Ksh. " << endl;
    cin >> customer2.AccountBalance;
    cin.ignore();
    cout << "Last Transaction: " << endl;
    getline(cin, customer2.LastTransaction);

    // Display Customer Records
    displayCustomer(customer1);
    displayCustomer(customer2);

    return 0;
}