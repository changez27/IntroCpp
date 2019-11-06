#include<iostream>
using namespace std;
int main(){
    int f,r,data,sz;
    cout<<"enter size of queue ";
    cin>>sz;
    int q[sz];
    cout<<"set front ";
    cin>>f;
    cout<<"set rear ";
    cin>>r;
    cout<<"enter data in queue \n";
    for(int i=f;i<=r;i++){
        cin>>q[i];
    }
    if(r==sz){
        cout<<"OVERFLOW"<<"\nOPERATION TERMINATED";
    }
    if(f=r==0){
        f=f+1;
        r=r+1;
    }
    else{
        r=r+1;
    }
    cout<<"enter data to be inserted ";
    cin>>data;
    q[r]=data;
    for(int i=f;i<=r;i++){
        cout<<q[i]<<"\n";
    }
}
