#include<bits/stdc++.h>
using namespace std;
 
int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int loop = pow(2,n);
    for(int i = 0; i<loop; i++ ){
        string set = "";
        int m = i;
        for(int j=0;j<n;j++){
            int k = m%2;
            m = m/2;
            if(k==0){
                set = "-\t" + set;
            }else{
                set = to_string(arr[n-j-1])+"\t" + set;
            } 
        }
        cout<<set<<endl;
    }
    return 0;
}