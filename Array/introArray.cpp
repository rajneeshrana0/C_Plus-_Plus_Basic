#include <iostream>
using namespace std;

void printArray()
{
}
int main()
{

    int number[15];
    cout << number[3] << endl; // If value is not initilized it return garbage value
    // cout << number[14] << endl; // If value is not initilized it return garbage value
    // Make sure array you trying to acess is under declared array

    // Intisilize Array

    int secondArray[3] = {3, 5, 7};

    cout << "Vaule of Second Array we call is " << secondArray[2] << endl;

    cout << endl
         << "Everything is fine" << endl
         << endl;
    //
    int thirdArray[15] = {2, 7};

    int n = 3;

    for (int i = 0; i < n; i++)
    {

        cout << thirdArray[i] << " ";
    }
    //  initisilating all location with 0
    int fourthArray[10] = {0};

    int a = 10;

    for (int i = 0; i < a; i++)
    {

        cout << fourthArray[i] << " ";
    }
    return 0;
}