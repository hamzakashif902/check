#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	float d;
	cout<<"Enter no 1 for division"<<endl;
	cin>>a;
	cout<<"Enter no 2 for division"<<endl;
	cin>>b;
	if(b!=0)
	{
		if(a%b==0)
		{
			c=a/b;
			cout<<"Answer of division is integer"<<endl<<c;
		}
		else
		{
			d=(float)a/(float)b;
			cout<<"Answer of division is float"<<endl<<d;
		}
	}
   
	 else
	{
		cout<<"Second no cannot be zero";
	}
	return 0;

}
