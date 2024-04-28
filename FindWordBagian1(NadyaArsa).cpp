#include <iostream>
#include <vector>
#include <string>

using namespace std;
bool searchWord(vector<string> matrix, string world) {
  int rows = matrix.size();
  int cols = matrix[0].size();

  for (int i = 0; i < rows; i++) {
  if (matrix[i].find(word) != string::npos) {
     return true;
  }
}

for (int i = 0; i < cols; i++) {
  string colString = " ";
  for (int j - 0; j < rows; j ++) {
    colString += matrix[j][i];
  }
  if (colStrin.find(word) != string::npos) {
      return true;
  }
}
