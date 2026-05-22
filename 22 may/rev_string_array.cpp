#include<iostream>
using namespace std;
void rev(char s[],int n)
{
    for(int i=0; i<n/2; i++)
    {
        char temp = s[i];
        s[i] = s[n-1-i];
        s[n-1-i] = temp;
    }
    for(int i=0; i<n; i++)
    {
        cout << s[i];
    }
}
int main()
{
    int n;
    cin >> n;
    char s[n];
    for(int i=0; i<n; i++)
    {
        cin >> s[i];
    }
    rev(s,n);
    return 0;
}