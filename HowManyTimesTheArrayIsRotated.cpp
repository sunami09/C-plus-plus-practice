#include<bits/stdc++.h>
using namespace std;

int search(int arr[], int n){
    int ans;

    int low = 0;
    int high = n - 1;


    while(low <= high){

        if(arr[low] <= arr[high]){
            ans = low;
            return ans;
        }

        int mid = (low + high) / 2;
        int next = (mid + 1) % n;
        int prev = (mid + n - 1) % n;

        if(arr[mid]<=arr[next] && arr[mid]<=arr[prev]){
            ans = mid;
            return ans; 
        } 

        else if(arr[mid]<=arr[high]){
            high = mid - 1;
        }
        else if (arr[mid] >= arr[high])
        {
            low = mid + 1;
        }
    }

    return ans;
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout<<search(arr,n)<<endl;
}