// In a program, input the side of a square. You have to output the area of
// the square.
// Input : n (side) Output
// : n*n (area)

#include <iostream>
using namespace std;

int main() {
    int n, area;
    cout << "Enter the side of a square: ";
    cin >> n;

    area = n * n;
    cout << "Area of the square is " << area;

    return 0;
}
