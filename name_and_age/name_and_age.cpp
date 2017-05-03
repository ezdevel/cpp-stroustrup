// This program reads and writes a full name and age

#include "../std_lib_facilities.h"

int main()
{
    cout << "Please enter your full name and age:\n";
    string first_name; // first_name is a variable of type string
    string last_name;
    double age = -1; // age is a variable of type double
    cin >> first_name >> last_name; // read characters into first_name and last_name
    cin >> age; // read characters into age
    cout << "Hello, " << first_name << " " << last_name << "! You are " << age*12 << " months old." << "\n";
    return 0;
}
