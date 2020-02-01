#include <iostream>
using namespace std;

int main()
{
    int numArray[10];
    int member;

    for (int i=0; i < 10; ++i)
    {
        cout << "Enter a nonnegative integer to place into the array." << endl;
        cin >> member;

        if (member >= 0 )
        {
            numArray[i] = member;
        }
        else if (member < 0)
        {
            i = i-1;
        }
    }

    cout << "Array contents: " << endl;
    for (int i=0; i < 10; ++i)
    {
        cout << numArray[i] << endl;
    }

    return 0;
}
