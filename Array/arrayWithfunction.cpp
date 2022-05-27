#include <iostream>
using namespace std;

// Function

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "Printing Done" << endl;
}
// Main Function Stars From here

int main()
{
    // -----------------------------------------------
    int number[15];
    int n = 14;
    printArray(number, 1);

    // ---------------------------------------------------

    int secondArray[3] = {3, 5, 7};
    cout << "Value at 2 is " << secondArray[2] << endl;

    // --------------------------------------------------

    int thirdArray[15] = {2, 7};
    n = 3;
    printArray(thirdArray, 3);

    // ========================================
    int fourthArray[10] = {0};

    n = 10;

    printArray(fourthArray, 10);

    return 0;
}