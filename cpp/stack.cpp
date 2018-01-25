#include<iostream>
using namespace std;
int push()
{
int top,n,st[n];
cout<<"enter size of stack ";
cin>>n;
cout<<"enter top of stack ";
cin>>top;

if(top==n)
{
cout<<"OVERFLOW !!! OPERATION TERMINATED\n";
}
else
{cout<<"enter data in stack\n";
for(int i=1;i<=top;i++)
{cin>>st[i];
}
cout<<"enter data to be inserted ";
int x;
cin>>x;
top=top+1;
st[top]=x;
cout<<"new data\n";
for(int i=1;i<=top;i++)
{cout<<st[i]<<"\n";
}
}
}
int pop()
{
int top,n,st[n];
cout<<"enter size of stack ";
cin>>n;
cout<<"enter top of stack ";
cin>>top;


if(top==0)
{cout<<"UNDERFLOW !!! OPERATION TERMINATED\n";
}
else
{cout<<"enter data in stack\n";
for(int i=1;i<=top;i++)
{cin>>st[i];
}
cout<<"deleted data is "<<st[top];
top=top-1;
cout<<"\nnew data\n";
for(int i=1;i<=top;i++)
{cout<<st[i]<<"\n";
}
}
}


int main()
{
int z;
cout<<"enter operation to be performed\nenter 1 for insertion\nenter 2 for deletion\nenter 3 for traversing\n";
cin>>z;
switch(z)
{
case 1:
push();
break;
case 2:
pop();
break;
}
}


