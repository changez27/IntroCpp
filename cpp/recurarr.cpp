#include<iostream>
using namespace std;

int arr[5];

void recur(int n)
{	
	if(n<=5)
	{	cout<<arr[n]<<"\n"; 
		recur(n+1);
	}
}

int main()
{	
	cout<<"enter data in array\n";
	for(int i=1;i<=5;i++)
		cin>>arr[i];
	cout<<"data entered\n";
	recur(1);
}
