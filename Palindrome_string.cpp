#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int isPalindrome(string S)
	{
	    // Your code goes here
	    for(int i=0; i<S.length(); i++){
	        if(S[i]!=S[S.length()-1-i]){
	            return 0;
	            break;
	        }
	        
	    }
	    return 1;
	}
int main(){
    string S;
    S="rama ";
    int r=isPalindrome(S);
    cout<<r;
}