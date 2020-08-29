#include<iostream>
using namespace std;
int main()
{
	int num,prime,i;
	cin>>num;
	if(num==2||num==3)
	{
		cout<<num<<" is prime ";
		return 0;
	}
	else {
	
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			prime=0;
			break;
		}
		else
		{
			prime=1;
		}
	}
	} 
	if(prime==1)
	{
		cout<<num<<" is Prime";
		
	}
	else
	cout<<num<<" is Not prime";
}
