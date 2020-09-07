#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int mod=1e9+7;

/* Time Complexity : O(nlogn)
  Space Complexity  :O(n)
  
 Note : Merge sort is not Inplace sorting algorithm.
        Merge sort is a stable sort.
 */
void Merge(int left[],int ln, int right[],int rn, int arr[],int n)
{
    int i=0, j=0, k=0;     // 3 pointers for 3 arrays respectively

     while( i<ln && j<rn ) // iterating in left and right arrays
     {
         if(left[i] <= right[j])
            arr[k++]=left[i++];
         else
            arr[k++] =right[j++];
     }

     while(i < ln)
        arr[k++] =left[i++];

     while( j< rn)
        arr[k++] =right[j++];

}


void Merge_Sort(int arr[], int n)
{
    if(n < 2)  // base case "one element is already sorted"
        return;

    int mid =n/2;
    int left[mid];          // left array of size mid
    int right[n-mid];       // right array of size n-mid
    for(int i=0; i<mid; i++)
    {
        left[i] =arr[i];
    }
    for(int i=mid; i<n; i++)
    {
        right[i-mid] =arr[i];
    }
    int ln= sizeof(left)/sizeof(left[0]);
    int rn= sizeof(right)/sizeof(right[0]);

    Merge_Sort(left,ln);    // recursive call for left sub array
    Merge_Sort(right,rn);   // recursive call for right sub array

    Merge(left,ln, right,rn, arr,n);   // now merge the sorted left and right arrays.

}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int  arr[] ={6,5,4,3,2,1,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);


    Merge_Sort(arr, n);

    // printing the array after sorting

    for(auto x :arr)
        cout<<x<<"  ";
    cout<<endl;





    return 0;
}
