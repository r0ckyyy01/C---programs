/*
Classes and Objects Assignment

Author: John Roy Mureithi
Reg No: BSE-05-0204/2024
Date: 28/1/2025
Version 1
*/

#include <iostream>
using namespace std;

// Define the Car class
class Car {
public:
    // Public data members
    string brand;
    string model;
    float price;
    int mileage;

    // Function to display car details
    void display() {
        cout << "Car Details:" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: Ksh." << price << endl;
        cout << "Mileage: " << mileage << " miles" << endl;
    }

    // Function to simulate driving
    void drive(int distance) {
        mileage = mileage + distance;
        cout << "After driving " << distance << " miles, updated mileage is: " << mileage << " miles" << endl;
    }
};

int main() {
    // Create a Car object with the given details
    Car myCar;
    myCar.brand = "Toyota";
    myCar.model = "Corolla";
    myCar.price = 20000;
    myCar.mileage = 5000;
    
    // Display initial car details
    myCar.display();
    
    // Simulate driving for 150 miles
    myCar.drive(150);
    
    // Simulate driving for 300 miles
    myCar.drive(300);
    
    return 0;
}
