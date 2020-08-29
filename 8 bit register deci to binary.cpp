#include<iostream>
#include<conio.h>
	using namespace std;
int main()
{
	cout<<"Enter the number: ";
	int n;
	cin>>n;
	for(int i=128;i>0;i=i/2)
	{	if((i&n)==0)
			cout<<"0 ";
		if((i&n)!=0)
			cout<<"1 ";
	}
	getch();
}

