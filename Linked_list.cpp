#include<iostream>
using namespace std;

//class
class node{
    public:
    int data;
    struct node* link; //self referencing attribute

    //constructor
    node(int value){
        data=value;
        link=NULL;
    }
};

void insert_at_head(node* &head,int value)
{
    node* n= new node(value);
    n->link=head;    //step 1: new node will access the address of the 1st node from the head
    head=n;          //step 2: update the head and point it to the newly added node
}
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

//search for an element present in the ll
bool searching(node* &head,int key)
{
    //to traverse we need temp
    node* temp=head;
    while(temp->link!=NULL)
    {
        if(temp->data==key)
        {
            cout<<"Yes"<<endl;
            return true;
        }
        temp=temp->link;
    }
    cout<<"NO"<<endl;
    return false;
}
int main()
{
    node* head=NULL;  //initially ll is empty
    insert_at_head(head,0);
    insert_at_tail(head,1);
    insert_at_tail(head,2);
    display(head);
    searching(head,4);

    return 0;
}
