#include <iostream>
 
using namespace std;
 
int main () {
   // declare simple variables
   int    i=5;

 
   // declare reference variables
   // we need to initalize the reference while declaring it otherwise it will give error
   int&    r = i; 
  //now changing the value of r will also change the value of i ;
   r=10;
  
   cout << "Value of i : " << i << endl;
   cout << "Value of i reference : " << r  << endl;
   
   r=15;
   cout<<"value of i : "<<i<<endl;
 
  
   
   return 0;
}
