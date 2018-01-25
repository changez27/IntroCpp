#include<iostream>
using namespace std;

struct node
{
	int info;
	node*link;
}*start,*ptr;

node first(int data)
{	ptr=new node;
	ptr->info=data;
	ptr->link=start;
}

void display()
{	if(start==NULL)
		cout<<"list empty\n";
	else
		for(ptr->link=start;ptr->link!=0;ptr=ptr->link)
			cout<<"list-> "<<ptr->info;
}

void listin()
{
}

int main()
{	char ch;
	cin>>ch;		
	do{first(5);}while(ch=='y');
}
