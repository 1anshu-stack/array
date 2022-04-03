#include<iostream>
using namespace std;

int duplicate(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    for(int i=1;i<size;i++){
       ans=ans^i;
    }
    return ans;
}

int main(){
    int arr[]={1,3,2,4,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<duplicate(arr, size);
    return 0;
}