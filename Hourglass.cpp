//function 
int hourglassSum(vector<vector<int>> arr) {
    int result=INT_MIN; 
    int sum;
    for(int r=0;r<=3;++r)
    {
        for(int c=0;c<=3;++c)
        {
            sum=arr[r][c]+arr[r][c+1]+arr[r][c+2]
            +arr[r+1][c+1]+arr[r+2][c]+arr[r+2][c+1]+arr[r+2][c+2];
        
        //so that in every iteration it will calculate sum and compare with result
        result=max(result,sum); //update the result with sum is sum>result
        }
        
    }
    return result;
}
