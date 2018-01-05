#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  string t, s;
  cin >> t >> s;
  int i = 0;
  int len = t.length();
  string answer = "YES";
  while (i < len) {
    if (t[i] != s[len - 1 - i]){
      answer = "NO";
      break;
    }
    i++;
  }
  cout << answer << endl;
  return 0;
}
