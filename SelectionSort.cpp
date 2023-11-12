#include<iostream>
using namespace std;

void selectionSort(int *arr,int n,int start){
    
    if(start>=n-1){
        return ;
    }
    int min=start;
    for(int i=start+1;i<n;i++){
        if(arr[i]<arr[min]){
            min = i;
        }
    }
    swap(arr[min],arr[start]);
    selectionSort(arr,n,start+1);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionSort(arr,n,0);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
