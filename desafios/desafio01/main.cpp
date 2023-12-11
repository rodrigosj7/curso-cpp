/*
  Dada a função f(x) = x² - 3x + 5.

  Crie um algoritmo em C++, que tenha uma função
  que calcula o valor de f(a), em que a é um número
  real informado pelo usuário.
*/

#include <iostream>
#include <math.h>

using namespace std;

// f(x) = x² - 3x + 5
float expression(float x) {
  float result = pow(x, 2) - (3*x) + 5;
  return result;
}

int main() {
  int num;
  cout << "Type an number: ";
  cin >> num;

  if (num > 0) {
    cout << expression((float) num);
    return 0;
  }

  cout << "Please type an valid number!!" << endl;


  return 0;
}