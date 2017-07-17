#include <iostream>


using namespace std;

int swap(int n){
int reverse = 0;
int remainder;
while(n != 0)
    {
        remainder = n%10;
        reverse = reverse*10 + remainder;
        n /= 10;
    }
return   reverse;
}


int main() {
  int c = 0;
  int max = 0;
  for(int a = 999; a > 800; a--)
  {
    for(int b = 999; b > 800; b--)
    {
      c=a*b;
      if(c==swap(c))
      {
        if(c>max)
        {
          max = c;
        }
      }

    }

  }
cout << max;
}
