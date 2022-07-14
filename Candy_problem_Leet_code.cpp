#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int>  ratings;
  int ans=0;
        int n=ratings.size();
        vector<int>L_candy(n,1);
        for(int i=1;i<n; i++){
            if(ratings[i]>ratings[i-1])
                L_candy[i]=L_candy[i-1]+1;
        }
        vector<int> R_candy(n,1);
        for(int i=n-2; i>=0; i--){
            if(ratings[i]>ratings[i+1])
                R_candy[i]=R_candy[i+1]+1;
        }
        for(int i=0; i<n; i++){
            ans+=max(L_candy[i], R_candy[i]);
        }
        cout<<ans;
}