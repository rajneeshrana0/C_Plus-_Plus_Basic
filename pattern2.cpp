#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of N : ";
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << "*";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

    return 0;
}

// Enter the value of n: 5
// 12345
// 678910
// 1112131415
// 1617181920
// 2122232425