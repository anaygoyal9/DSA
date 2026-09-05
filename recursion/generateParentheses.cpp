#include <bits/stdc++.h>
using namespace std;
void helperFunction(int l, int r, int n, string str, vector<string> &s){
    if(!(l>=r)) return;
    if(l+r == 2*n){
        s.push_back(str);
    }
    if(l<n) helperFunction(l+1,r,n,str+'(',s);
    if(r<n) helperFunction(l,r+1,n,str+')',s);
}

vector<string> generateParenthesis(int n) {
    vector<string> ans;
    helperFunction(0,0,n,"",ans);
    return ans;
}
int main(){
    int n = 3;
    vector<string> allPossibleParentheses = generateParenthesis(n);
    for(int i=0;i<allPossibleParentheses.size();i++){
        if(i==0){
            cout<<"[ ";
        }
        if(i < allPossibleParentheses.size()-1){
            cout<<allPossibleParentheses[i]<<", ";
        }else{
            cout<<allPossibleParentheses[i]<<" ";
        }
        if(i == allPossibleParentheses.size()-1){
            cout<<" ]";
        }
    }
}