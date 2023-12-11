#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "Diga um numero inteiro nao negativo: ";
  cin >> n;

  int soma = 0;
  int cont = 1;

  // while (cont <= n) {
  //   soma += cont;
  //   cont ++;
  // }

  // do {
  //   soma += cont;
  //   cont ++;
  // } while (cont <= n);

  for (int c = 1; c <= n; c++) {
    soma += c;
  }

  cout << "!" << "n = " << soma << endl;

  return 0;
}
