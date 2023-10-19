#include<iostream>
using namespace std;

int Sum(int *arr,int n){
    if(n==0)
        return 0;

    int sum=arr[0];
    int ans=sum+Sum(arr+1,n-1);
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number of elements in array: ";
    cin>>n;
    //Declare and initialize an array with size 'n'
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans=Sum(arr,n);
    cout<<"Sum of Array="<<ans;

    return 0;
}