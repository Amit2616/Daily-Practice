#include<algorithm>
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="hfuioaehrfwnj";
    //Convert Into Upper Case
    for(int i=0; i<str.length(); i++){
        if(str[i]>='a'&&str[i]<='z'){
            str[i] -=32;
        }
    }
    cout<<str<<endl;
    //Convert Into Lower case
    for(int i=0; i<str.length(); i++){
        if(str[i]>='A'&&str[i]<='Z'){
            str[i] +=32;
        }
    }
    cout<<str<<endl;
    //Using function 
    transform(str.begin(),str.end(),str.begin(),::toupper);
        cout<<str<<endl;
    transform(str.begin(),str.end(),str.begin(),::tolower);
        cout<<str;
}