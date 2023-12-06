////////////////////////////////////////////////////////////////////////
// Name: Rehmat Ali
// Reg No: 2023609
// CS 101 Assignment - 3
// This program calculates Area and Volume of Circle and Sphere
///////////////////////////////////////////////////////////////////////
#include <iostream>
#include <cmath>
using namespace std;

    double circleArea(double radius) {
    return 3.14 * radius * radius;
}
double sphereVolume(double radius) {
    return (4 / 3) * 3.14 * pow(radius, 3);
}
int main() {
    double radius;
    cout << "Please input radius (R) to caculate area and volume: ";
    cin >> radius;

    if (radius >= 0) {
        double area = circleArea(radius);
        cout << "Area of the circle with radius " << radius << " is = " << area << endl;

        double volume = sphereVolume(radius);
        cout << "Volume of the sphere with radius " << radius << " is = " << volume << endl;
    } 
	else {
        cout << "Please enter a non-negative radius." << endl;
    }
    return 0;}

