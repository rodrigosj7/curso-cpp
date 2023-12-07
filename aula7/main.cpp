#include <iostream>

using namespace std;

float input(string msg) {
  float data;
  cout << msg << endl;
  cin >> data;
  return data;
}

int main() {
  float nota1, nota2;
  nota1 = input("1rst nota? ");
  nota2 = input("2nd nota? ");

  float media = (nota1 + nota2) / 2;
  cout << "sua media foi " << media << endl;

  // cout << ((media >= 5) ? "Aluno aprovado" : "aluno reprovado") << endl;
  
  /*
  if (media >= 5) {
    cout << "Aluno aprovado!!" << endl;
  } else {
    cout << "Aluno reprovado!!" << endl;
  }
  */

  /*
    0   - 2.5: D
    2.5 - 5.0: C
    5.0 - 7.5: B
    7.5 - 10 : A
  */
  if (media < 2.5) {
    cout << "Nota Final: D\n";
  } else if (media < 5) {
    cout << "Nota Final C\n";
  } else if (media > 5) {
    cout << "Nota Final B\n";
  } else {
    cout << "Nota Final A\n";
  }

  float freq;

  freq = input("Qual sua frequência? ");

  cout << ((media < 5 || freq < 75) ? "Aluno Reprovado!\n" : "Aluno Aprovado!\n");
  
  return 0;
}