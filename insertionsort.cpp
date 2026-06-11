#include<bits\stdc++.h>
#include "sorting.h"
using namespace std;

vector<int> insertionsort(vector <int> list1){
    int n=list1.size(),isswap=false;
    for( int i=1;i<n;i++){
        int curr=list1[i];
        int prev=i-1;
            while(prev>=0 && list1[prev]>curr){
                list1[prev+1]=list1[prev];
                prev--;
            }
            list1[prev+1]=curr;
        }
        return list1;
}


// int main(){
//     int n;cin>>n;
//     vector<int> list1(n);
//     for( int i=0;i<n;i++){
//         cin>> list1[i];
//     }
//     list1=insertionsort(list1);
//     for( int i=0;i<n;i++){
//         cout<<list1[i];
//     }
//     return 0;
// }