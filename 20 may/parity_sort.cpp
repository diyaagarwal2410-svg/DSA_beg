#include<iostream>
using namespace std;
void sortArrayByParity(int nums[],int s)
{
    int num[s];
    int j=0;
    for(int i=0; i<s; i++)
    {
        if(nums[i]%2==0)
        {
            num[j] = nums[i];
            j++;
        }
    }
    for(int i=0; i<s; i++)
    {
        if(nums[i]%2!=0)
        {
            num[j] = nums[i];
            j++;
        }
    }
    for(int i=0; i<s; i++)
    {
        cout << num[i] << " ";
    }
}
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
    sortArrayByParity(arr1,n);
    return 0;
}