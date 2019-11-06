#include<iostream>
#include<string>
using namespace std;
class cse {
	int rollno;
	std::name;
	public:
		void getdata(){
			cout<<"Enter Roll No. ";
			cin>>rollno;
			cout<<"Enter Name ";
			cin>>name;
		}
		void showdata(){
			cout<<"Roll No.:"<<rollno<<"\n";
			cout<<"Name:"<<name<<"\n";
		}
};

int main(){
	cse s;
	s.getdata();
	s.showdata();
}

