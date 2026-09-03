// Leetcode 3876 , med, Confirm Uniform Parity Array 2

#include <bits/stdc++.h>
using namespace std;
bool uniformArray(vector<int>& nums) {
    int n = nums.size();
    if(n == 1) return true;
    int me = 1e9;
    int mo = 1e9;
    for(auto num : nums){
        if(num%2==0) me = min(me, num);
        else mo = min(mo, num);
    }
    // return me > mo or max(me, mo) == 1e9;
    if(me < mo){
        for(int i=0;i<n;i++){
            if(nums[i]%2!=0){
                if(nums[i] > mo){
                    continue;
                }
                return false;
            }
        }
    }else{
        for(int i=0;i<n;i++){
            if(nums[i]%2!=0) {
                continue;
            }else{
                if(nums[i] > mo){
                    continue;
                }
                return false;
            }
        }
    }
    return true;
}
int main(){
    vector<int> nums = {1,4,7};
    bool ans =  uniformArray(nums);
}