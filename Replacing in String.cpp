#include<iostream>
#include<conio.h>
	using namespace std;
#include<string>
#include<cstring>
int main(){
	string n;
	cout<<"Enter string: ";
	getline(cin,n);
	int ind=n.find(' ');
	while(ind<n.size())
	{	n.replace(n, 1 ," .")
		ind=n.find(' ');
	}	cout<<"\n"<<n;
	
getch();  }

