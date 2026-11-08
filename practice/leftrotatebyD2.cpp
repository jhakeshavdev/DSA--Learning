// left rotate the array by D place (optimal)

#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int start,int end){
    while(start<=end){
        int temp =arr[start];
        arr[start]=arr[end];
        arr[end] = temp;
        end--;
    }
}
void left_rotate(int arr[],int n,int d){
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}
int main(){
    int n,d;
    cout<<"Enter the no. of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the no. of place to shift: ";
    cin>>d;
    left_rotate(arr,n,d);
    cout<<"After rotate: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
    return 0;

}