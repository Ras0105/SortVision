#include<bits\stdc++.h>
#include "sorting.h"
void merge(vector<int> &a,int p,int q,int r){
    int i,j,n1=q-p+1;
    int n2=r-q;
    vector<int> l(n1+1),rr(n2+1);
    for(i=0;i<n1;i++){
        l[i]=a[p+i];
    }
    for(j=0;j<n2;j++){
        rr[j]=a[q+j+1];
    }
    l[n1]=INT_MAX;
    rr[n2]=INT_MAX;
    i=0;j=0;
    for(int k=p;k<=r;k++){
        if(l[i]<=rr[j]){
            a[k]=l[i];i++;
        }
        else{
            a[k]=rr[j];j++;
        }
    }
}
vector<int> merge_sort(vector<int> &a, int p,int r){

    if(p<r){
        int q=(p+r)/2;
        merge_sort(a,p,q);
        merge_sort(a,q+1,r);
        merge(a,p,q,r);
    }
    return a;
}

vector<int> mergesort(vector<int> list1){
    vector<int> a=list1;
    int p=0,r=a.size()-1;
    merge_sort(a,p,r);
    return a;

}