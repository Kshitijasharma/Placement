//n quuen problem
#include <iostream>
using namespace std;

//x is taking count of every row
//y is taking count of enery column

bool isSafe(int** arr, int x ,int y, int n)
{
    //checking whether a queen exist in the column or not
    //for that we will be needing for loop to check
    //explannation: i am travelling through out the row, and if there exist any queen that means we cannot place it there
    //step 1- to check whether a queen exist in that row or not
    for(int row=0;row<x;row++){
        if(arr[row][y]==1)
        {
            return false;
        }

    }

    //step 2- to check for the diagonals,queen cannot move in diagonals as well
    int row=x;
    int col=y;
    //we are checking for upper diagonals only because we have started placing the queen from upper rows only
    //checking for upper left diagonal
    while(row>=0 && col>=0)
    {
        if(arr[row][col]==1)
        {
            return false;
        }
        row--;
        col--;
    }
    //checking for upper right diagonal
    while(row>=0 && col<n)
    {
        if(arr[row][col]==1)
        {
            return false;
        }
        row--;
        col++;
    }

    return true;  //collectively for all
}

    //we don't need to check for further in the column once we have placed a queen.
    //no need of y here
    bool nQueen(int** arr, int x, int n)
    {

        if(x>=n) //we have placed all the n queens on the board
        {
            return true;
        }

        //now we need to check where we are placing queen, is it a safe position
        for(int col=0;col<n;col++)
        {
            if(isSafe(arr,x,col,n))
            {

                arr[x][col]=1; //if it is safe then place the queen

                if(nQueen(arr,x+1,n))
                {
                    return true;
                }

                arr[x][col]=0; //backtracking

            }
        }
        //if i am not able to place any queen in the column
        return false;
    }


int main()
{
    int n;
    cin>>n;

    int** arr=new int*[n]; //2d array declaration

    for(int i=0;i<n;i++)
    {
        arr[i]=new int[n];
        for(int j=0;j<n;j++)
        {
            arr[i][j]=0; //initialize
        }
    }

    //print the array if nQueen returns true
    if(nQueen(arr,0,n))
    {
         for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }

    }
}

