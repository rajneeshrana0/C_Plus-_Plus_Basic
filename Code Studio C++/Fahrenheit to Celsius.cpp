#include <iostream>
using namespace std;

int main()
{
    // Write your code here
    int s, e, w;
    float celsius;
    cin >> s >> e >> w;
    for (int i = s; i <= e; i = i + w)
    {
        celsius = ((i - 32) * 5) / 9;
        cout << i << "\t" << celsius << endl;
        ;
    }

    return 0;
}
s