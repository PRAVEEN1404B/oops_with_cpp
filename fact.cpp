#include <iostream>
#include <cstdlib>
using namespace std;
 class a
 {
   int x,f;
  public: int factorial(int);
 };

int a::factorial(int x)
{
 if(x==0)
 {
  return 1;
 }
else
 {
  int f=1;
  int sum=0;
  for(int i=1;i<=x;i++)
  {
   f=f*i;
   sum+=f;
  }
  return sum;
 }
 } 

int main()
{
 a obj;
 int n;
 cout << "enter n of factorial :: ";
 cin >> n;
 int r=obj.factorial(n);
 cout << "sum of factorial  " << n << " :: "<<r;
 return 0;
} 