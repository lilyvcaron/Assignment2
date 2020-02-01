#include <iostream>
using namespace std;

void getLength(double &feet, double &inches)
{
    cout << "Input length in feet." << endl;
    cin >> feet;

    cout << "Input length in inches." << endl;
    cin >> inches;
}

void convertLength(double &feet, double &inches)
{
    feet = feet * 0.3048;
    inches = inches / 12 * 0.3048 * 100;
}

void outputLength(double &feet, double &inches)
{
    cout << "The length is " << feet << " meters and " << inches << " centimeters.";
}

int main()
{
    double ft;
    double in;

    getLength(ft, in);

    convertLength(ft, in);

    outputLength(ft, in);

    return 0;
}
