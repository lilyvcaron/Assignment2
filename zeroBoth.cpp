#include <iostream>
using namespace std;

void zeroBoth(int &x, int &y)
{
    x = 0;
    y = 0;
}

int main()
{
    int x = 10;
    int y = 11;

    zeroBoth(x,y);

    cout << x << endl;
    cout << y << endl;

    return 0;
}
