#include <cstdlib>
#include <iostream>
using namespace std;
 class a
 {
  int n,f;
 public:
    int factorial(int);
 };

int a::factorial(int n)
{
 if(n >= 1)
 {
  return 1;
 }
 else
 {
 f = n * factorial(n-1);
 return f;
 }
 }
int  main()
{
 a obj;
 int x;
 cout << "enter no of factorial  :: ";
 cin >> x;
 int r;
 r = obj.factorial(x);
 cout << "factorial of "<< x << " is :: " << r;
 return 0;
} 
 
 