//insertion sort

#include<bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &arr,int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the no. of elements: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    insertion_sort(arr,n);
    cout<<"Array after sorting: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
    
}