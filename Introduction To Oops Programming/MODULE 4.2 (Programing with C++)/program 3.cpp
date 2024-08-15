//3)Write a program to find the multiplication values and the cubic values using
//inline function ?

#include<iostream>
using namespace std;

inline int multiply(int a, int b) // Inline  numbers   
 {     
    return a*b;
 }

inline int cubic(int a) {     // Inline function to  cubic value 
    return a* a* a;
}

int main() {
    int n1,n2;

    cout<<"Enter first numbers : ";    // Input values for multiplication
    cin>>n1;
    
    cout<<"Enter second numbers : ";    
    cin>>n2;

    
    cout<<"The number of multiple :"<<n1*n2<<endl; // Output :- the result of multiplication
	
	int num ;	
    
    cout << "Enter a number to find  cubic value: ";  // Input a number for cubic calculation
    cin >> num;
 
    cout << "The cubic value of " << num<< " is: "<< cubic(num)<<endl; // Output the result of cubic calculation

    return 0;
    
}

