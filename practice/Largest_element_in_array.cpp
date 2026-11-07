// largest element in the array

#include<bits/stdc++.h>
using namespace std;

int largest_element(vector<int> &arr,int n){
     int max=INT_MIN;
    for(int i=0;i<n;i++){
       if(arr[i]>max){
        max=arr[i];
       }
    }
    return max;
}
int main(){
    int n;
    cout<<"Enter the no. of elements in th array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l= largest_element(arr,n);
    cout<<"Largest elememnt: "<<l;

    return 0;

}