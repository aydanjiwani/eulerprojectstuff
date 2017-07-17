#include <iostream>
using namespace std;

// main() is where program execution begins.

int main() {
int x = 0;
int y = 0;
for (int i = 0; i <101; i++)
  {
    x+=i;


  }
  for (int j = 0; j <101; j++)
    {
      y+=(j*j);


    }

    cout <<(x*x)-y;
}
