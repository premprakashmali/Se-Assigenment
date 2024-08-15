//2)Write a program of to sort the array using templates.

#include<iostream>
using namespace std;

// Template function to swap two elements
template<typename T>
void swapElements(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

// Template function to implement Bubble Sort
template<typename T>
void bubbleSort(T arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-1-i; j++) {
            if(arr[j] > arr[j+1]) {
                swapElements(arr[j], arr[j+1]);
            }
        }
    }
}

// Main function to test the bubble sort
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, n);

    cout<<"Sorted array: \n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;

    return 0;
}

 

