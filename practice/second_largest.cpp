// second largest element in the array

#include<bits/stdc++.h>
using namespace std;

int second_largest(vector<int>&arr,int n){
    int largest=arr[0];
    int slaregst=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            slaregst=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>slaregst){
            slaregst=arr[i];
        }
    }
return slaregst;
}
int main(){
    int n;
    cout<<"Enter the no. of elements: ";
    cin>>n;
    vector<int> arr(n);;
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<<"Second largest element : "<<second_largest(arr,n);
   return 0;
}