#include <iostream>

using namespace std;

// escopo global
string globalVar = "sou global";

// Constante
#define pi 3.14;
#define curtir cout << "curta esse video!"; // pode-se definir uma tarefa além das constantes

void inscreverSe() {
  globalVar = "Posso ser acessado aqui também!";
  cout << "Se inscreva no canal do Professor Douglas Maiolli!!" << endl;
}

// adicionar o & aponta pra variavel passada pra função, tendo acesso dela no nosso escopo local, podendo mudar-la aqui e ser alterada lá consequentemente
float soma(float &a, float &b) {
  // result só pode ser acessado dentro do escopo da função
  float result = a + b;

  return result;
}

int main() {

  inscreverSe();

  float a = 3, b = 5;

  float res = soma(a, b);

  cout << "resultado: " << res << endl;

  //cout << pi;

  curtir;

  return 0;
}

