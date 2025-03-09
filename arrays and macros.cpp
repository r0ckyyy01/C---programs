/*
Arrays and Macros

Author: John Roy Mureithi
Reg No: BSE-05-0204/2024
Date: 9/3/2025
Version 1
*/

#include <iostream>
using namespace std;

//macros
#define array1  3
#define rows  2
#define columns  2
#define depth  3

int main(){
    //1D array
    int array_oneDimension[array1];
    cout << "Enter " << array1 << " values: " << endl;

    //Input values for 1D array
    for (int i = 0; i < array1; i++){
        cin >> array_oneDimension[i];
    } 

    //Display values of 1D array
    cout << "The elements for one-dimension array are: " << endl;
    for (int i = 0; i < array1; i++){
        cout << array_oneDimension[i] << " " << endl;
    }

    //2D array
    int array_twoDimension[rows][columns];
    cout << "Enter " << rows * columns << " values for 2D array: " << endl;

    //Input values for 2D array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> array_twoDimension[i][j];
        }
    }

    //Display values of 2D array
    cout << "The elements for two-dimension array are:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << array_twoDimension[i][j] << " ";
        }
        cout << "\n";
    }

    //3D array
    int array_threeDimension[rows][columns][depth];
    cout << "Enter " << rows * columns * depth << " values for 3D array: " << endl;
    
    // Input values for 3D array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            for (int k = 0; k < depth; k++) {
                cin >> array_threeDimension[i][j][k];
            }
        }
    }
    
    // Display values of 3D array
    cout << "The elements for three dimension array are: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            for (int k = 0; k < depth; k++) {
                cout << array_threeDimension[i][j][k] << " ";
            }
            cout << " " << endl; 
        }
    }

    return 0;
}