#include <iostream>
using namespace std;

// Problem: Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

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
