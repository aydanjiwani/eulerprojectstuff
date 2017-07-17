#include <iostream>
#include <vector>
using namespace std;

//Problem: Find the sum of all the primes below two million.

int main()
{
  int sieve;
int i = 14;
long int sum = 0;
std::vector< int> primes(6);
primes[0] = 2;
primes[1] = 3;
primes[2] = 5;
primes[3] = 7;
primes[4] = 11;
primes[5] = 13;
while (i < 2000000)
  {
    sieve = 0;
    i++;
    for(int j=0; j<primes.size();j++)
    {
      if(i%primes[j]!=0)
      {sieve++;}


  }
    if(sieve==primes.size())
    {
      primes.push_back (i);
    }
    cout << i << "\n";

  }

for(int k=0; k<primes.size(); k++)
  {
    sum = sum + primes[k];

  }

      cout << sum;



}
