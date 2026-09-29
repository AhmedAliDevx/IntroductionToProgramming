#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    string address;
    string contactNumber;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your address: ";
    getline(cin, address);

    cout << "Enter your contact number: ";
    getline(cin, contactNumber);

    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Contact Number: " << contactNumber << endl;

    return 0;
}