#include <iostream>
using namespace std;

double TripCost(double miles, double gascost, double mpg, double parkfee, double tollfee);

int main()
{
    double milesdriven, gascost, mpg, parkfee, tollfee;
    cout << "Enter how many miles your trip was ==> ";
    cin >> milesdriven;
    cout << "Enter your cars average mile per gallon ==> ";
    cin >> mpg;
    cout << "Enter the cost of gas per gallon ==> ";
    cin >> gascost;
    cout << "Enter the total parking fees ==> ";
    cin >> parkfee;
    cout << "Enter total toll costs ==> ";
    cin >> tollfee;
    cout << "Your total cost for this trip is ==> $" << TripCost(milesdriven, gascost, mpg, parkfee, tollfee) << endl;
}

double TripCost(double miles, double gas, double mpg, double parkfee, double tollfee)
{
    double totalcost = (miles/mpg) * gas + parkfee + tollfee;
    return totalcost;
}