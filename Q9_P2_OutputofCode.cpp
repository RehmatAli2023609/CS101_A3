////////////////////////////////////////////////////////////////////////
// Name: Rehmat Ali
// Reg No: 2023609
// CS 101 Assignment - 3
// This program is the output of the given codes of Q 9 part 2
////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

void funcpp (int& a, int& b, int& c){
    a += 2; b *= 2;
    c /= 2;
}

int main(){
	
    int x = 1, y = 3, z = 8;
    (x, y, z);
    cout << "x =" << x << ", y =" << y << ", z =" << z;
    return 0;
}

