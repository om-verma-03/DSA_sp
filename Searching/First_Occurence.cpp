#include<bits/stdc++.h>
using namespace std;

int first_occur(vector<int>& nums,int target){
    int ans = INT_MAX;

    int start = 0;
    int end = nums.size()-1;

    while(start<=end){
        int mid = (start+end)/2;

        if(nums[mid] == target){
            ans = mid;
            end = mid-1;
        }
        else if(nums[mid] < target){
            start = mid+1;
        }
        else if(nums[mid] > target){
            end = mid-1;
        }
    }
    return ans;
}
int main(){
    vector<int> v = {1,3,3,3,3,5,5,5,5,7,8,8};
    int target = 13;
    cout<<first_occur(v,target);
    return 0;
}