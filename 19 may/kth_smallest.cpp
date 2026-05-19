#include<iostream>
using namespace std;
int kth(int n, int a[],int k)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n-1; j++)
        {
            if(a[j]<a[i])
            {
                a[i]=a[j];
            }
        }
    }
    int result = a[k-1];
    return result;
}
int main()
{
    int n,k;
    cin >> n;
    cin >> k;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
    cout<<endl;
    cout << kth(n,a,k);
    return 0;
}