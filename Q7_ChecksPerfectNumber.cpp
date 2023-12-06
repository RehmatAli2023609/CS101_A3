/////////////////////////////////////////////////////
// Name: Rehmat Ali
// Reg No: 2023609
// CS 101 Assignment - 3
// This Prgram checks perfect number and factors
////////////////////////////////////////////////////
#include <iostream>
using namespace std;

bool isPerfectNumber(int number) {
    int sum = 1;

    for (int i = 2; i <= number / 2; ++i) {
        if (number % i == 0) {
            sum += i;
        }
    }
    return (sum == number);
}
int main() {
    cout << "Perfect numbers between 1 and 1000 are:" << endl;

    for (int num = 2; num <= 1000; ++num) {
        if (isPerfectNumber(num)) {
            cout << num << " is a perfect number. Factors: 1";

            for (int i = 2; i <= num / 2; ++i) {
                if (num % i == 0) {
                    cout << ", " << i;
                }
            }

            cout << endl;
        }
    }

    return 0;
}

