#include<iostream>
using namespace std;
int main(){
    string s;
    int arr[26]={0};
    //create an array of count of charactor 
    for(int i=0; i<s.size(); i++){
        char ch=s[i];
        int number=0;
        number =ch-'a';
        arr[number]++;
    }
    //find maximum occ charactor
    int maximum=-1, ans=0;
    for(int i=0; i<26;  i++){
        if(maximum<arr[i]){
            ans=i;
            maximum=arr[i];
        }
    }
    char result='a'+ans;
    return result;

}