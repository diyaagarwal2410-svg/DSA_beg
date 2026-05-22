#include<iostream>
using namespace std;
void rotate(int a[], int n , int k)
{
    int b[n];
    for(int i=0; i<k; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            b[0] = a[n-1];
            b[j+1] = a[j];
        }
        for(int k=0; k<n; k++)
        {
            a[k]=b[k];
        }
    }
    for(int i=0; i<n; i++)
    {
        cout << b[i] << " ";
    }
}
int main()
{
    int n,k;
    cout << "enter number of elements in array 1" << endl;
    cin >> n;
    int arr1[n];
    cout << "enter elements" << endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr1[i];
    }
    cout << "enter number of rotation" << endl;
    cin >> k;
    rotate(arr1,n,k);
    return 0;
}