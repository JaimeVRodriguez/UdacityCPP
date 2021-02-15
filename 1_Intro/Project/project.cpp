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

enum class State {kEmpty, kObstacle};

string CellString(State cell) {
  switch (cell) {
    case State::kObstacle :
      return "⛰️ ";
    default:
      return "0 ";
  }
}

vector<State> ParseLine(string line) {
  istringstream sline(line);
    int n;
    char c;
    vector<State> row;
    while (sline >> n >> c && c == ',') {
      if (n == 0) {
        row.push_back(State::kEmpty);
      }
      else {
        row.push_back(State::kObstacle);
      }
    }
    return row;
}


vector<vector<State>> ReadBoard(string path) {
  vector<vector<State>> board{};
  ifstream file (path);

  if (file) {
    string line;
    while (getline(file, line)) {
      vector<State> row = ParseLine(line);
      board.push_back(row);
    }
  }
  return board;
}


void PrintBoard(vector<vector<State>> board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
      cout << CellString(board[i][j]);
    }
    cout << "\n";
  }
}



int main() {
  auto board = ReadBoard("1.board");
  PrintBoard(board);
}
