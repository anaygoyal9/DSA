#include <bits/stdc++.h>
using namespace std;
int MultiBy2(int n){
    if(n==1) return 2;
    return 2 + MultiBy2(n-1);
}   
int main(){
    cout<<MultiBy2(5);
}