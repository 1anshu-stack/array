#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}

void swap_alt(int arr[], int size){
     for(int i=1;i<size;i=i+2){
           swap(arr[i], arr[i-1]);
     }
}

int main(){
    int arr[]={1,2,7,8,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    swap_alt(arr, size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}