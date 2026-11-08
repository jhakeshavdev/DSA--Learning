// Left rotate the array by d place

#include <bits/stdc++.h>
using namespace std;

void left_rotate(vector<int> &arr, int n, int d)
{
    d = d % n;
    vector<int> temp;

    for (int i = 0; i < n; i++)
    {
        temp.push_back(arr[i]);
    }

    // shifting
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }

    // put back temp
    for (int i = n - d; i < n; i++)
    {
        arr[i] = temp[i - (n - d)];
    }
}
int main()
{
    int n, d;
    cout << "Enter the no. of elements : ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the no. of place to rotate: ";
    cin >> d;
    left_rotate(arr, n, d);
    cout << "After Rotate: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}