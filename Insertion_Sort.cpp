#include<bits/stdc++.h>
using namespace std;


void insertion_sort(int arr[], int n)
{
    for(int i=1; i<n; i++)              //    the 1st element is always sorted so start from index 1
    {
        int curr =arr[i];                 // select the element at index i
        int j=i-1;
        while(j >=0 && arr[j] > curr)              // shift all the elements to right if they are bigger than the curr element
        {
           arr[j+1] = arr[j];
           j--;
        }
        arr[j+1] =curr;                      // finally put the curr chosen element at its appropriate position.
    }


    // printing the final result
    for(int i=0; i<n;  i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int arr[]={2,7,4,1,5,3};
    int n=sizeof(arr)/sizeof(arr[0]);

    insertion_sort(arr,n);

    return 0;
}

/*
Time Complexity: O(n*2)

Auxiliary Space: O(1)

Boundary Cases: Insertion sort takes maximum time to sort if elements are sorted in reverse order.
 And it takes minimum time (Order of n) when elements are already sorted.

Algorithmic Paradigm: Incremental Approach

Sorting In Place: Yes

Stable: Yes

Online: Yes

Uses: Insertion sort is used when number of elements is small.
It can also be useful when input array is almost sorted, only few elements are misplaced in complete big array.
*/
