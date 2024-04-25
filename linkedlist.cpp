#include<iostream>
#include<iomanip>
using namespace std;
class node
{
public :
	int data;
	node*next;
	node(int d)
	{
	data=d;
	next=Null;
	}
};
void insertathead(node* &node,int data)
      {
	node*n=new node(data);
	n->next=head;
	head=n;
      }
void print(node*head)
{
   while(head !=Null){
     cout<<head->data<<"->";
     head=head->next;
     }
}
int main()
{
	node*head=Null;
	insertathead(head,1);
	insertathead(head,2);
	insertathead(head,3);
	insertathead(head,4);
	print(head);
}



