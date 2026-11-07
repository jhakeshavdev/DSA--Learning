// second smallest element in an array

#include <bits/stdc++.h>
using namespace std;

int second_smallest(vector<int> &arr, int n)
{
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] > smallest && arr[i] < ssmallest)
        {
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}

int main()
{
    int n;
    cout << "Enter no. of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Second smallest in the array : " << second_smallest(arr, n);
    return 0;
}