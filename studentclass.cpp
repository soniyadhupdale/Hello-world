#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
class student
{
	public :
	char name[20];
	char mob[20];
	char email[20];
	char addr[20];
	char clas[20];
	char prn[20];
	float grade;
	void getData();
	void putData1();
	void putData2();
};
int main()
{
	student s[10];
	int n,i;
	cout<<"\nenter the number of students:";
	cin>>n;
	cout<<"enter details for student :"<<endl;
for(i=0;i<n;i++)
{

	s[i].getData();
}
	cout<<"Personal details:"<<endl;
	cout<<"SR.no"<<setw(5)<<"NAME"<<setw(15)<<"Mobile no."<<setw(10)<<"Email"<<setw       (15)<<"Address"<<endl;
for(i=0;i<n;i++)
{
	s[i].putData1();
}
	cout<<"Academic Details:"<<endl;
	 cout<<"SR.no"<<setw(10)<<"NAME"<<setw(10)<<"Class"<<setw(8)<<"PRN"<<setw (8)<<"Grade"<<endl;
for(int i=0;i<n;i++)
{
	s[i].putData2();
}
}
void student::getData(void)
{
     cout<<"\nEnter Name : ";
     cin>>name;
     cout<<"\nEnter PRN: ";
     cin>>prn;
     cout<<"\nEnter Class : ";
     cin>>clas;
     cout<<"\nEnter Grade : ";
     cin>>grade;
     cout<<"\nEnter Email : ";
     cin>>email;
     cout<<"\nEnter Address ";
     cin>>addr;
     cout<<"\nEnter Mobile No.";
     cin>>mob;
}
	void student::putData1(void)
{
	int i=0;
	cout<<i+1<<setw(8)<<name<<setw(15)<<mob<<setw(15)<<email<<setw(15)<<addr<<endl;
}
	void student::putData2(void)
{
	int i=0;
	cout<<i+1<<setw(15)<<name<<setw(10)<<clas<<setw(10)<<prn<<setw(10)<<grade<<endl;
}
