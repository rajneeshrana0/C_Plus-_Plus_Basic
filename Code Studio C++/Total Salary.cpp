#include <iostream>

#include <iomanip>

#include <cmath>

using namespace std;

int main()
{
    int basic;
    cin >> basic;
    char grade;
    cin >> grade;

    double hra = 0.2 * basic;
    double da = 0.5 * basic;

    int allowance;
    if (grade == 'A')
    {
        allowance = 1700;
    }
    else if (grade == 'B')
    {
        allowance = 1500;
    }
    else
    {
        allowance = 1300;
    }

    double pf = 0.11 * basic;

    double totalSalary = basic + hra + da + allowance - pf;
    int ans = round(totalSalary);
    cout << ans;
    return 0;
}