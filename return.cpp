#include <iostream>
using namespace std;
class o
{
 public: void get_data();
        o area();
        int are;
        int l,b;
};

void o::get_data()
{
  cout << "enter l :: ";
  cin >> l;
  cout << "enter b :: "; 
  cin >> b;
}

o o::area()
{
 o d,g;
 g.get_data();
 d.are = g.l * g.b;
 return d;
}

int main()
{
  o y,x;
  y=x.area();
  cout << "area :: " << y.are;
 }
 