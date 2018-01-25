#include<iostream>
using namespace std;

	int f,r,data,sz;
	int cq[sz];
	
int cqin()
{
	
	if(r==sz&&f==1)
		cout<<"OVERFLOW !!! OPERATION TERMINATED\n";

	else
	{
	if(f=r==0)
		{f=f+1;
		r=r+1;
		}
	r=r+1;
	if(r>sz)
		{r=1;
		}
	cout<<"enter data to be inserted ";
	cin>>data;
	cq[r]=data;
	
	}
}

int cqdel()
{
	if(f=r==0)
		{cout<<"UNDERFLOW !!! OPERATION TERMINATED\n";
		}
	else
	{
	cout<<"enter data in queue \n";
	for(int i=f;i<=r;i++)
		{cin>>cq[i];
		}
	
	f=f+1;
	if(f==sz)
		{f=1;
		}
	cout<<"new data\n";
	for(int i=1;i<=sz;i++)
		{cout<<cq[i]<<"\n";
		}
	}
}

void cqtraverse()
{
	cout<<"enter data\n";
	for(int i=f;i<=r;i++)
		cin>>cq[i];
	cout<<"data in queue\n";
	for(int i=1;i<=sz;i++)
		cout<<cq[i]<<"\n";
			
}	

int main()
{	
	cout<<"enter size of queue ";
	cin>>sz;
	cout<<"set front ";
	cin>>f;
	cout<<"set rear ";
	cin>>r;
int z;
cout<<"enter operation to be performed\nenter 1 for insertion\nenter 2 for deletion\nenter 3 for traversing\n";
cin>>z;
switch(z)
	{
	case 1:
		cqin();	
		break;
	case 2:
		cqdel();
		break;
	case 3:
		cqtraverse();
		break;
	}
}
