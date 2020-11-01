#include<iostream>
using namespace std;
int main()
{
	int a[5]={1,2,3,4,5};
    int element,position;
	cout<<"Predefined array is = ";
	for(int i=0;i<5;i++)
{
	
	cout<<a[i]<<endl;
}
cout<<endl<<"Enter Element to Insert or Add in Array ";
cin>>element;
for(int i=0;i<5;i++)
{
	if(element=a[i])
{
position=i;
		 } }        
for(int i=position;i<4;i++)
{
	a[position]=a[i+1];
}

for(int i=0;i<4;i++)
{
	cout<<a[i];
}}
