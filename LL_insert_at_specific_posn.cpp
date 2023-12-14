// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* link;
    
    node(int value)
    {
        data=value;
        link=NULL;
    }
};
//function to insert at tail
void insert_at_tail(node* &head,int value)
{
    //create new node
    node* n=new node(value);

    //check whether initially list is empty
    if(head==NULL)
    {
        head=n; //update head with new node
        return;
    }

    node* temp=head;
    //traverse
    while(temp->link!=NULL)
    {
        temp=temp->link;    //update temp with uske aage wale node ke address se

    }
    temp->link=n;   //woh last node NULL rahegi so update it with the temp->link

}
//function to insert at specific position
void insert_at_posn(node* &head,int value,int pos)
{
    node* n=new node(value);
    
    if(pos==0)
    {
        n->link=head;
        head=n;
    }
    else
    {
        node* temp=head;
        for(int i=0;i<pos-1 && temp!=NULL;i++)
        {
            temp=temp->link;
            
        }
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

void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->link;
    }
    cout<<"NULL";
    cout<<endl;
}

int main() {
    node* head=NULL;
    insert_at_tail(head,1);
    insert_at_tail(head,3);
    insert_at_tail(head,4);
    insert_at_posn(head,2,1);
    display(head);
    

    return 0;
}
