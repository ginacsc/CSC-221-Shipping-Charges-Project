//This program calculates shipping charges based upon package weight and distance shipped.
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double weight, distance, rate, shippingCharge;
    const double lightRate = 1.10;
    const double mediumRate = 2.20;
    const double heavyRate = 3.70;
    const double extraHeavyRate = 4.80;
    int scalingFactor;

    cout << "Enter weight in kg: ";
    cin >> weight;

    if (weight <= 0 || weight > 20) {
        cout << "Invalid weight." << endl;
        return 0;
    }

    if (weight > 0 && weight <= 2)
        rate = lightRate;
    else if (weight > 2 && weight <= 6)
        rate = mediumRate;
    else if (weight > 6 && weight <= 10)
        rate = heavyRate;
    else if (weight > 10 && weight <= 20)
        rate = extraHeavyRate;

    cout << "Enter distance in miles: ";
    cin >> distance;

    if (distance < 10 || distance > 3000) {
        cout << "Invalid distance." << endl;
        return 0;
    }
    else {
        scalingFactor = ceil(distance / 500);
    }

    shippingCharge = scalingFactor * rate;

    cout << "Total shipping charge: $" << fixed << setprecision (2) << shippingCharge << endl;

    return 0;

}
