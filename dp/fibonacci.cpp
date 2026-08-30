#include <bits/stdc++.h>
using namespace std;
// int fibo(int n){        // ------------- Traditional Recursion and Recalculation of the Calculated -----------
//     if(n==0 || n==1) return n;
//     int a = fibo(n-1);
//     int b = fibo(n-2);
//     return a+b;
// }

unordered_map <int,int> dp;
int fibo(int n){
    if(n == 0 || n == 1) return n;
    if(dp.find(n) != dp.end()){
        return dp[n];
    }
    dp[n] = fibo(n-1) + fibo(n-2);
    return dp[n];
}
int main(){
    cout<<fibo(6)<<endl;
}