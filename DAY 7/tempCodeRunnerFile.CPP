#include <iostream>
using namespace std;

char nextChar(char ch){
    if( ch == 'z'){
        return a;
    }
    else{
        return ch+1;
    }
}

int main() {
    char ch = 'd';
    cout<<nextChar(ch)<<endl;
    return 0;
}