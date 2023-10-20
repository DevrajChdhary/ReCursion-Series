#include<iostream>
using namespace std;

bool Check(string str,int i,int j)
{
    //base case
    if(i>j){
        return true;
    }
    if(str[i]!=str[j]){
        return false;
    }else{
        return Check(str,i+1,j-1);
    }
}

int main(){
    string s;
    cin>>s;
    int n=s.length();
    bool ans=Check(s,0,n-1);
    if(ans){
        cout<<"Yes Palindrome"<<endl;
    }else{
        cout<<"No Palindrome"<<endl;
 
    }

    return 0;
}