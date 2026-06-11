#include<bits\stdc++.h>
#include"sorting.h"
using namespace std;

int main(){
    cout<<"WELCOME TO THE SORTING PERFORMANCE!!"<<endl;
    int choice,n;
    do{
    cout<<"1-Selection Sort\n2-Bubble Sort\n3-Insertion Sort\n4-Merge Sort\n5-Quick Sort\n6-Heap Sort\n7-Counting Sort\n8-Radix Sort\n9-Bucket Sort\n10-Shell Sort\n11-Tree Sort\n0-Exit"<<endl;    
    cin>>choice;
    if(choice==0){
        cout<<"Exiting the program! Bye!"<<endl<<"Will be back soon with more sorting algorithms!!"<<endl;
        break;
    }
    cout<<"Enter the number of elements of the array: ";
    cin>>n;
    vector<int> arr(n),list(n);
    cout<<"Enter the elements of the array: ";
    for( int i=0;i<n;i++){
        cin>> arr[i];
    }
    switch(choice){
        case 1: //selection sort
                list=selectionsort(arr);
                cout<<"Sorted array using Selection Sort: ";
                traversal(list);
                break;
        case 2: //bubble sort
                list=bubblesort(arr);
                cout<<"Sorted array using Bubble Sort: ";
                traversal(list);
                break;
        case 3: //insertion sort
                list=insertionsort(arr);
                cout<<"Sorted array using Insertion Sort: ";
                traversal(list);                 
                break;
        case 4: // merge sort
                list=mergesort(arr);
                cout<<"Sorted array using Merge Sort: ";
                traversal(list);
                break;
        case 5: //quick sort
                list=quicksort(arr);
                cout<<"Sorted array using Quick Sort: ";
                traversal(list);
                break;
        case 6: //heap sort
                list=heapsort(arr);
                cout<<"Sorted array using Heap Sort: ";
                traversal(list);
                break;
        case 7: //counting sort
                list=countsort(arr);
                cout<<"Sorted array using Counting Sort: ";
                traversal(list);
                break;
        case 8: // radix sort
                list=radixsort(arr);
                cout<<"Sorted array using Radix Sort: ";
                traversal(list);
                break;
        case 9: // bucket sort
                list=bucketsort(arr);
                cout<<"Sorted array using Bucket Sort: ";
                traversal(list);
                break;
        case 10: // shell sort
                list=shellsort(arr);
                cout<<"Sorted array using Shell Sort: ";
                traversal(list);
                break;
        case 11: // tree sort
                list=treesort(arr);
                cout<<"Sorted array using Tree Sort: ";
                traversal(list);
                break;
        

        default: 
                cout<<"Enter Valid Choice! ";
                break;
    }
    }while(choice!=0);
    return 0;
}