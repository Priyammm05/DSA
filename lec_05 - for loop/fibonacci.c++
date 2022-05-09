#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    cout << "Fibonacci for the given number is ";

    int a = 0;
    int b = 1;

    for (int i = 1; i <= n; i++)
    {
        int next = a + b;
        
        cout<<next << " ";

        a = b;
        b = next;
        
    }
}