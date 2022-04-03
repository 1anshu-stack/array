#include<bits/stdc++.h>
using namespace std;

//O(N*N) METHOD 1.
vector<int> pair_sum(int arr[], int sum, int n){
    vector<int> ans;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if((arr[i]+arr[j])==sum){
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
            }
        }
    }

    return ans;
}



int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum;
    cin>>sum;
    vector<int> v=pair_sum(arr, sum, n);
    for(auto val:v){
        cout<<val<<" ";
    }
    return 0;
}