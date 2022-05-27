// Loops In C++

// C++ Program to find sum of n even number

/*
#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter Number that You want to sum : ";
    cin >> n;
    int i = 1;
    int sum = 0;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        i++;
    }

    cout << "Sum of entered Even Number is : " << sum << endl;

    return 0;
}
*/

// Farenheight to Celsius

#include <iostream>
using namespace std;

int main()
{

    float cel, fahr;
    cout << "Enter Fahrenheit Value : ";
    cin >> fahr;
    cel = (fahr - 32) * 5 / 9;
    cout << fahr << "fajrenheit is equal to = " << cel << endl;
}