// Question 2 : Write a C++ program that takes a year from the user and print whether
// that year is a leap year or not.

#include <iostream>
using namespace std;

int main(){
    int year;
    cout<<"Enter Year: ";
    cin>>year;

    if(year%4==0){
        if(year%100==0){
          cout<<"Non Leap Year " ;
        }else{
            cout<<"Leap Year ";
        }
        
    }else{
        cout<<"NON Leap Year "<<endl;
    }

    return 0;
}