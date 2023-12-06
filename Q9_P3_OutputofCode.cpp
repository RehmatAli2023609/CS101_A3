////////////////////////////////////////////////////////////////////////
// Name: Rehmat Ali
// Reg No: 2023609
// CS 101 Assignment - 3
// This program is the output of the given codes of Q 9 part 3
////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;
int function(int a, int b){ 
    return a + b; 
    cout << "int";
}

float function(float a, float b){    
    return a - b; 
    cout << "float";
}

double function(double a, double b){ 
    return a * b; 
    cout << "double";
}

int main(){
    float i = 5, j = 6;
    cout << function(i, j) << endl;
    return 0;
}

