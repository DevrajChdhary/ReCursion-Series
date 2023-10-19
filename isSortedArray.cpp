#include<iostream>
using namespace std;

bool isSorted(int *arr,int n){

    if(n==0 || n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    bool remaining=isSorted(arr+1,n-1);
    return remaining;
}


int main(){

    int n;
    cout<<"Enter the number of elements you want in array: ";
    cin>>n;
    //Declare and initialize an array with size 'n'
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool ans= isSorted(arr,n);

    if(ans){
        cout<<"Array is Sorted"<<endl;
    }else{
        cout<<"Array is not Sorted"<<endl;
    }

    return 0;
}