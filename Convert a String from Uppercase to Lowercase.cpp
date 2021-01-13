#include<iostream>
#include<string.h>
using namespace std;
 
int main()
{
      char str[50],str1[50];
      int i;
      cout<<"\nEnter any String in uppercase :: ";
      gets(str);
 
      strcpy(str1,str);
 
      for(i=0;i<=strlen(str);i++)
      {
            if(str[i]>=65 && str[i]<=92)
            {
            str[i]=str[i]+32;
            }
      }
      cout<<"\nThe String [ "<<str1<<" ] in Lowercase = [ "<<str<<" ]\n";
 
     return 0;
}
