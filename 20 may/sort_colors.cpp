#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of elements in array 1" << endl;
    cin >> n;
    int arr1[n];
    cout << "enter elements" << endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr1[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            int temp;
            if(arr1[j]<=arr1[i])
            {
                temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout << arr1[i];
    }
    return 0;
}