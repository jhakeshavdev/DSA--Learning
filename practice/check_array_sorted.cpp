// check if the array is sorted or not

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. of elements: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=arr[i-1]){
            return true;
        }
        else{
            return false;
        }
    }    
    return 0;
}