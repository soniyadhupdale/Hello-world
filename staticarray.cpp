#include<iostream> 
using namespace std;
class product
{ 
public: 
    int data; 
    product*next; 
    
    product() 
    { 
        data = 0; 
        next = NULL; 
    } 
    product(int data) 
    { 
        this->data = data; 
        this->next = NULL; 
    } 
}; 
class Linkedlist {
    product* head; 
public:  
    Linkedlist() 
	{ 
	   head = NULL; 
	} 
    void insertproduct(int); 
    void printList(); 
    void deleteproduct(int); 
}; 
void Linkedlist::deleteproduct(int product) 
{ 
    product*temp1 = head, *temp2 = NULL; 
    int n = 0; 
  
    while (temp1 != NULL) 
	{ 
        temp1 = temp1->next; 
        n++; 
    }  
    temp1 = head;  
    if (product == 1) 
	{
        head = head->next; 
        delete temp1; 
        return; 
    }  
    while (product- > 1) 
	{ 
        temp2 = temp1; 
        temp1 = temp1->next; 
    } 
    temp2->next = temp1->next; 
    delete temp1; 
} 
void Linkedlist::insertproduct(int data) 
{ 
    product* newNode = new product(data); 
    if (head == NULL) 
	{ 
        head = newproduct; 
        return; 
    } 
    product* temp = head; 
    while (temp->next != NULL) 
    {
        temp = temp->next; 
    }  
    temp->next = newproduct; 
} 
void Linkedlist::printList() 
{ 
    product* temp = head;   
    while (temp != NULL) 
	{ 
        cout << temp->data << " "; 
        temp = temp->next; 
    } 
} 
int main() 
{ 
    Linkedlist list; 
    
	int numElements;
    cout << "Enter the number of product to insert: ";
    cin >> numElements;
    
    for (int i = 0; i < numElements; i++) 
	{
        int element;
        cout << "Enter product " << i + 1 <<endl;
        cin >> element;
        list.insertproduct(element);
    } 
  
    cout << "Elements of the list are"; 
    list.printList(); 
    cout << endl;  
    
    //list.deleteproduct(2); 
  
    cout << "Elements of the list are"; 
    list.printList(); 
    cout << endl; 
    return 0; 
}
