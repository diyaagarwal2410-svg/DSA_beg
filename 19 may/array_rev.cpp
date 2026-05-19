#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    cout << "Orignal array" << endl;
    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    for(int i=0; i<n; i++)
    {
        b[i] = a[(n-1)-i];
    }
    cout << "Reversed array" << endl;
    for(int i=0; i<n; i++)
    {
        cout << b[i] << " ";
    }
    return 0;

}