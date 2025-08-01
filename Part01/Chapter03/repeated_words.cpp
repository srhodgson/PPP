#include "../../std_lib_facilities.h"

int main ()
{
	int number_of_words = 0;
	string previous = " "; // Previous word; initialised to "not a word"
	string current;        // Current word
	while (cin >> current) // Read a stream or words 
	{
		++number_of_words;
		if (previous == current) // Check if the current word is the same as the last 
			cout << "word number " << number_of_words << " repeated: " << current << '\n';
		previous = current;
	}
}