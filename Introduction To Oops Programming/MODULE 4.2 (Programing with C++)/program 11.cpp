//11)Write a program to calculate the area of circle, rectangle and triangle using
//Function Overloading

#include<iostream>
using namespace std;

class H {
    public:
        void fun1() {  
            float radius,area; 

            cout << "Enter the radius of the circle: ";//Ask the user to input the base and height
            cin >> radius;

            area = 3.14*radius*radius;  // Calculate the area

            cout << "The area of the circle is: " <<area<<endl; // output the area
        }

        void fun1(double length, double breadth) {  // For calculating the area of a rectangle
            double area = length * breadth;  // Calculate the area

            cout << "The area of the rectangle is: "<<area<<endl;
        }

        void fun1(float base, float height) {  // For calculating the area of a triangle
            float area = 0.5 * base * height;  // Calculate the area

            cout << "The area of the triangle is: "<<area<<endl;
        }
};

int main() {
    H obj;

    // Calculate the area of a circle
    obj.fun1();

    // Calculate the area of a rectangle
    double length, breadth;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;
    obj.fun1(length, breadth);

    // Calculate the area of a triangle
    float base, height;
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;
    obj.fun1(base, height);

    return 0;
}

