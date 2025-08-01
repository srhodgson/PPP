#include "../../std_lib_facilities.h"

int main ()
{
	string previous = " "; // Previous word; initialised to "not a word"
	string current;        // Current word
	while (cin >> current) // Read a stream or words 
	{
		if (previous == current) // Check if the current word is the same as the last 
			cout << "repeated word: " << current << '\n';
		previous = current;
	}
}