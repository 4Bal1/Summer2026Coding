#include <iostream>
using namespace std;

void CalcTempMsg(double);

int main(){
    double Temperature;
    cout << "Enter the temperature >>> ";
    cin >> Temperature;
    CalcTempMsg(Temperature);

}

void CalcTempMsg(double T){
    if(T >= 90){
        cout << "Its super hot!!" << endl;;
    }
    else if (T >= 75){
        cout << "It is hot!!!" << endl;
    }
    else if (T >= 50){
        cout << "It is cool!!!" << endl;
    }
    else if (T >= 35){
        cout << "It is cold!!!" << endl;
    }
    else{
        cout << "Lets go to Miami!!!" << endl;
    }
}