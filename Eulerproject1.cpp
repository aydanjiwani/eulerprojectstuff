#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <cstdlib>
#include <ctime>


using namespace std;

// Problem: Find the sum of all the multiples of 3 or 5 below 1000.

int main() {
srand((unsigned)time(0));
  int spin = (rand()%64);
  cout << spin << "\n";
  int rng = 0;
for(int i = 0; i < 6; i++)
{
  if(spin/2 >= 1)
  {
    rng++;

    spin = spin/2;
cout << spin << "\n";
    }
  else{break;}
}
 int result = rng;

  return result;
}
