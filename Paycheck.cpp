#include <iostream>
using namespace std;

double CalcPayment(int, double);

int main() {
    int Hours;
    double PayRate;
    cout << "Enter the worked hours as an Integer ==> ";
    cin >> Hours;
    cout << "Enter pay rate as a Decimal ==> ";
    cin >> PayRate;
    double Payment = CalcPayment(Hours, PayRate);
    cout << "Your payment is ==> " << Payment << endl;
}

double CalcPayment(int h, double pr)
{
    double Payment = h * pr;
    if (h > 40) {
      Payment = (Payment - 40) * 1.5;
    }
    else{
        return Payment;
    }
}
    
