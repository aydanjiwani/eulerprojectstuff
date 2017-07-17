#include <iostream>
using namespace std;

// main() is where program execution begins.

int main() {
  bool numberfound = false;
  int i = 0;
  int factors = 0;

  while(factors < 20)
  {
    factors = 0;
    i+=20;
    for(int j = 1; j <= 20; j++)
    {
      if(i%j == 0)
      {
        factors++;

      }

    }


  }
cout << i;

}
