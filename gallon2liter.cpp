// This program converts gallons to litres

#include <iostream>
using namespace std;

int main ()
{
	double gallons, liters;

	cout << "Enter number of gallons: ";
	cin >> gallons;

	liters = gallons * 3.7854;
	cout << "Liters: " << liters;
	return 0;
}
