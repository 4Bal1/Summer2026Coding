#include <iostream>
#include "Triangle.h"
using namespace std;


int main(){
    
    //CHICAGO USER
    double b, h;
    Triangle CHIUSER(b,h);
    cout << "Enter the Base of the Triangle ==> ";
    cin >> b;
    cout << "Enter the Height of the Triangle ==> ";
    cin >> h;
    CHIUSER.CalcArea();
    cout << "The area is ==> " << CHIUSER.getArea() << endl;


    //NEW YORK USER
    double b2, h2;
    Triangle NYUSER;
    cout << "Enter the Base of the Triangle ==> ";
    cin >> b2;
    cout << "Enter the Height of the Triangle ==> ";
    cin >> h2;
    NYUSER.setBase(b2);
    NYUSER.setHeight(h2);
    NYUSER.CalcArea();
    cout << "The area is ==> " << NYUSER.getArea() << endl;


}
