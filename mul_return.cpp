#include <iostream>
using namespace std;

int mul (int x, int y);

int main ()
{
	int answer;

	answer = mul (19, 20);
	cout << "The answer is " << answer ;

	return 0;
}

int mul (int x, int y)
{
	return x * y;
}
