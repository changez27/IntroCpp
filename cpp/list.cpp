#include<iostream>
using namespace std;

struct node
{
	int info;
	node*link;
};

int main()
{
	node*p;
	p=new node;
	cout<<"enter data: ";
	int data;
	cin>>data;
	p->info=data;
	p->link=NULL;
	cout<<"node created "<<p->info<<"\n";
}
