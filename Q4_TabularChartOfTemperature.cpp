//////////////////////////////////////////////////////////////////////////////////////////////
// Name: Rehmat Ali
// Reg No: 2023609
// CS 101 Assignment - 3
// This program prints tabular chart of temperature in Fahrenheit to Celsius and vice versa
//////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <iomanip>
using namespace std;

double celsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}
double fahrenheit(double celsius) {
    return celsius * 9 / 5 + 32;
}
int main() {
	cout << "<<<<<<<<TABULAR CHART>>>>>>>>\n" ;
    cout << "Celsius to Fahrenheit Chart:" << endl;
    cout << setw(10) << "Celsius" << setw(15) << "Fahrenheit" << endl;

    for (int celsiusTemp = -100; celsiusTemp <= 100; celsiusTemp += 10) {
        cout << setw(10) << celsiusTemp << setw(15) << fixed << setprecision(2) << fahrenheit(celsiusTemp) << endl;
    }

    cout << endl;
    cout << "Fahrenheit to Celsius Chart:" << endl;
    cout << setw(15) << "Fahrenheit" << setw(10) << "Celsius" << endl;

    for (int fahrenheitTemp = 0; fahrenheitTemp <= 200; fahrenheitTemp += 20) 
	{
        cout << setw(15) << fahrenheitTemp << setw(10) << fixed << setprecision(2) << celsius(fahrenheitTemp) << endl;
    }
    return 0;
}

