////////////////////////////////////////////////////////////////////////
// Name: Rehmat Ali
// Reg No: 2023609
// CS 101 Assignment - 3
// This program is the output of the given codes of Q 9 part 1
////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

int value (int a, int b)
{
    return a - b;
}

int main(){
	
    int x = 2, y = 3;
    cout << (x++, --y);
    
    return 0;
}

