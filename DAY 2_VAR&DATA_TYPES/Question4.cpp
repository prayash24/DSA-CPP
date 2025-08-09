// Write a program to calculate the area of a circle.
// Input : r (radius)
// Output : PI*r*r (area)

#include <iostream>
using namespace std;

const double PI = 3.14;

int main(){
    double r, area;
    cout << "Enter radius of circle: ";
    cin >> r;
    area = PI * r * r;
    cout << "Area of circle is: " << area<<endl;

    return 0;
}