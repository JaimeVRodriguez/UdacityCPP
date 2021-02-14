/*
Now that you've seen how to
define and call a function,
try this yourself in the cell
below with a slightly more
complicated example. Your
function should accept a vector
of ints as its argument and
return the sum of all the ints
in the vector. If you get stuck,
click the solution button for help.
*/


#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int SumFunction(vector<int> numbers) {
  auto total = 0;

  for(auto number : numbers) {
    total += number;
  }

  return total;
}



int main() {
  vector<int> v = {1, 2, 3};

  cout << SumFunction(v) << "\n";  
}
