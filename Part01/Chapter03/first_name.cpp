// read and write a first name
#include "../../std_lib_facilities.h"

int main() {
    cout << "Please enter your first name (followed by 'enter'):\n";
    string first_name;    // first_time is variable type of string
    cin >> first_name;    // read characters into first_name
    cout << "hello, " << first_name << "!\n";
}