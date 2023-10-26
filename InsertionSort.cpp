#include<iostream>
using namespace std;

void insertionSort(int *arr,int i,int size){
    
    if(i==size){
        return ;
    }
    int j=i;
    while(j>0 && arr[j-1]>arr[j]){
        int temp=arr[j-1];
        arr[j-1]=arr[j];
        arr[j]=temp;
        j--;
    }
    insertionSort(arr,i+1,size);
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int arr[n];
    cout<<"Enter the values:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionSort(arr,0,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}