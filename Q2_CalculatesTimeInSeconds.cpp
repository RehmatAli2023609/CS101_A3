//////////////////////////////////////////////////////////
// Name: Rehmat Ali
// Reg No: 2023609
// CS 101 Assignment - 3
// This program calculates total time in seconds
//////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

float timeInSeconds(int hours, int minutes, int seconds, int milliseconds) {
	
    float timeInSeconds = static_cast<float>(hours * 3600 + minutes * 60 + seconds + milliseconds / 1000);

    return timeInSeconds;
}

int main() {

    int Hours = 1;
    int Minutes = 20;
    int Seconds = 30;
    int Milliseconds = 500;

    float calculated_result = timeInSeconds(Hours, Minutes, Seconds, Milliseconds);

    cout << "Total time in seconds = " << calculated_result << endl;

    return 0;
}

