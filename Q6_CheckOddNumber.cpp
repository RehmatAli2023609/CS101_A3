/////////////////////////////////////////////////////////////
// Name: Rehmat Ali
// Reg No: 2023609
// CS 101 Assignment - 3
// This program checks whether a number is odd or not
///////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

enum Bool { falseValue = 0, trueValue };

Bool isOdd(int num) {
    return (num % 2 == 1) ? trueValue : falseValue;
}
int main() {
    int input;

    cout << "Enter a series of integers (enter 0 to stop):" << endl;

    do {
        cout << "Enter an integer: ";
        cin >> input;

        if (input != 0) {
        	
            cout << "Is " << input << " odd? " << ((isOdd(input) == trueValue) ? "Yes" : "No") << endl;
        }
        
    } while (input != 0);
    
    return 0;
}

