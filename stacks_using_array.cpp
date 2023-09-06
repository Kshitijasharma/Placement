#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define size 5
int top=-1;
int A[size];


bool isempty()
{
    if(top==-1)
    {
        return true;
}
    else{
        return false;
    }
}
int push(int value)
{
    //check if there is space
    if(top==size-1)
    {
        cout<<"stack is full"<<endl;
    }
    else
    {
        top++;       //keep updating top pointer
        A[top]=value;  //keep inserting the value as well
    }
}
void pop()
{
    //check whether the stack is empty
    if(top==-1)
    {
        cout<<"Stack is empty, nothing to pop"<<endl;
    }
    else
    {
        top--;   
    }
}
void display()
{
    if(top==-1)  //if it returns true then it will execute
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
        for(int i=0;i<=top;i++)
        {
            cout<<A[i]<<" ";
            cout<<"\n";
            
        }
        
    }
}

void top_element()
{
    if(isempty())
    {
         cout<<"Stack is empty"<<endl;
    }
    else
    {
        cout<<A[top]<<endl;
    }
}


int main() {
    int t=1,choice,value; //make them global variables
    while(t==1)
    {
    cout<<"1.Push 2.Pop 3.top_element 4.display 5.exit"<<endl;
    
    cin>>choice;
    
    switch(choice)
    {
        case 1:cout<<"enter the value \n";
               cin>>value;
               push(value);  //calling 
               break;
        
        
        case 2:pop();
               break;
        
        case 3:top_element();
               break;
        
        case 4:display();
                break;
        
        case 5:
        t=0;
        break;
    }
}  //while loop ends
    return 0;
    
}
