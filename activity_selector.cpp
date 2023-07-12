//acitivity selector using greedy approach
#include <iostream>
using namespace std;

void order_of_activities(int s[],int f[],int n)
{
    //sort the activities
    //declare the first acitivity to i
    //run a j loop to declare further activities
    //inside j loop, if start[j]>=finish[i]->once a job will finish then only a new job can start
    //then update i with j and print that activity
    //we choose the first activity and then accordingly we check what all activities donot overlapp with the first activity.
    int i,j;
    
    //the first activity will always get selected
    i=0;
    cout<<i<<" ";
    
    //rest of the activities
    for(j=0;j<n;j++)
    {
        if(s[j]>=f[i])
        {
            cout<<j<<" ";
            i=j;
        }
    }
}

int main() {
    int s[]={3,0,5,8,5};  //starting times of activities
    int f[]={4,6,7,9,9};  //ending times of the activities
    int n=sizeof(s)/sizeof(s[0]); //n=(5 elements x 4 bytes=20 bytes)/4 byte=5
    cout<<"the following activities are selected"<<endl;
    order_of_activities(s,f,n);  //s=start,f=finish,n=number of activities
    return 0;

}
