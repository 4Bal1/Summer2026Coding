#include <iostream>
#include <string>
using namespace std;

string DtoE(double);
string DtoY(double);


int main ()
{
    double USD;
    cout <<  "Enter the amount of dollars ==>" ;
    cin >> USD;
    cout << DtoE(USD) << endl;
    cout << DtoY(USD) << endl;
}

string DtoE(double d)
{
    double convert = d * 0.87;
    return "it is " + to_string(convert) + " Euros\n";
}

string DtoY(double d)
{
    double convert = d * 160.43;
    return "it is " + to_string(convert) + " Yen\n";
}
