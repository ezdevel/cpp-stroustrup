// Program to exercise operators

#include "../std_lib_facilities.h"

int main()
{
    cout << "Please enter an integer value: ";
    int n;
    cin >> n;
    cout << "n == " << n
         << "\nn+1 == " << n+1
         << "\nthree times n == " << 3*n
         << "\ntwice n == " << n+n
         << "\nn squared == " << n*n
         << "\nhalf of n == " << double(n)/2
         << "\nsquare root of n == " << sqrt(double(n))
         << "\ninteger division of n by 2 == " << n/2
         << "\nremainder of divison of n by 2 == " << n%2
         << "\n";
    cout << "Please enter a string value: \n";
    string str1;
    cin >> str1;
    cout << "Please enter another string value: \n";
    string str2;
    cin >> str2;
    cout << "Concatenation of these 2 strings are: \n"
         << str1+str2
         << "\n";
    if (str1 == str2) cout << "That's the same string twice.\n";
    if (str1 < str2)
        cout << str1 << " is alphabetically before " << str2 << "\n";
    if (str1 > str2)
        cout << str1 << " is alphabetically after " << str2 << "\n";
}
