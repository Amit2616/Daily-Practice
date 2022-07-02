#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main(){
    string str="you are legend";
    int l=str.length()-1;
    for(int i=l; i>=0; i-- ){
        cout<<str[i];
    }
    
    
    return 0;
}