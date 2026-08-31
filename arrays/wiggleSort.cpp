// also Wave Array on gfg
#include <bits/stdc++.h>
using namespace std;
void sortInWave(vector<int>& arr) {
    if(arr.size() == 1) return;
    if(arr.size() == 2) swap(arr[0], arr[1]);
    int n = arr.size();
        
    bool flag = false;
    
    for(int i=0;i<n-1;i++){
        if(arr[i] <= arr[i+1] && flag == false){
            swap(arr[i], arr[i+1]);
            flag = true;
        }else if(arr[i] <= arr[i+1] && flag == true){
            flag = false;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i] << " ";
    }
}
int main(){
    vector<int> nums = {2,4,7,8,9,10};
    sortInWave(nums);
}