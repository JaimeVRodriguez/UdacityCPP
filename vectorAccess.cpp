#include <iostream>
#include <vector>
using std::vector;
using std::cout;

int main() {
    // Access individual elements of vector
    vector<int> a = {0, 1, 2, 3, 4};
    cout << a[0];
    cout << a[1];
    cout << a[2];
    cout << "\n";

    // Access 2D vector
    vector<vector<int>> b = {{1, 1, 2, 3},
                             {2, 1, 2, 3},
                             {3, 1, 2, 3}};

    cout << b[0][1];
    cout << "\n";

    // Print size of vecotr
    cout << a.size() << "\n";

    // 2D vector length
    cout << b[1].size() << '\n';


}
