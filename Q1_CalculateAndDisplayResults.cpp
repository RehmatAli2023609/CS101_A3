////////////////////////////////////////////////////////////////////////
// Name: Rehmat Ali
// Reg No: 2023609
// CS 101 Assignment - 3
// This program Declare, Define, Calculate and display results
////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <cmath>

using namespace std;
void fun(int x, int y, int z) {
    const int a = 1, b=2, c=3;

    int A = a * x * x + b * y * y + c * z * z;
    int B = abs(A);
    double C = sqrt(static_cast<double>(x * y * z));
    double D = (A - B + A / B) / (C * C);

    cout << "Result of A = ax^2 + by^2 + cz^2: " << A << endl;
    cout << "Result of B = |ax^2 + by^2 + cz^2|: " << B << endl;
    cout << "Result of C = vxyz: " << C << endl;
    cout << "Result of D = (A - B + A/B) / C^2: " << D << endl;
}
int main() {
    int x = 2, y = 3, z = 4;
    fun(x, y, z);
    
    return 0;
}

