#include<iostream>
using namespace std;

void SortArray(int *arr,int n){

    if(n==0||n==1){
        return ;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    SortArray(arr,n-1);
}

int main(){
    int n;
    cout<<"Enter the number of elements in array: ";
    cin>>n;
    //Declare and initialize an array with given size.
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    SortArray(arr,n);
    //Sorting using bubble sort algorithm
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
