// 1
// 2 3
// 4 5 6

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    int count = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        
        i++;
    }
}