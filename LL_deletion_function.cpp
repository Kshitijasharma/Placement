////////////DELETION-function/////////////////////////////
void deletion(node* &head,int value)
{
    node* temp=head;
    //traverse upto the value which is needed to be deleted
    while(temp->link->data!=value)
    {
        temp=temp->link;
    }

    //now complier had found the value in the ll
    node* to_be_deleted_node=temp->link;    //to_be_deleted_node will be accessed through temp->link(picture it!)

    //main process: update the link part of (n-1)th node with the (n+1)th node
    temp->link=temp->link->link;
    delete to_be_deleted_node;     //return to the code "node* to_be_deleted_node=temp->link;"
}
/////////////////////////////////////////////////
