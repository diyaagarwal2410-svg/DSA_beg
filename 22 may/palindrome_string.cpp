#include<iostream>
#include<string>
using namespace std;
bool ispalindrome(string s)
{
    int n = s.size();
    string a ="";
    string b="";
    for(int i=0; i<n; i++)
    {
        if(isalnum(s[i]))
        {
            a+=tolower(s[i]);
        }
    }
    for(int i=a.size() - 1; i>=0; i--)
    {
        b+= a[i];
    }
    if(a==b)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string s;
    cin >> s;
    if(ispalindrome(s))
    {
        cout << "True";
    }
    else
    {
        cout << "Flase";
    }
    return 0;
}
