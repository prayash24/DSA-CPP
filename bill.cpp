// Question 2 : Enter cost of 3 items from the user (using float data type) - a pencil, a
// pen and an eraser. You have to output the total cost of the items back to the user as
// their bill.
// (Add on : You can also try adding 18% GST tax to the items in the bill as an advanced
// problem)

#include <iostream>
using namespace std;

int main() {
    float pencil, pen, eraser, totalCost;
    
    cout << "Enter cost of pencil: ";
    cin >> pencil;

    cout << "Enter cost of pen: ";
    cin >> pen;

    cout << "Enter cost of eraser: ";
    cin >> eraser;

    totalCost = (pencil + pen + eraser) * 1.18; // Add 18% GST

    cout << "Total cost including 18% GST is: " << totalCost << endl;

    return 0;
}
