///////////////////////////////////////////////////////////////////////////////////////
// Name: Rehmat Ali
// Reg No: 2023609
// CS 101 Assignment - 3
// This program is the output of the given six statments that print ranges of numbers
///////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	
    srand(static_cast<unsigned int>(time(0)));

    int a1 = rand() % 2 + 2;         
    int b2 = rand() % 10 + 1;        
    int c3 = rand() % 100;           
    int d4 = rand() % 26 + 100;      
    int e5 = rand() % 3 - 1;         
    int f6 = rand() % 21 - 5;

    cout << "Random integer in the range from 2 to 3: " << a1 << endl;
    cout << "Random integer in the range from 1 to 10: " << b2 << endl;
    cout << "Random integer in the range from 0 to 99: " << c3 << endl;
    cout << "Random integer in the range from 100 to 125: " << d4 << endl;
    cout << "Random integer in the range from -1 to 1: " << e5 << endl;
    cout << "Random integer in the range from -5 to 15: " << f6 << endl;

    return 0;
}

