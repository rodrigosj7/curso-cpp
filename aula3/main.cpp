#include <iostream>

using namespace std;

int main() {

  int inteiro;
  inteiro = 5.2;
  cout << inteiro << endl;

  float real;
  real = 5.2e99; // 5 elevado a 99
  cout << real << endl;

  double real2;
  real2 = 5.2e99;
  cout << real2 << endl;

  bool booleano;
  booleano = false;
  cout << booleano << endl;

  char letra;
  letra = 'p';
  cout << letra << endl;

  string amor;
  amor = "Priscila";
  cout << amor << endl;

  string nome;
  cout << "Qual o seu nome? ";
  cin >> nome;
  cout << "seu nome e " << nome << endl;

  return 0;
}