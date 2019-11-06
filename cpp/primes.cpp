#include<iostream>
using namespace std;
int main(){
	int a,b;
	int primes=0;
	cout<<"enter a range of no. to find no. of prime no. between them \n";
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		int z=0;
		for(int x=2;x<i/2;x++){
			if(i%x==0){
				z=1;
				}
			}
		if(z==0){
			primes++;
			cout<<i<<" is a prime no.\n";
			}
	}
	cout<<"total no. of prime no. between "<<a<<" and "<<b<<" are "<<primes<<"\n";
}
