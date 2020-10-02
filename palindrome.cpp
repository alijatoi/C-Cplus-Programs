#include <iostream>
using namespace std;
int main(void){
    // Your code here!
     int num,num2,ans=0,rem;
     num=101;
     num2=num;
   while(num>0)
   {
       rem=num%10;
       ans=(ans*10)+rem;
       num/=10;
   }
   cout<<ans;
   if(ans==num2)
   {
cout<<"  IS Palindrome" ;  }
}

