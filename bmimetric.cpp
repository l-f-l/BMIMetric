#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double weight;
    double height;
    double bmi;

    cout << "Please enter weight in kilograms: ";
    cin >> weight;
    cout << "Please enter height in meters: ";
    cin >> height;
    bmi = weight / (height * height);
    cout << "BMI is: " << fixed << setprecision(2) << bmi << endl;

    return 0;
}