#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
  // Get input
  int n;
  cin >> n;

  // Construct graph
  int elem;
  map<int, vector<int>> tree;
  vector<int> visited;
  visited.push_back(0);
  visited.push_back(0);
  for (int  i = 2; i <= n; i++) {
    cin >> elem;
    tree[elem].push_back(i);
    visited.push_back(0);
  }

  bool ans = true;
  for (int i = 1; i <= n; i++) {
    int count = 0;
    if (visited[i] == 0) {
      for (int j = 0; j < (int)tree[i].size(); j++) {
        if (tree.find(tree[i][j]) == tree.end()) {
          count++;
          visited[tree[i][j]] = 1;
        }
      }
      if (count < 3) {
        ans = false;
        break;
      }
    }
  }
  if (ans)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
