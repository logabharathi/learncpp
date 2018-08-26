/* This program uses two functions: main()
and myfunc()
*/

#include <iostream>
using namespace std;

void myfunc (); // function prototype

int main ()
{
	cout << "In main()";
	myfunc ();

	cout << "Back in main()";

	return 0;
}

void myfunc ()
{
	cout << " Inside myfunc() ";
}
