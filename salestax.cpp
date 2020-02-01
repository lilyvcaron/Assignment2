#include <iostream>
using namespace std;

void addTax(double &taxRate, float &cost)
{
    cost = cost + (cost * taxRate / 100);
}

int main()
{
    double tax = 5;
    float price = 10;

    addTax(tax, price);

    cout << price;

    return 0;
}
