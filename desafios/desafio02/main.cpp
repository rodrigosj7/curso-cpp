#include <iostream>
#include <string.h>

using namespace std;

float getAlunoMedia(int provasLen)
{
  string aluno;
  float soma;

  cout << "Nome do Aluno: ";
  cin >> aluno;

  for (int count = 1; count <= provasLen; count++)
  {
    float nota;

    cout << "[" << aluno << "] Prova" << count << ": ";
    cin >> nota;
    soma += nota;
  }

  float media = soma / 3;
  return media;
}

int main()
{
  char response = 's';
  float soma;
  int countAlunos = 0;

  while (true)
  {
    if (response == 's')
    {
      float mediaAluno = getAlunoMedia(3);

      cout << "\n------------------- \nDeseja adicionar mais um aluno (s/n)?";
      cin >> response;

      soma += mediaAluno;
      countAlunos += 1;
    }
    else
    {
      float media = soma / (float)countAlunos;
      cout << "Media da sala e: " << media << endl;

      break;
    }
  }
}