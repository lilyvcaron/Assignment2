#include <iostream>
using namespace std;

int main()
{
    int a[4][5];

    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            cout << "Enter number." << endl;
            cin >> a[i][j];
        }
    }
    return 0;
}
