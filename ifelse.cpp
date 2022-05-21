// Check whether the given character is in upper case, lower case or non alphabetic character.

#include <iostream>
using namespace std;

int main()
{

    char ch;
    cout << "Enter any Value : ";

    cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
    {
        cout << ch << " is an UpperCase Character" << endl;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << ch << " is an LowerCase Chracter" << endl;
    }
    else
    {
        cout << ch << " is an Numeric Number" << endl;
    }
}
