#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,d;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>d;
    int ciel,floor;
    for(int i=0;i<n-1;i++){
        if(arr[i]<d && arr[i+1]>d){
            floor = arr[i];
            ciel = arr[i+1];
            break;
        }
    }
    cout<<ciel<<endl<<floor;
    return 0;
}