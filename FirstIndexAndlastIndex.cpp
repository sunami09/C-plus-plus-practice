#include<bits/stdc++.h>
using namespace std;

// int findMid(vector<int> &nums, int target){
//     int left = 0;
//     int right = nums.size() -1;
//     while(left<=right){
//         int mid = left + (right-left)/2;
//         if(nums[mid]>target){
//             right = mid -1;
//         }else if(nums[mid]<target){
//             left = mid + 1;
//         }else{
//             return mid;
//         }
//     }

//     return -1;
// }
// int findFloor(vector<int> &nums, int target, int up){
//     int down = 0;
//     while(down<=up){
//         int mid = down + (up-down)/2;
//             if(nums[mid]==target){
//                 if (mid == 0 || nums[mid-1]<target)
//                 {
//                     return mid;
//                 }else{
//                     up = mid - 1;
//                 }
                
//             }else{
//                 down = mid + 1;
//             }
//     }
//     return -1;
// }

// int findCeil(vector<int> &nums, int target, int down){
//     int up = nums.size() -1;
//     while(down<=up){
//         int mid = down +(up-down)/2;
//         if(nums[mid] == target){
//             if(mid == nums.size() - 1 || nums[mid+1]>target){
//                 return mid;
//             }else{
//                 down = mid + 1;
//             }
//         }else{
//             up = mid-1;
//         }
//     }
//     return -1;
// }

// vector<int> searchRange(vector<int> &nums, int target)
// {
//     vector<int> answer = {-1,-1};
//     int midValue = findMid(nums,target);
//     if(midValue==-1){
//         return answer;
//     }
//     int floor = findFloor(nums,target,midValue);
//     int ceil = findCeil(nums,target,midValue);
//     answer[0] = floor;
//     answer[1] = ceil;
//     return answer;

// }

int findfloorOrCeil(char arr[], char d,int n){
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]>d){
            high = mid -1;
        }
        else if(arr[mid]<d){
            low = mid + 1;
        }
        // else{
        //     return mid;
        // }
    }
    return low;
}

int main()
{
    // int n,d;
    // cout<<"Enter The Size of the Array: ";
    // cin>>n;
    // cout<<"Enter The Elements of the Array: ";


    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // cout<<"Enter the Target: ";
    // cin>>d;
    // int floor = findfloorOrCeil(arr,d,n,"floor");
    // cout<<floor;




    
    // vector<int> ans = searchRange(arr,d);
    // // bool searchFirst = true,searchLast=true;
    // // int FirstIndex = -1, LastIndex = -1;

    // // for(int i=1;i<n-1;i++){
    // //     if(arr[i]==d){
    // //     if(searchFirst &&(arr[i-1]<d && arr[i+1]>=d)){
    // //         searchFirst =false;
    // //         FirstIndex = i;
    // //     }
    // //     if(searchLast &&(arr[i-1]<=d && arr[i+1]>d)){
    // //         searchLast =false;
    // //         LastIndex = i;
    // //         break;
    // //     }
        
    // //     }
    // // }
    // // cout<<FirstIndex<<endl<<LastIndex;
    // for(int i=0;i<2;i++){
    //     cout<<ans[i]<< " ";
    // }
    // //cout<<ans<<endl;
    return 0;
    cout<<'a'>'b';
}