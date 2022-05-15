
#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{

    int start = 0;
    int end = n - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 10, 12};
    int odd[5] = {1, 3, 5, 7, 9};

    int index1 = binarySearch(even, 6, 12);
    cout << "Index of 12 is " << index1 << endl;

    int index2 = binarySearch(odd, 5, 1);
    cout << "Index of 1 is " << index2 << endl;

    return 0;
}