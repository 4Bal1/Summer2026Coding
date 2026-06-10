#include <iostream>
using namespace std;

double DtoE(double);
double DtoY(double);


int main ()
{
    double USD;
    cout <<  "Enter the amount of dollars ==>" ;
    cin >> USD;
    cout << "It is " << DtoE(USD) << " Euro" << endl;
    cout << "It is " << DtoY(USD) << " Yen" << endl;
}

double DtoE(double d)
{ 
    return d * 0.87;
}

double DtoY(double d)
{
    return d * 160.43;
}
