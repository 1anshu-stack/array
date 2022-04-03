#include<bits/stdc++.h>
using namespace std;

//O(n*n) //TLE METHOD 1.
// vector<int> intersection(int arr1[], int arr2[], int size1, int size2){
//     vector<int> v;

//     for(int i=0;i<size1;i++){
//         int ans=arr1[i];

//         for(int j=0;j<size2;j++){

//             if(ans<arr2[j]){
//                 break;
//             }

//             if(ans==arr2[j]){
//                 v.push_back(arr2[j]);
//                 arr2[j]=INT16_MIN;
//                 break;
//             }
//         }
//     }

//     return v;
// }


//Method 2.
vector<int> intersection(int arr1[], int arr2[], int size1, int size2){
    vector<int> ans;
    int i=0, j=0;

    while(i<size1 && j<size2){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr2[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }

    return ans;
}


int main(){
    int arr1[]={1,2,3,4};
    int arr2[]={3,4};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    vector<int> v=intersection(arr1, arr2, size1, size2);
    for(auto val:v){
        cout<<val<<" ";
    }
    return 0;
}