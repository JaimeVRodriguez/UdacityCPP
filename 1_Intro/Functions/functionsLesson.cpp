/*
In the cell below, there is a
simple function to add two
numbers and return the result.
Test the code below, and click
the button for a more in-depth explanation.
*/

// Lesson
#include <iostream>
using std::cout;

// Function declared and defined here.
int AdditionFunction(int i, int j)
{
    return i + j;
}

// When nothing is "returned" use void
void PrintStrings(string a, string b) {
  cout << a + "\n" + b << "\n";
}



int main()
{
    auto d = 3;
    auto f = 7;
    cout << AdditionFunction(d, f) << "\n";

    //////////////


    string s1 = "C++ is ";
    string s2 = "super awesome.";
    PrintStrings(s1, s2);
}
