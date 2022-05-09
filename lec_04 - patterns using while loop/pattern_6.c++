// 1
// 2 3
// 3 4 5

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        // int value = i;
        while (j <= i)
        {
            cout << j + i - 1<< " ";
            // value++;
            
            j++;
        }
        cout << endl;
        i++;
    }
}