#include <iostream>
using namespace std;

int factorial(int n)
{
    int ans = 1;

    for (int i = 1; i <= n; i++)
    {
        ans = ans * i;
    }
    return ans;
}

int nCr(int n, int r)
{
    int num = factorial(n);
    int denom = factorial(r) * factorial(n - r);
    int ans = num / denom;
    return ans;
}

int main()
{
    int n, r;
    cout << "Enter n" << endl;
    cin >> n;
    cout << "Enter r" << endl;
    cin >> r;

    int ans = nCr(n, r);
    cout << ans << endl;
}