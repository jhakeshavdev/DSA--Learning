// remove duplicate from sorted array (OPTIMAL)

#include<bits/stdc++.h>
using namespace std;

int remove_duplicate(vector<int> &arr, int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
return (i+1);
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
   int r=remove_duplicate(arr,n);
   cout<<"After removing duplicate: ";
   for(int i=0;i<r;i++){
    cout<<arr[i]<<" ";
   }
   return 0;
}