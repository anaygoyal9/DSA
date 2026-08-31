#include <bits/stdc++.h>
using namespace std;

// Intution ------
//   1. SORT as asked for elements not index
//   2. Select one element
//   3. Apply 2 sum in remaining part

vector<vector<int>> result;

vector<vector<int>> twoSum(vector<int> &nums, int target, int i, int j){
    while(i<j){
        if(nums[i] + nums[j] < target){
            i++;
        }else if(nums[i] + nums[j] > target){
            j--;
        }else{
            while(i<j && nums[i] == nums[i+1]) i++;
            while(i<j && nums[j] == nums[j-1]) j--; 

            result.push_back({-target, nums[i], nums[j]});
            i++;
            j--;
        }
    }
    return result;
}
vector<vector<int>> threeSum(vector<int> &nums){
    int n = nums.size();
    sort(nums.begin(), nums.end());

    if( n < 3) return {};
    result.clear();

    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        if(i>0 && nums[i] == nums[i-1]) continue;

        int n1 = nums[i];
        int target = -n1;

        twoSum(nums, target, i+1, n-1);
    }

    return result;
}
int main() {
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> vec = threeSum(nums);
    for(int i=0;i<vec.size();i++){
        cout<<"{";
        for(int j=0;j<vec[i].size();j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<"}, ";
    }
}