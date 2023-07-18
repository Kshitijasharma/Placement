//find the maximum and minimum element in array
#include <iostream>
using namespace std;
int findmax(int* arr,int n)
{
    int max=arr[0];   //assume the first element is the max
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[0])
        {
            //update the max
            max=arr[i];
        }
    }
    return max;
}

int findmin(int* arr,int n)
{
    int min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            //update the min value
            min=arr[i];
        }
    }
    return min;
}

int main() {
    int arr[5]={56,23,87,34,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"maximum element from the array is"<<endl;
    cout<<findmax(arr,n)<<endl;
    
   cout<<"miimum element from the array is"<<endl;
   cout<<findmin(arr,n)<<endl;

    return 0;
}
