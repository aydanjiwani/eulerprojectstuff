#include <iostream>
using namespace std;

// Problem: By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

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
