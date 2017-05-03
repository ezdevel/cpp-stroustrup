// This program reads and writes a first name

#include "../std_lib_facilities.h"

int main()
{
    cout << "Please enter your first name and age (followed by 'enter'):\n";
    string first_name; // first_name is a variable of type string
    int age;
    cin >> first_name; // read characters into first_name
    cin >> age;
    cout << "Hello, " << first_name << "! Age: " << age << "\n";
    return 0;
}
