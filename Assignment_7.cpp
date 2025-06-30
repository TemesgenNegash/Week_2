// Assignment_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//base class
class Item {
public:
    string name;
    int quantity;

    Item(string n, int q) {
        name = n;
        quantity = q;
    }

    virtual void display() = 0; // Pure virtual function
    virtual ~Item() {} // Virtual destructor
};

//perishables
class Perishable : public Item {
public:
    Perishable(string n, int q) : Item(n, q) {}

    void display() override {
        cout << name << " (Perishables) , Quantity: " << quantity << endl;
    }
};

//non-perishables
class NonPerishable : public Item {
public:
    NonPerishable(string n, int q) : Item(n, q) {}

    void display() override {
        cout << name << " (Non-Perishables), Quantity: " << quantity << endl;
    }
};

int main() {
    Item* item1 = new Perishable("Milk", 10);
    Item* item2 = new NonPerishable("Cereal", 20);

    item1->display();
    item2->display();

    // Clean up
    delete item1;
    delete item2;

    return 0;
}
/*Milk (Perishables) , Quantity: 10
Cereal (Non-Perishables), Quantity: 20

C:\CIS-25\Assignment_7\Assignment_7\x64\Debug\Assignment_7.exe (process 13616) exited with code 0 (0x0).
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
