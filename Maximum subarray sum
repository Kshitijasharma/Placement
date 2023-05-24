//Maximum Sub array sum using (DCC), printing the array as well as the starting and ending locations.
#include<iostream>
using namespace std;

//max function
int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

//max crossing function-CSS
int maxcross_sum(int arr[],int low,int mid,int high)
{
    //leftarray sum
    int sum=0;
    int left_sum=-1;

    //traversing from middle to initial element(in left direction)-LSS
    for(int i=mid;i>=low;i--)
    {
        sum=sum+arr[i];     //sum of the left array
        if(sum>left_sum)
        {
            left_sum=sum;  //update
        }
    }


    //traversing right side array-RSS
    int right_sum=-1;
    for(int i=mid+1;i<=high;i++)
    {
        sum=sum+arr[i];
        if(sum>right_sum)
        {
            right_sum=sum;
        }

    }

int var1=(left_sum+right_sum);
return var1;
}

int maxsubarr_sum(int arr[],int low,int high)
{
    int mid;
    if(low==high)
    {
        return arr[low];
    }
    mid=(low+high)/2;
return max(max(maxsubarr_sum(arr,low,mid),maxsubarr_sum(arr,mid+1,high)),maxcross_sum(arr,low,mid,high));

}
//USING KADANE'S TO PRINT THE ARRAY
void kadane(int arr[], int n)
{
    // base case
    if (n <= 0) {
        return;
    }

    // stores maximum sum subarray found so far
    int max_so_far = -10000000000;

    // stores the maximum sum of subarray ending at the current position
    int max_ending_here = 0;

    // stores endpoints of maximum sum subarray found so far
    int start = 0, end = 0;

    // stores starting index of a positive-sum sequence
    int beg = 0;

    // traverse the given array
    for (int i = 0; i < n; i++)
    {
        // update the maximum sum of subarray "ending" at index `i`
        max_ending_here = max_ending_here + arr[i];

        // if the maximum sum becomes less than the current element,
        // start from the current element
        if (max_ending_here < arr[i])
        {
            max_ending_here = arr[i];
            beg = i;
        }

        // update result if the current subarray sum is found to be greater
        if (max_so_far < max_ending_here)
        {
            max_so_far = max_ending_here;
            start = beg;
            end = i;
        }
    }

    cout << "\nThe resultant subarray with the max sum is ";
    for (int i = start; i <= end; i++) {
        cout << arr[i] << " ";

    }
   cout<<"\nStarting address->"<<&arr[start];
    cout<<"\nEnding address->"<<&arr[end];
}

int main()
{
    int n,i;
    cout<<"enter array size";
    cin>>n;

    int arr[n];
    cout<<"enter elements of array";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nMax sub array sum is"<<maxsubarr_sum(arr,0,n-1);
    kadane(arr, n);
    return 0;
}
