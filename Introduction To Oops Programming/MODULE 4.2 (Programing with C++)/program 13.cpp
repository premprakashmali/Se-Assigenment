//13)Write a program to find the max number from given two numbers using
//friend function 
#include<iostream>
using namespace std;

class Compare {
    private:
        int num1, num2;

    public:
        // Constructor to initialize the numbers
        Compare(int n1, int n2) {
            num1 = n1;
            num2 = n2;
        }

        // Friend function declaration
        friend int findMax(Compare c);
};

// Friend function definition
int findMax(Compare c) {
    if (c.num1 > c.num2)
        return c.num1;
    else
        return c.num2;
}

int main() {
    int a, b;
    
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    // Create an object of Compare class
    Compare cmp(a, b);

    // Call the friend function to find the maximum number
    int maxNumber = findMax(cmp);
    
    cout << "The maximum number is: " << maxNumber << endl;

    return 0;
}

