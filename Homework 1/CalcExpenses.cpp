#include <iostream>
#include <stdexcept>
#include "CalcExp.h"
using namespace std;


int main()
{
    double TotMiles, GasPrice, MilesPerGallon, TollFees, ParkFees;
    CalcExp RoadTrip(TotMiles , GasPrice , MilesPerGallon , TollFees , ParkFees);
    cout << "Enter how many miles you travelled ==> " << endl;
    cin >> TotMiles;
    cout << "Enter average cost per gallon of gas ==> " << endl;
    cin >> GasPrice;
    cout << "Enter your cars average mile per gallon ==> " << endl;
    cin >> MilesPerGallon;
    cout << "Enter total toll fees ==> " << endl;
    cin >> TollFees;
    cout << "Enter toal parking fees ==> " << endl;

    cout << "You travelled " << RoadTrip.getTotMiles() << ", "




}
