#include<iostream>
using namespace std;
int main(){
	int rows;
	cout<<"enter no. of rows ";
	cin>>rows;
	for(int i=rows;i>=1;i--){
		cout<<"\n";
		for(int j=1;j<=rows-i;j++)
			cout<<" ";
		for(int z=1;z!=i+1;z++)
			cout<<"* ";
		}
	cout<<"\n";
}
