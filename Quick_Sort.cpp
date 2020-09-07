#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int mod=1e9+7;

int partition(int arr[], int start, int end)
{
    int pivot =arr[end];         //  choosing the last element as pivot element
    int pindex=start;             // partition index is from start

    for(int i=start; i<=end; i++)
    {
        if(arr[i] < pivot)
        {
            swap(arr[i], arr[pindex]);      // if current element is smaller than  pivot then swap it with the pindex and increment pindex by one
            pindex++;
        }
    }

    swap(arr[pindex], arr[end]);          // finally swap the pivot element with current partition index position
                                  //  now elements less than the pivot will be on the left and elements greater than the pivot will be on the right
   return pindex;

}

void quicksort(int arr[], int start, int end)
{
    if(start >= end)              // base condition
        return;
    int p_index =partition(arr, start, end);

    quicksort(arr, start, p_index -1);    //  quick sort for left part of partition index
    quicksort(arr, p_index+1, end);       // quick sort for right part of partition index
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[]={5,2,3,1,4,6,-1,-2,-5};
    int n=sizeof(arr)/sizeof(arr[0]);

    quicksort(arr,0, n-1);        //  since quick sort is inplace sorting algorithm it requires start and end index

    for(int x :arr)
        cout<<x<<"  ";
    cout<<endl;



    return 0;
}


/*
       Time Complexity : O(n^2), worst case
                  and  : O(nlogn), average and best case
       Space Complexity  : O(1)

   1. In-place Sorting Algorithm : YES
   2. Stable Sorting Algorithm   : NO

*/



