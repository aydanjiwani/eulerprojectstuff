#include <iostream>
#include <vector>
using namespace std;

//Problem: What is the 10 001st prime number?

int main()
{
  int sieve;
int i = 14;
std::vector<int> primes(6);
primes[0] = 2;
primes[1] = 3;
primes[2] = 5;
primes[3] = 7;
primes[4] = 11;
primes[5] = 13;
while (primes.size()<10001)
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

  }

cout<<primes[10000];



}
