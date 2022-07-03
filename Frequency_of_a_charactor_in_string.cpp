#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="hsafwrfssffwb";
    int ferq[26];
    for(int i=0; i<26; i++){
        ferq[i]=0;
    }
    for(int i=0; i<str.size(); i++){
        ferq[str[i]-'a']++;
    }
    char ans=0;
    int maxF=0;
    for(int i=0; i<26; i++){
        if(ferq[i]>maxF){
            maxF=ferq[i];
            ans=i+'a';
        }
    }
    cout<<maxF<<" "<<ans<<endl;

    
}