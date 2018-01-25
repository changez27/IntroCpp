#include<iostream>
using namespace std;
int sum(int a,int b)
{
return(a+b);
}
int substract(int a,int b)
{
return(a-b);
}
int multiply(int a,int b)
{
return(a*b);
}
int division(int a,int b)
{
return(a/b);
}
int main()
{
int p;
int x,y;
cout<<"Select Operation"<<"\n";
cout<<"enter \n1 for addition"<<"\n"<<"2 for substraction"<<"\n"<<"3 for multiplication"<<"\n"<<"4 for division"<<"\n";
cin>>p;
switch(p)
{
case 1:
cout<<"enter values \n";
cin>>x>>y;
cout<<"sum is = ";
cout<<sum(x,y);
break;
case 2:
cout<<"enter values"<<"\n";
cin>>x>>y;
cout<<"difference is = ";
cout<<substract(x,y);
break;
case 3:
cout<<"enter values \n";
cin>>x>>y;
cout<<"product is = ";
cout<<multiply(x,y);
break;
case 4:
cout<<"enter values \n";
cin>>x>>y;
cout<<"quotient is = ";
cout<<division(x,y);
break;
default:
cout<<"no calculation \n";
break;
}
cout<<"\n";
}

