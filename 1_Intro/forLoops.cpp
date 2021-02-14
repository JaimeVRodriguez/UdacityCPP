#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int main() {
    for (int i=0; i < 5; i++) {
      cout << i << "\n";
    }

    auto i = 1;
    // Increment
    auto c = i++;

    cout << "Post-increment example:" << "\n";
    cout << "The value of c is: " << c << "\n";
    cout << "The value of i is: " << i << "\n";
    cout << "\n";


    vector<int> v_1 = {1, 2, 3, 3, 5};
    // Reads like
    // for "i" in "a"
    for (int i: v_1) {
      cout << i << "\n";
    }


    /*
    Practice
    */

    for (int i = -3; i <= 10; i++) {
      cout << i << "\n";
    }

    vector<vector<int>> v_2 = {{1,2},
                      {3,4},
                      {5,6}};

    for(auto i: v_2) {
      for(auto j: i) {
        cout << j << " ";
      }
      cout << "\n";
    }


}
