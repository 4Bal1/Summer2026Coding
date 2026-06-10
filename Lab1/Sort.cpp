#include <iostream>
using namespace std;

int maxnum(int a, int b, int c, int d, int e);
int minnum(int a, int b, int c, int d, int e);

int main()
{
    int a, b, c, d, e;
    cout << "enter the value of a ==> ";
    cin >> a;
    cout << "enter the value of b ==> ";
    cin >> b;
    cout << "enter the value of c ==> ";
    cin >> c;
    cout << "enter the value of d ==> ";
    cin >> d;
    cout << "enter the value of e ==> ";
    cin >> e;
    cout << "This is the max number ==> " << maxnum(a, b, c, d, e) << endl;
    cout << "This is the smallest number ==> " << minnum(a, b, c, d, e) << endl;
}

int maxnum(int a,int b, int c, int d, int e){

    int high = a;
    if(b>high){
        high = b;
    }
    if(c>high){
        high = c;
    }
    if(d>high){
        high = d;
    }
    if(e>high){
        high = e;
    }

    return high;
    
}

int minnum(int a, int b, int c,int d, int e){

    int low = a;
    if (b < a)
    {
        low = b;
    }
    if (c < a)
    {
        low = c;
    }
    if (d < a)
    {
        low = d;
    }
    if (e < a)
    {
        low = e;
    }
    return low;
}
