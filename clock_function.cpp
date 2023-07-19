//function using clock function
#include <iostream>
using namespace std;
clock_t tstart=clock(); //clock function will measure for how long a function is running

int max_min(int* arr, int n)
{
    int max=arr[0];
    int min=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            
        }
        if(arr[i]<min)
        {
            min=arr[i];
            
        }
       
    }
    cout<<"maximum element is->"<<max<<endl;
    cout<<"minimum element is->"<<min<<endl;
}

int main() {
    //get random inputs form the array using random function
    int arr[5];
    int n;
    cout<<"enter the size of n"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        arr[i]=rand();
    }
    clock_t start=clock(); //start the timer
    max_min(arr,n);
    
    //print that time
    double time1=(double)(clock()-tstart)/CLOCKS_PER_SEC;
    cout<<"time taken the run the function->"<<time1;
    return 0;
}
