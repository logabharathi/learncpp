#include <iostream>
using namespace std;

int main ()
{
	int a, b;

	cout << "Enter a number: ";
	cin >> a;
	cout << "Enter a number: ";
	cin >> b;

	if(a < b) {
		cout << "First number is less than second\n";
		cout << "Their difference is: " << b-a;
	}

	return 0;
}
