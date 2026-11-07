// selection sort

#include<bits/stdc++.h>
using namespace std;

void selection_sort(vector<int> &arr,int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[min])
                min=j;
        }
        swap(arr[min],arr[i]);
    }
}
int main(){
    int n;
    cout<<"Enter the no. of elements in the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
selection_sort(arr,n);
cout<<"Array after sorted: "<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}
