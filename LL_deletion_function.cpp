////////////Delete the first node///////////////
void delete_at_head(node* &head)
{
    node* to_del_head=head;
    head=head->link;
    delete to_del_head;
}


////////////DELETION(this function will not work if we wanted to delete the 1st node of linked list)/////////////////////////////
void deletion(node* &head,int value)
{
    if(head==NULL)
    {
        return ;

    }
    //head is the only one present
    if(head->link==NULL)
    {

        return;
    }
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
