#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
using std::cout;
using std::string;
using std::vector;
using std::ifstream;
using std::istringstream;


vector<int> ParseLine(string line) {
  istringstream sline(line);
    int n;
    char c;
    vector<int> row;
    while (sline >> n >> c && c == ',') {
      row.push_back(n);
    }
    return row;
}


vector<vector<int>> ReadBoard(string path) {
  vector<vector<int>> board{};
  ifstream file (path);

  if (file) {
    string line;
    while (getline(file, line)) {
      auto row = ParseLine(line);
      board.push_back(row);
    }
  }
  return board;
}


void PrintBoard(vector<vector<int>> board) {
  for (auto line : board) {
    for (auto item : line) {
      cout << item << " ";
    }
    cout << "\n";
  }
}



int main() {
  auto board = ReadBoard("1.board");
  PrintBoard(board);
}
