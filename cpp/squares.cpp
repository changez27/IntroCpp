#include<iostream>
using namespace std;
int main()
{
int a,b;
int sq=0;
cout<<"enter a range of no. to find no. of perfect squares between them \n";
cin>>a>>b;
for(int i=a;i<=b;i++)
	{
	for(int x=1;x<=i/2;x++)
		{if(i==x*x)
			{cout<<i<<" is a perfect square \n";
			sq++;
			}
		}
	}
cout<<"total no. of perfect squares between "<<a<<" and "<<b<<" are "<<sq<<"\n";
}
