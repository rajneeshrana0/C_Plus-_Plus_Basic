#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;
    // int mid = (start + end) / 2;

    // Best approch
    int mid = start + (end - start) / 2;
    while (start <= mid)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        // Goto left part in array to check
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        // mid = (start + end) / 2;

        // Best approch
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{

    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};

    int evenIndex = binarySearch(even, 6, 18);
    cout << "Index of 18 is : " << evenIndex << endl;
    int oddIndex = binarySearch(odd, 5, 14);
    cout << "index of 14 is 11 : " << oddIndex << endl;
    return 0;
}