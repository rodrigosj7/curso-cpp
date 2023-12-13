#include <iostream>
#include <string>

using namespace std;

void factorial(int number)
{
  int finalResult = number;
  cout << number << "! = " << number;

  for (int factNum = 1; factNum < number; factNum++)
  {
    int lastNumber = number - factNum;
    finalResult *= lastNumber;

    cout << " x " << lastNumber;
  }

  cout << " = " << finalResult << endl;
}

int main()
{
  int number;
  string inputMessage = "(less than 0 to quit) Type an number: ";

  while (true)
  {
    cout << inputMessage;
    cin >> number;

    if (number >= 0)
    {
      factorial(number);
    }
    else
    {
      break;
    }
  }

  return 0;
}
