#include<iostream>
using namespace std;

void printCount(int n){
    //BAse Condition
    if(n==0)
        return ;
    
    cout<<n<<endl;
    //Recursive Relation
    printCount(n-1);
}

int main(){
    int n;

    cin>>n;
    printCount(n);

    return 0;
}