//12)Write a program to swap the two numbers using friend function without
//using third variable


#include<iostream>
using namespace std;

class H {
    private:
        int a, b;
        
        // Declare J as a friend class so it can access private members of H
        friend class J;
};

class J {
    public:
        void fun1(H &t) {
            // Swap the values of a and b
            int temp;
            cout << "Enter the number A: ";
            cin >> t.a;
            cout << "Enter the number B: ";
            cin >> t.b;
            
            temp = t.a;
            t.a = t.b;
            t.b = temp;
            
            // Print the swapped values
            cout << "A after swap: " << t.a << endl;
            cout << "B after swap: " << t.b << endl;
        }
};

int main() {
    H obj;
    J obj1;
    obj1.fun1(obj);
    
    return 0;
}

