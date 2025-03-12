#include <iostream>
#include <string>
using namespace std;

// Structure for Patient
struct Patient {
    string Name;
    int Age;
    string Diagnosis;
};

// Function to display patient details
void displayPatient(const Patient &p) {
    cout << "Patient Details:" << endl;
    cout << "Name: " << p.Name << endl;
    cout << "Age: " << p.Age << " years" << endl;
    cout << "Diagnosis: " << p.Diagnosis << endl;
}

int main() {
    // Patient Records
    Patient patient1, patient2;

    //First patient
    cout << "Enter details for Patient 1:" << endl;
    cout << "Name: " << endl;
    getline(cin, patient1.Name);
    cout << "Age: " << endl;
    cin >> patient1.Age;
    cin.ignore();
    cout << "Diagnosis: " << endl;
    getline(cin, patient1.Diagnosis);

    //Second patient
    cout << "Enter details for Patient 2:" << endl;
    cout << "Name: " << endl;
    getline(cin, patient2.Name);
    cout << "Age: " << endl;
    cin >> patient2.Age;
    cin.ignore();
    cout << "Diagnosis: " << endl;
    getline(cin, patient2.Diagnosis);

    // Display Patient Records
    displayPatient(patient1);
    displayPatient(patient2);

    return 0;
}
