#include <iostream>
using namespace std;

int binarySearch(int key, int *arr, int n)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (mid == key)
        {
            cout<<"Key found at "<< mid<<endl;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    int key = 5;

    binarySearch(key, arr, n);

    return 0;
}