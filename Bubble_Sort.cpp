#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void bubble_sort(int arr[], int n)
{
    for(int i=1; i<n; i++)      // outer loop  for n-1 passes
    {
        int flag=0;
        for(int j=0; j<n-1; j++)      // inner loop  to check 2 adjacent nodes
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                flag=1;
            }
        }
        if(flag==0)
            break;       // if array is already sorted then complexity becomes O(n)
    }

    //printing resultant array

    for(int i=0; i<n; i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int arr[]={2,7,4,1,5,3,6,9,8,10};
    int n=sizeof(arr)/sizeof(arr[0]);

    bubble_sort(arr,n);


    return 0;
}
//Time Complexity : O(n^2)
//Space Complexity : O(1)
/*
Since space complexity is constant that is why
bubble sort is in-place sorting algorithm.

1. In-place sorting algorithm
2. Stable sorting algorithm

Worst and Average Case Time Complexity: O(n*n). Worst case occurs when array is reverse sorted.

Best Case Time Complexity: O(n). Best case occurs when array is already sorted.

Auxiliary Space: O(1)

Boundary Cases: Bubble sort takes minimum time (Order of n) when elements are already sorted.

Sorting In Place: Yes

Stable: Yes
*/

