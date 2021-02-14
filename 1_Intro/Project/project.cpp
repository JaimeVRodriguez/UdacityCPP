#include <iostream>
#include <vector>
#include <fstream>
using std::cout;
using std::string;
using std::vector;
using std::ifstream;

void ReadBoard(string path) {
  ifstream file (path);

  if (file) {
    string line;
    while (getline(file, line)) {
      cout << line << "\n";
    }
  }
}

// TODO: Add PrintBoard function here.
void PrintBoard(vector<vector<int>> board) {
  for (auto line : board) {
    for (auto item : line) {
      cout << item << " ";
    }
    cout << "\n";
  }
}

int main() {
  vector<vector<int>> board{{0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 0, 0, 0, 1, 0}};
  // TODO: Call PrintBoard function here.
  PrintBoard(board);

  ReadBoard("1.board");

}
