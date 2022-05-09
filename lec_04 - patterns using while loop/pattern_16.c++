//    1
//  1 2 1
//1 2 3 2 1

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        // print space
        int space = n - i;
        while (space)
        {
            cout << " "<< " ";
            space--;
        }

        // print 1st triangle
        int j = 1;
        while (j <= i)
        {
            cout << j << " ";
            j++;
        }

        // print 2nd triangle
        int k = i - 1;
        while (k)
        {
            cout << k << " ";
            k--;
        }

        cout << endl;
        i++;
    }
}