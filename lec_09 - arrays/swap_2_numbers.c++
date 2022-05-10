#include <iostream>
using namespace std;

void swapTwo(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int main()
{
    int size[10] = {1, 22, 30, -4, 55, 69, 7, -5, 15, 9};

    swapTwo(size, 10);
    printArray(size, 10);

    int brr[5] = {5, -12, 95, -66, 0};
    swapTwo(brr, 5);
    printArray(brr, 5);
}