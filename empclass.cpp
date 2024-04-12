#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
class employee
{
public:
	char name[30];
	char id[10];
	char desg[20];
	char mobnumber[15];
	float basicsalary;
	float da;
	float hra;
	float totalsalary;
};

int main()
{
	employee e[10]; 
	int i,n; 
	cout<<"\nEnter No. of employees : ";
	cin>>n;
	cout<<"\nEnter details : \n";
for(i=0;i<n;i++) 
{
	cout<<"\nEnter Name : ";
	cin>>e[i].name;
	cout<<"\nEnter Employee ID : ";
	cin>>e[i].id;
	cout<<"\nEnter Mobile no. : ";
	cin>>e[i].mobnumber;
	cout<<"\nEnter Designation : ";
	cin>>e[i].desg;
	cout<<"\nEnter Basic Salary : ";
	cin>>e[i].basicsalary;

	e[i].da= (80*e[i].basicsalary)/100; 
	e[i].hra=(20*e[i].basicsalary)/100; 
	e[i].totalsalary=e[i].basicsalary+e[i].da+e[i].hra; 
}
	cout<<"\nEmployee details : \n"<<endl;
	cout<<"SR.no"<<setw(5)<<"name"<<setw(15)<<"Mobile no."<<setw(5)<<"id"<<setw(15)<<"designation"<<setw(15)<<"basic salary\n"<<endl;
for(i=0;i<n;i++)
{

	cout<<i+1<<setw(8)<<e[i].name<<setw(15)<<e[i].mobnumber<<setw(10)<<e[i].id<<setw(15)<<e[i].desg<<setw(10)<<e[i].basicsalary<<endl;
}
	cout<<"\nSalary details : \n"<<endl;
	cout<<"SR.no"<<setw(5)<<"name"<<setw(10)<<"basic salary"<<setw(8)<<"da"<<setw(8)<<"hra"<<setw(20)<<"Total Salary \n"<<endl;
for(i=0;i<n;i++)
{
	cout<<i+1<<setw(8)<<e[i].name<<setw(10)<<e[i].basicsalary<<setw(10)<<e[i].da<<setw(10)<<e[i].hra<<setw(10)<<e[i].totalsalary<<endl;
}
}
