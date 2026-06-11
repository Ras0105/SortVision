#include<bits\stdc++.h>
#include "sorting.h"
using namespace std;

vector<int> selectionsort(vector <int> list1){
    int n=list1.size(),small;
    for( int i=0;i<n-1;i++){
        small=i;
        for(int j=i+1;j<n;j++){
            if(list1[j]<list1[small])
                small=j;
        }
        swap(list1[i],list1[small]);
    }
        return list1;
}


// int main(){
//     int n;cin>>n;
//     vector<int> list1(n);
//     for( int i=0;i<n;i++){
//         cin>> list1[i];
//     }
//     selectionsort(list1);
//     for( int i=0;i<n;i++){
//         cout<<list1[i];
//     }
//     return 0;
// }