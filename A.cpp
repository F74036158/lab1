#include<iostream>
using namespace std;
int main()
	{
	int a;
	cout<<"Enter a number:";
	cin>>a;
	while(1)
		{
		if(a==1)
			return 0;
		else if(a%2==1)
			a=(3*a)+1;
		else if(a%2==0)
			a=a/2;
		else
			{
			cout<<"Error!";
			return 0;
			}
		cout<<"n="<<a<<'\n';
		}
	return 0;
	}
