#include <iostream>
using namespace std;

int getPivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main()
{
    int arr[6] = {5, 7, 9, 2, 3, 4};

    int pivot = getPivot(arr, 6);
    cout << "Pivot element of 2 is at index " << pivot << endl;
}