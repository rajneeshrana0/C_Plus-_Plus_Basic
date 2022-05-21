#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter the value of n :";
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            char ch('A' + row - 1);
            cout << ch;
            col++;
        }

        cout << endl;
        row++;
    }

    return 0;
}
// Enter the value of n :5
// AAAAA
// BBBBB
// CCCCC
// DDDDD
// EEEEE
// PS G:\0