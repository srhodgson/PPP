#include "../../std_lib_facilities.h"

int main()
{
	double d = 0;
	while (cin >> d)
	{
		int i = d; // Try to squeeze a double into an int
		char c = i; // Try to squeeze an int into a char
		int i2 = c; // Get the integer value of the character
		cout << "d == " << d
			<< " i == " << i
			<< " i2 == " << i2
			<< " char(" << c << ")\n";
	}
}