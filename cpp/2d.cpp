#include<iostream>
using namespace std;
int main(){
    int a,b,i,j;
    cout<<"enter the no of rows";
    cin>>a;
    cout<<"enter the no of columns";
    cin>>b;
    int n[a][b];
    for(i=1;i<a;i++){
        for(j=1;j<b;j++){
            cout<<"the element of the 2d array is ("<<i<<","<<j<<")";
            cin>>a[i][j];
        }
    }
    for(i=1;i<a;i++){
        for(j=1;j<b;j++){
            cout<<a[i][j]<<"\t";
        }
    }
}

