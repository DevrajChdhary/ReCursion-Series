#include<iostream>
using namespace std;

bool check(int *arr,int n,int key){

    if(n==0)
        return false;
    if(arr[0]==key){
            return true;
    }else{
    int remain=check(arr+1,n-1,key);
    return remain;
    }
}



int main(){
    int n;
    cout<<"Enter the number of elements in array: ";
    cin>>n;
    int key;
    cout<<"Enter element to search for: ";
    cin>>key;
    //Declare and initialize an array with 'n' size.
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool ans= check(arr,n,key);
    if(ans){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not FOund"<<endl;
    }
    return 0;
}