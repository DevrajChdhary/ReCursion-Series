#include<iostream>
using namespace std;

bool BinarySearch(int *arr,int s , int e, int key){
   // base case
   if(s>e){
    return false;
   } 
   int mid=s+(e-s)/2;
   if(arr[mid]==key){
        return true;
   }
   if(arr[mid]<key){
        BinarySearch(arr,mid+1,e,key);
   }else{
        BinarySearch(arr,s,mid-1,key);
   }
}




int main(){
    int n;
    cout<<"Enter the number of elements you want in array: ";
    cin>>n;
    //Declare and initialize an array with 'n' elements.
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter element to be searched :";
    cin>>key;
    bool ans=BinarySearch(arr,0,n-1,key);
    if(ans){
        cout<<"Present"<<endl;
    }else{
        cout<<"Absent"<<endl;
    }

    return 0;
}