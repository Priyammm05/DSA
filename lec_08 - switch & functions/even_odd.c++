#include <iostream>
using namespace std;

bool evenOdd(int a)
{
    if (a & 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int a;
    cout << "Enter a" << endl;
    cin >> a;

    int num = evenOdd(a);

    if (num)
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }
}