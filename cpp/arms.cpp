#include<iostream>
using namespace std;
int main(){
	int a,b,arms=0,z,sum;
	cout<<"enter a range of no. to find no. of armstrong no. between them\n";
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		z=i;
		sum=0;
		while(z!=0){
			int p=z%10;
			sum=sum+(p*p*p);
			z=z/10;
		}
		if(sum==i){
			arms++;
			cout<<i<<" is an armstrong no.\n";
		}
	}
	cout<<"total no. of armstong no. between "<<a<<" and "<<b<<" are "<<arms<<"\n";
}
