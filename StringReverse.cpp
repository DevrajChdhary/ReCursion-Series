#include<iostream>
using namespace std;


void Reverse(string& str,int i,int j){
    if(i>j){
        return ;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    Reverse(str,i,j);
}

int main(){
    string str;
    cin>>str;
    int n=str.length();
    Reverse(str,0,n-1);
    cout<<str<<endl;
    return 0;
}