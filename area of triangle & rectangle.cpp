/*
Area of triangle and rectangle assignment

Author: John Roy Mureithi
Reg No: BSE-05-0204/2024
Date: 13/2/2025
Version 1
*/

#include <iostream>
#include <cmath> // for mathematical functions
using namespace std;

// Function to calculate the area of a triangle
float areaTriangle(float base, float height) {
    return 0.5 * base * height;
}

// Function to calculate the area of a rectangle
float areaRectangle(float length, float width) {
    return length * width;
}

int main() {
    char prompt, choice; // Variables for user input
    float base, height, length, width, area;

    do {
        // Ask the user if they want to calculate the area of a triangle or rectangle
        cout << "Do you want to calculate the area of a triangle (t) or rectangle (r)? (t/r): ";
        cin >> prompt;

        // If the user chooses a triangle
        if (prompt == 't' || prompt == 'T') {
            cout << "Enter base: ";
            cin >> base;

            cout << "Enter height: ";
            cin >> height;

            // Call function for triangle area
            area = areaTriangle(base, height);

            // Display output
            cout << "The area of the triangle is: " << area << endl;

        // If the user chooses a rectangle
        } else if (prompt == 'r' || prompt == 'R') {
            cout << "Enter length: ";
            cin >> length;

            cout << "Enter width: ";
            cin >> width;

            // Call function for rectangle area
            area = areaRectangle(length, width);

            // Display output
            cout << "The area of the rectangle is: " << area << endl;

        // If the user enters an invalid choice
        } else {
            cout << "Invalid input! Please enter 't' for triangle or 'r' for rectangle." << endl;
        }

        // Ask if the user wants to run the program again
        cout << "Do you want to calculate another area? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y'); // Continue running if user enters 'y'

    cout << "Program exited!" << endl;
    return 0;
}

