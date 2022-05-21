#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter the Value of n :";
    cin >> n;
    int row = 1;
    int value = row;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << value;
            value = value + 1;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}