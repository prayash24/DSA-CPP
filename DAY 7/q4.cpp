#include <iostream>
using namespace std;

int Max(int a, int b, int c){
   if(a>b && a>c){
        return a;
   }
   else if(b>c){
    return b;
   } else{
    return c;
   }
}

int main() {
    int a = 1, b=2, c=3;
    cout<<Max(a, b, c)<<endl;
    return 0;
}