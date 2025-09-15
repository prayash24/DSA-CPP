#include <iostream>
using namespace std;

// Function to reverse the array (without extra space)
void linearSearch(int *arr, int n, int key) {
    for(int i =0; i<n; i++){
        if(arr[i]==key){
            cout<<"key found at index "<< i << endl;
            return;
        }
    }
}


int main() {
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(int);
    int key = 1;
    linearSearch(arr, n, key);

    return 0;
}