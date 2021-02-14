#include <iostream>
using std::cout;

int main()
{

    // Set a equal to true here.
    bool a = true;

    if (a) {
      cout << "Hooray! You made it into the if statement!" << "\n";
    }

    auto i = 0;

    while (i < 5) {
      cout << i << "\n";
      i++;
    }

    /*
    Practice
    Every even number using both techniques above
    */

    auto j = 1;

    while (j <= 10) {
      if (j % 2 == 0) {
        cout << j << "\n";
      }
      j++;
    }
}
