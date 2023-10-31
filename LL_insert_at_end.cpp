// Inserting a node at the end of linked list
#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* link;

    //constructor->passes int value
    node(int value)
    {
        data=value;
        link=NULL;
    }
};

void insert_at_tail(node* &head,int value)   //head=passed by referrence
{
    //create a new node
    node* n=new node(value);

    if(head==NULL)
    {
        head=n;
        return ;
    }
    node* temp=head; //temp is the pointer which will traverse the entire linked list, it will initially point to the head
    while(temp->link!=NULL)
    {
        temp=temp->link;    //keep updating the temp pointer
    }
    temp->link=n;
}

void display(node* head)     //head is passed by value
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->link;

    }
    cout<<"Null"<<endl;
}


int main() {

    node* head=NULL; //(node* head = NULL;) declares a pointer to a node(node containing data and link), and initializes it to NULL.
    insert_at_tail(head,10);
    insert_at_tail(head,11);
    insert_at_tail(head,12);
    display(head);


    return 0;
}
