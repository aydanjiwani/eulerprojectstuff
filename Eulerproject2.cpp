#include <iostream>
using namespace std;

// main() is where program execution begins.

int main() {
  int i = 1;
  int j = 1;

  int sum = 0;
  while( i < 4000000 )
  {
    i= i+j;
    j = i-j;

    if(i%2==0)
      {
        sum+=i;
      }
cout << sum << "\n";
  }

}
