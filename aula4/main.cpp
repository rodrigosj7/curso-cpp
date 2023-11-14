#include <iostream>
#include <math.h>

using namespace std;

int main() {

  int a=5, b=2;

  cout << "soma: " << a + b << endl;

  int sub = a - b;
  cout << "subtração: " << sub << endl;

  int mult = a * b;
  cout << "multplicação: " << mult << endl;

  //int div = a/b;
  // conversão de tipo
  float div = (float)a/(float)b;
  cout << "divisão: " << div << endl;

  int restodiv = a%b;
  cout << "resto divisão: " << restodiv << endl;

  float pot = pow((double)a, (double)b); // a^b 5x5=25
  cout << "potência: " << pot << endl;



  // Incremento e Decremento

  cout << "a antigo: " << a << endl;

  //a = a+1, a += x(1, 2, 3 and more)
  //a++; 
  // a -= 1;
  // a--;
  // a = a -1;
  //a -= 4;
  //a *= 5;

  cout << "a novo: " << a << endl;

  return 0;
}