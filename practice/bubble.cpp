// bubble sort

#include<bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &arr,int n){
  for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j+1],arr[j]);
            }
        }
  }
}
int main(){
    int n;
    cout<<"Enter the no. of elements: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elemnts: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubble_sort(arr,n);
    cout<<"After sorting :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}