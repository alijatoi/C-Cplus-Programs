#include <iostream>
#include <string>
using namespace std;
int main() { 
//char aa[20];
//cin>>aa;

int test[25],i=0,j;
char a[25]="This is a test string";

while(a[i]!='\0') {test[i]=a[i]; i++;}
for(j=0;j<i-1;j++) 
cout<<" "<<test[j];
return 0;


}
