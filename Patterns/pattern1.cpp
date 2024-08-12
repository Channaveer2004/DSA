#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter n:";
  cin >> n;
  cout << endl;
  cout << endl;
  cout << endl;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 2 * n - i - 2; j++) {
      cout << "*";
    }

    for (int j = 0; j < 2 * (i) + 1; j++) {
      if (j % 2 == 0) {
        cout << i + 1;
      } else {
        cout << "*";
      }
    }
    for (int j = 0; j < 2 * n - i - 2; j++) {
      cout << "*";
    }
    cout << endl;
  }
}