#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[], int l, int p)
{
    for (int i = l ; i < (p + l) / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[p - i - 1];
        arr[p - 1 - i] = temp;
    }
}
void rotate2(int arr[], int l, int p)
{
    for (int i = l; i < (p + l) / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[p - i + 1];
        arr[p + 1 - i] = temp;
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k ; 
    cin>>k;
    if(k<0){
        k=n+k;
    }
    k=k%n;
    int start = 0;


    rotate(arr,start,n-k);
    for (int i = 0; i < n-k; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;




    ///////////////////////////////////////////////////////
    rotate2(arr,n-k,n);
    for (int i = n-k; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    ////////////////////////////////////////////////////////




    rotate(arr,start,n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<< " ";
    }

    return 0;
}
