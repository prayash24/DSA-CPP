// Question 1 : Write a C++ program to get a number from the user and print whether
// it's positive, negative or zero.

#include <iostream>
using namespace std;


int main(){

    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if(num>0){
        cout<<"Number is Positive. ";
    } else if (num<0)
    {
        cout<<"Number is Negative. ";
    } else{
        cout<<"Number is Zero. "<<endl;
    }
    

    return 0;
}