//task 1: insert at head and display the sll
#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* link;
    
    //constructor
    node(int value)
    {
        data=value;
        link=NULL;
    }
};

//insert at head
void insert_head(node* &head,int data)
{
    //create a new node
    node* n= new node(data);
    n->link=head;
    head=n;
    
}
//insert at tail
void insert(node* &head,int data)
{
    node* n = new node(data);
    //check whether head is pointing to null
    if(head==NULL)
    {
        head=n;
        return;
    }
    else
    {
        node* temp=head;
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=n;
    }
}

//insert at specific position
void insert_pos(node* &head,int data,int pos)
{
    //create a new node
    node* n= new node(data);
    node* temp=head;
    if(pos==0)
    {
        n->link=head;
        head=n;
    }
    else{
        node* temp=head;
        for(int i=1;i<pos-1 && temp!=NULL;i++)
        {
            temp=temp->link;
        }
        //as soon as it reaches the asked position it will get out of the loop
        if(temp!=NULL)
        {
            n->link=temp->link;
            temp->link=n;
        }
        else
        {
            cout<<"Invalid position"<<endl;
            delete n;
        }
    }
}

//function to display
void display(node* &head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->link;
    }
    cout<<"NULL"<<endl;
}


int main() {
    node* head=NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert_head(head,0);
    insert_pos(head,100,2);
    display(head);

    return 0;
}
