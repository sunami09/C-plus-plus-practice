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
    bool searchFirst = true,searchLast=true;
    int FirstIndex = -1, LastIndex = -1;

    for(int i=1;i<n-1;i++){
        if(arr[i]==d){
        if(searchFirst &&(arr[i-1]<d && arr[i+1]>=d)){
            searchFirst =false;
            FirstIndex = i;
        }
        if(searchLast &&(arr[i-1]<=d && arr[i+1]>d)){
            searchLast =false;
            LastIndex = i;
            break;
        }
        
        }
    }
    cout<<FirstIndex<<endl<<LastIndex;

    return 0;
}