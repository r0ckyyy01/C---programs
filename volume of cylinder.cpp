/*
Volume of a cylinder

Author: John Roy Mureithi
Reg No: BSE-05-0204/2024
Date: 21/1/2025
Version 1
*/

#include <iostream>
#include <cmath>    //header file that provides mathematical functions

using namespace std;    //to simplify the code

int main(){
    double radius, height, PI, volume;  //variable declaration
    PI = 3.14159;   //constant declaration

    cout << "Enter the radius: " << endl;   //prompt the user to input radius
    cin >> radius;  //store radius

    cout << "Enter the height: " << endl;   //prompt the user to input height
    cin >> height;  //store height

    volume = PI * radius * radius * height; //formula to calculate volume of a cylinder

    cout << "Volume of cylinder is: " << volume << endl;    //print result

    return 0;
}