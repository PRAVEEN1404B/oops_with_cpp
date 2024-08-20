#include <iostream>
using namespace std;
class p
 {
   int x,y;
   public: void get_data();
           friend void sum(p);
 };

void p::get_data()
 {
   cout << "enter x :: " << endl;
   cin >> x;
   cout << "enter y :: "<< endl;
   cin >> y;

 }
 
void sum(p k)
 {
   int sum;
   sum = k.x + k.y;
   cout << " sum :: " << sum;
 }

int main()
 {
   p obj;
   obj.get_data();
   sum(obj);
   return 0;
 }
   
