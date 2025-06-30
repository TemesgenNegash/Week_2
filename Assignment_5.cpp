// Assignment_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

// Define struct-> student
struct Student {
    int id;
    string name;
    double gpa;
};

int main() {
    Student students[3];

    // Initialize the elements of the array
    students[0] = { 101, "Kobe", 3.8 };
    students[1] = { 102, "Lebron", 3.9 };
    students[2] = { 103, "Curry", 4.0 };

    // Access and print data from the array of structs
    for (int i = 0; i < 3; ++i) {
        cout << "Student ID: " << students[i].id << ", Name: " << students[i].name << ", GPA: " << students[i].gpa << endl;
    }

    return 0;
}
/*Student ID: 101, Name: Kobe, GPA: 3.8
Student ID: 102, Name: Lebron, GPA: 3.9
Student ID: 103, Name: Curry, GPA: 4

C:\CIS-25\Assignment_5\x64\Debug\Assignment_5.exe (process 1852) exited with code 0 (0x0).
Press any key to close this window . . .*/


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
