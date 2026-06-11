#include<bits\stdc++.h>
#include "sorting.h"
using namespace std;

vector<int> bubblesort(vector <int> list1){
    int n=list1.size(),isswap=false;
    for( int i=0;i<n-1;i++){
            for(int j=0;j<n-1;j++){
                if(list1[j]>list1[j+1]){
                swap(list1[j],list1[j+1]);
                isswap=true;
                break;
            }
            }
        }
        if(!isswap)
            cout<<"Already Sorted!"<<endl;
        return list1;
}


// int main(){
//     int n;cin>>n;
//     vector<int> list1(n);
//     for( int i=0;i<n;i++){
//         cin>> list1[i];
//     }
//     list1=bubblesort(list1);
//     for( int i=0;i<n;i++){
//         cout<<list1[i];
//     }
//     return 0;
// }