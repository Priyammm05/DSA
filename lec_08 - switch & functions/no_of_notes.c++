#include <iostream>
using namespace std;

int main()
{
    int amount;
    cout << "Please Enter any Amount :" << endl;
    cin >> amount;

    int hundred = 0, fifty = 0, twenty = 0, one = 0;

    switch (1)
    {
    case 1:
        hundred = amount / 100;
        cout << hundred << endl;
        amount = amount - (hundred * 100);
    case 2:
        fifty = amount / 50;
        cout << fifty << endl;
        amount = amount - (fifty * 50);
    case 3:
        twenty = amount / 20;
        cout << twenty << endl;
        amount = amount - (twenty * 20);
    case 4:
        one = amount / 1;
        cout << one << endl;
        amount = amount - (one * 1);
        break;
    }
}