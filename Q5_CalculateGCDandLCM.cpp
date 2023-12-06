//////////////////////////////////////////
// Name: Rehmat Ali
// Reg No: 2023609
// CS 101 Assignment - 3
// This program calculate GCD and LCM
//////////////////////////////////////////
#include <iostream>
using namespace std;

int calculateGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp; //temporary variable
    }
    return a;
}
int calculateLCM(int a, int b) {
    return (a * b) / calculateGCD(a, b);
}
void findGCDandLCM(int num1, int num2, int &gcd, int &lcm) {
    gcd = calculateGCD(num1, num2);
    lcm = calculateLCM(num1, num2);
}
int main() {
    int num1, num2, gcd, lcm;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    findGCDandLCM(num1, num2, gcd, lcm);

    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd << endl;
    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm << endl;

    return 0;
}

