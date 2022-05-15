
#include <iostream>
using namespace std;

long long int sqrtInt(int n)
{
    int s = 0;
    int e = n;

    long long int mid = s + (e - s) / 2;
    long long int ans = -1;

    while (s <= e)
    {
        long long int square = mid * mid;

        if (square == n)
        {
            return mid;
        }
        else if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

double precision(int n, int tillPrecision, int sqrt)
{
    double factor = 1;
    double ans = sqrt;

    for (int i = 0; i < tillPrecision; i++)
    {
        factor = factor / 10;

        for (double j = ans; j * j < n; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the number "<< endl;
    cin >> n;

    int temp = sqrtInt(n);
    cout << "Answer is " << precision(n, 3, temp) << endl;

    return 0;
}