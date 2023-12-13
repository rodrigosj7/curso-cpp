#include <iostream>

using namespace std;

float pow(float x, int y) {
  float result = 1;

  for (int i = 1; i <= y; i++) {
    result *= x;
  }

  return result;
}

int main() {
  float number, result;
  int expoent;

  cout << "type an number: ";

  cin >> number;

  cout << "\nType expoent please: ";
  cin >> expoent;

  result = pow(number, expoent);
  cout << endl << "Result: " << result << endl;

  return 0;
}