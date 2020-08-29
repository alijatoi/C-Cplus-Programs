#include<iostream>
#include<conio.h>
	using namespace std;
	
//void sort(int& a, int& b, int& c)
//{
//	if(a>b)
/*	{
		swap(a,b);
	}
	if(b>c)
	{
		swap(b,c);
		
	}
	if(a>b)
	{
		swap(a,b);
	}
}*/
int main()
{
	string as;
	cout<<"Enter the string: ";
	getline(cin, as);
	
	for(int i=0; i<as.length(); i++)
	{
		
		if(as[i]>96 && as[i]<123)
			as[i]=as[i]-32;
			
	}
	
	cout<<as;
	getch();
}
