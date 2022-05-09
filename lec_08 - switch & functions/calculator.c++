#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter a" << endl;
    cin >> a;
    cout << "Enter b" << endl;
    cin >> b;

    cout << "Enter the operation to be performed i.e + , - , * , / or %" << endl;
    char ch;
    cin >> ch;

    switch (ch)
    {
    case '+':
        cout << (a + b) << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    case '%':
        cout << a % b << endl;
        break;
    default:
        cout << "Invalid operation" << endl;
    }

    return 0;
}