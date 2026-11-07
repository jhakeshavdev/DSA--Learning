// quick sort

#include<bits/stdc++.h>
using namespace std;

int fun(vector<int> &arr,int low,int high){
    int pivot=arr[low];
    int left=low;
    int right=high;
    while(left<right){
        while(left<=high && arr[left]<=pivot){
            left++;
        }
        while(arr[right]>pivot && right>=low){
            right--;
        } 
        if(left<right){
                swap(arr[left],arr[right]);
            }
        
    
    }
    swap(arr[low],arr[right]);
    return right;
}

void quick_sort(vector<int> &arr,int low,int high){
if(low<high){
    int partition=fun(arr,low,high);
    quick_sort(arr,low,partition-1);
    quick_sort(arr,partition+1,high);
    }
}

int main(){
    int n;
    cout<<"Enter the no. of elements of tha array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quick_sort(arr,0,n-1);
    cout<<"After sorting: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}