#include<iostream>
#include<iomanip>
using namespace std;
struct product
{
	int prod_id[15];
	char prod_name[18];
	float prod_price[20];
	float gst;
	int next=-1;
};
int main()
{
	struct product p[20];
	int i=1,n;
	cout<<"enter no. of product"<<endl;
	cin>>n;
	cout<<"enter product information"<<endl;
	while(i!=n)
{
	cout<<"enter product id"<<endl;
	cin>>p[i].prod_id;
	
	cout<<"enter product name"<<endl;
	cin>>p[i].prod_name;

	cout<<"enter product price"<<endl;
	cin>>p[i].prod_price;

	cout<<"enetr product gst"<<endl;
	cin>>p[i].gst;

	cout<<"enter next index"<<endl;
	cin>>p[i].next=i+1;
}
	cout<<"display product information"<<endl;
	cout<<"id \t name \t price \t gst"<<endl;
	for(i=0;i<n;i++)
	 
	cout<<p[i].prod_id<<setw(15);
	cout<<p[i].prod_name<<setw(18);
	cout<<p[i].prod_price<<setw(20);
	cout<<p[i].gst<<setw(20);
}
