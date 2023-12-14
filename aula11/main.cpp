#include <iostream>

using namespace std;

int main() {
  int var1;
  int* pont1;

  var1=5;
  pont1=&var1;

  cout << "Valor da variavel, atraves do seu nome: " << var1 << endl;
  cout << "Endereco armazenado no ponteiro: " << pont1 << endl;
  cout << "Valor da variavel, atraves do ponteiro: " << *pont1 << endl;

  int var2;
  // var2 = var1;
  var2 = *pont1;

  // cout << var2 << endl;

  pont1 = &var2;
  // cout << &pont1;

  int* pont3 = new int; // alocação de memória predefinido para um inteiro
  *pont3 = 35;

  cout << pont3 << endl;
}
