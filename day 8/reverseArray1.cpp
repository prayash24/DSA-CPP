// reverseArray - with extra space

#include <iostream>
using namespace std;

void printArray(int *arr, int n){
    int copyArray[n];
    for(int i=0; i<n; i++){
        int j = (n-i-1);
        copyArray[i] = arr[j];
    }

    for(int i =0; i<n; i++){
        arr[i]=copyArray[i];
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr)/sizeof(int);
    

    // reverse array with backward for loop
    // for(int i = (n-1) ; i>=0; i--){
    //     cout<<arr[i]<<endl;
    // }

    printArray(arr, n);

    return 0;
}