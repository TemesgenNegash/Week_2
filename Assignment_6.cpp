// Assignment_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Item {
public:
    string name;
    int quantity;

    // Saves items
    void savedInFile() {
        ofstream out("items.txt");
        if (out.is_open()) {
            out << name << "," << quantity << endl;
            out.close();
            cout << "Item successfully saved to file." << endl;
        }
        else {
            cout << "Error, unable to open file for writing." << endl;
        }
    }

    // Optional-> Load and display data from the file
    void loadFromFile() {
        ifstream in("items.txt");
        if (in.is_open()) {
            string line;
            while (getline(in, line)) {
                cout << "File content: " << line << endl;
            }
            in.close();
        }
        else {
            cout << "Error, unable to open file for reading." << endl;
        }
    }
};

int main() {
    Item tool;
    tool.name = "Hammer";
    tool.quantity = 15;
    //functions
    tool.savedInFile();
    tool.loadFromFile();

    return 0;
}
/*Item successfully saved to file.
File content: Hammer,15

C:\CIS-25\Assignment_6\Assignment_6\x64\Debug\Assignment_6.exe (process 8496) exited with code 0 (0x0).
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
