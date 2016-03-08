//Jonathan Sligh's Prime number algorithm
#include <iostream>
#include <cstring>
#include <assert.h>
#include <list>
#include <algorithm>
using namespace std;
int main()
{
   cout << "Please enter a number between 1 and infinity: "; //works up to like 100MILL
   long n;
   cin >> n;
   int size = (n);
   int* primes;
   primes = new int[size];
   primes[0] = 2;
   int counter = 1;
   int rawr = 0;
   cout << 2 << "\n";
   for (int i = 3; i <= (n);i += 2)
   {
      rawr = 0;
      for (int j = 0; j < counter; j++)
      {
         if (i % primes[j] == 0)
         {
            rawr += 1;
         }
      }
      if (rawr == 0)
      {
         primes[counter] = i;
         counter++;
         cout << i << "\n";
      }
   }
   cout << "There are " << counter << " prime numbers between 1 and " << n << "\n";
}