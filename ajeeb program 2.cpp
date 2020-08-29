#include<iostream>
using namespace std;

int main()
{
cout<<"Enter The Text ";
 char line[80];

do
{ 
cout<<"good";
cin.getline(line,80);
if (*line) cout << "\t[" << line << "]\n";

}
while (*line);
}
