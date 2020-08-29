#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	float n1,n2;
	char symb;
	float result;
	cout<<"\t";
	cin>>n1>>symb>>n2;
	
	while(symb!='S')
	{
		switch(symb)
		{
		case '+':
			result=n1+n2;
			break;
		case '-':
			result=n1-n2;
			break;
		case '*':
			result=n1*n2;
			break;
		case '/':
			result=n1/n2;
			break;
		}
		cout<<"+|\n-|   "<<n1<<"\nx|"<<" "<<symb<<" "<<n2<<"\n____________________\n";
		cout<<"/| = "<<result;
		n1=result;
		cin>>n2;
	
	}
	getch();
}

