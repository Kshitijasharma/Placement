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


//////////////////////////////////////////////////
// Function to insert a new node at a specific position
    void insertAtPosition(node* &head,int value, int position) {
        node* n = new node(value);
        if (position == 0) {
            n->link = head;
            head = n;
        }
        else {
            node* temp = head;
            int currentPosition = 0;
            while (temp != NULL && currentPosition < position - 1) {
                temp = temp->link;
                currentPosition++;
            }
            if (temp== nullptr) {
                cout<< "Position out of bounds." << endl;
                //delete n;
                return;
            }
            n->link=temp->link;
            temp->link= n;
        }
    }
/////////////////////////////////////////////////

int main()
{
    node* head=NULL;  //initially ll is empty
    insert_at_head(head,0);
    insert_at_tail(head,1);
    insert_at_tail(head,2);
    display(head);

    insertAtPosition(head,100,2);
    display(head);

    return 0;
}
