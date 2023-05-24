#include<iostream>
using namespace std;

//merge function will sort the array and then merge the different subarrays
int Merge(int arr[],int low,int high,int mid)
{
    int i,j,k,temp[high-low+1]; //temp is the array that will contain the sorted elements before merging
    i=low;
    k=0;
    j=mid+1;

    while(i<=mid && j<=high)
    {
        if(arr[i]<arr[j]){
            temp[k]=arr[i];
        k++;
        i++;
        }
        else
        {
            temp[k]=arr[j];
            k++;
            j++;
        }
    }

    while(i<=mid)
    {
        temp[k]=arr[i];
        k++;
        i++;
    }
    while(j<=high)
    {
        temp[k]=arr[j];
        k++;
        j++;
    }
    //copy temp[] array back to arr[]
    for(i=low;i<high;i++)
    {
        arr[i]=temp[i-low];
    }
}

//mergesort function is basically dividing the array recursively
int mergesort(int arr[],int low,int high)
    {
        int mid;
        if(low<high)
        {
            mid=(low+high)/2;
            //split the arrays further
            mergesort(arr,low,mid);
            mergesort(arr,mid+1,high);

        Merge(arr,low,high,mid);
        }
    }
int main()
{
    int i,n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];

    cout<<"enter the elements of array";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"array before sorting";
    for(i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }

    mergesort(arr,0,n-1);  //calling of mergesort

    //print the sorted array
    cout<<"\narray after sorting is->";
    for(i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }
    return 0;
 }
