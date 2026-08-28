#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;
        
        long long b1 = 0, b2 = 0;
        long long l1 = 0, l2 = 0;

        for(long long i=0;i<n;i++){
            long long x;
            cin>>x;
            b1 += x;
            if(i!=0) l1+=(x-1);
        }
        for(long long i=0;i<m;i++){
            long long x;
            cin>>x;
            b2+=x;
            if(i!=0) l2+=(x-1);
        }

        if(b1-l1 >= b2-l2){
            cout<<1<<endl;
        }else{
            cout<<2<<endl;
        }
        
        
    }
}