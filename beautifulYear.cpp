#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
  int y;
  cin >> y;
  string year;
  while (true){
    y++;
    year = to_string(y);
    if (year[0] != year[1] && year[0] != year[2] && year[0] != year[3] &&
      year[1] != year[2] && year[1] != year[3] && year[2] != year[3])
        break;
  }
  cout << year << endl;
  return 0;
}
