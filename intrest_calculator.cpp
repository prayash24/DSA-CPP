// Question 3 : Build a Simple Interest Calculator.
// Input : principal (P), rate (R), time (T) Output :
// (P*R*T) / 100

#include <iostream>
using namespace std;

int main() {
    float p, t, r, i;
    
    cout<<"Enter principal amount: ";
    cin>>p;
    cout<<"Enter time: ";
    cin>>t;
    cout<<"Enter rate of intrest: ";
    cin>>r;

    i=(p*t*r)/100;
    cout<<"Simple Intrest is: "<<i;

    return 0;
}