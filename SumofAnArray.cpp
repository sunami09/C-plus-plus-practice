/*
Sum Of Two Arrays

1. You are given a number n1, representing the size of array a1.
2. You are given n1 numbers, representing elements of array a1.
3. You are given a number n2, representing the size of array a2.
4. You are given n2 numbers, representing elements of array a2.
5. The two arrays represent digits of two numbers.
6. You are required to add the numbers represented by two arrays and print the
arrays.

Constraints
1 <= n1, n2 <= 100
0 <= a1[i], a2[i] < 10


Example:

Input:
5
  3 1 0 7 5
6
1 1 1 1 1 1

Output:
1 4 2 1 8 6


*/

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n1,n2;

    ///////////////////////////////////////First Array Input....////////////////////////////////////////////////
    cin>>n1;
    int arr1[n1];
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////


    //////////////////Second Array Input////////////////////////////////////////////////////////////////////////
    cin>>n2;
    int arr2[n2];
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    //////////////////////////////////////////////////////////////////////////////////////////////////////////


    ////////////////Making the Solution Array/////////////////////////////////////////////////////////////////
    int k;
    if(n1>n2){
        k=n1;
    }else{
        k=n2;
    }
    int run = k;
    k = k-1;
    int arr[k];
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////


    ///Carry 
    int c = 0;

    //Markers of two arrays
    int i=n1-1;
    int j=n2-1;





    while(k>=0){
        int d = 0;
        if(i>=0){
            d += arr1[i];
        }
        if(j>=0){
            d += arr2[j];
        }
        if(c>0){
            d+=c;
            c=0;
        }

        /////Taking Number
        int num = d%10;

        ////Taking Carry
        c = d/10;

        ///Inserting Number
        arr[k] = num;
        k--;
        j--;
        i--;
    }


    if(c>0){
        cout<<c<<endl;
    }

    for(int m=0;m<run;m++){
        cout<<arr[m]<<endl;
    }


    return 0;
}