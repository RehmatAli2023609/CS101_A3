////////////////////////////////////////////////////////////////////////
// Name: Rehmat Ali
// Reg No: 2023609
// CS 101 Assignment - 3
// This program is the output of the given codes of Q 9 part 4
////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

void ALotOfFun(int n, char from, char to, char aux){ 
    if (n == 0) { 
        return; 
    } 
    ALotOfFun(n - 1, from, aux, to); 
    cout << "Move " << n << " from " << from << " to " << to << endl; 
    ALotOfFun(n - 1, aux, to, from); 
} 
  
int main(){ 
    int N = 3; 
    ALotOfFun(N, 'A', 'C', 'B'); 
    return 0; 
}

