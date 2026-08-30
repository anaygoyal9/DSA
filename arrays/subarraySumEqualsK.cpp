// prefix sum
#include <bits/stdc++.h>
using namespace std;
int subarraySum(vector<int>& nums, int k) {
    unordered_map<int,int> mp; // sc O(n)
    int result = 0;
    int cumSum = 0;
    mp.insert({0,1});
    for(int i=0;i<nums.size();i++){ // O(n)
        cumSum+=nums[i];
        int x = cumSum-k;
        if(mp.find(x) != mp.end()){ // O(1)
            result+=mp[x];
        }

        mp[cumSum]++;
    }
    return result;
}
int main(){
    vector<int> nums = {1,1,1};
    int k = 2;
    cout<<subarraySum(nums,k);
}