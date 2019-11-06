#include<iostream>
using namespace std;
int toh(int n,int l,int m,int r){	
	if(n==1){
		cout<<"("<<l<<","<<r<<")\n";
		l=r;
	}
	else{
		toh((n-1),l,r,m);
		cout<<"("<<l<<","<<r<<")\n";
		toh((n-1),m,l,r);
	}
	
}

int main(){
	int N,L=1,M=2,R=3;
	cout<<"enter no. of disks in tower of hanoi ";
	cin>>N;
	cout<<"moves to solve the problem are\n";
	toh(N,L,M,R);
}
