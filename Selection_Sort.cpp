#include<bits/stdc++.h>
using namespace std;


void selection_sort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int min_idx=i;                             // take the first element to be minimum
        for(int j=i+1; j<n; j++)
        {
            if(arr[j] < arr[min_idx])
                min_idx =j;                       // if the element is smaller than the current min element then just update the  index
        }
        swap(arr[i], arr[min_idx]);             // finally swap the minimum element with the  i^th element in the array
    }

    // printing the final array

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[]={2,7,4,1,5,3,6,9,8,10};
    int n=sizeof(arr)/sizeof(arr[0]);

    selection_sort(arr,n);




    return 0;
}

/*
1. It is not a stable sort algorithm.
2. It is IN-place algorithm.

Time Complexity : O(N^2)
Space complexity : O(1)

The good thing about selection sort is it never makes more than O(n) swaps and can be useful when memory write is a costly operation.
*/
