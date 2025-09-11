#include <iostream>
using namespace std;

int sum(int n){
    int result = 0;
    while(n>0){
        result = result + n%10;
        n = n/10;
    }
    return result;
}

int main() {
    int num = 18746;
    
    cout<<sum(num)<<endl;
    return 0;
}