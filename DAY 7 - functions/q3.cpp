#include <iostream>
using namespace std;

int absquare(int a, int b){
    int result = a*a+b*b+2*a*b;

    return result;
}

int main() {
    int a = 2, b=3;
    cout<<absquare(a,b)<<endl;

    return 0;
}