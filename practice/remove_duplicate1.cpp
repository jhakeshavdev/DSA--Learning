// remove duplicates from sorted array

#include<bits/stdc++.h>
using namespace std;

// void remove_duplicate(vector<int> &arr,int n){
    
// }
int main(){
    int n;
    cout<<"Enter the no. of elements: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    set<int> st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    int index=0;
    for(auto it:st){
        arr[index]=it;
        index++;
    }

    // remove_duplicate(arr,n);
    cout<<"After removing duplicates: "<<endl;

    for(int i=0;i<index;i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}