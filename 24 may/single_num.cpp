#include<iostream>
using namespace std;
void singleNumber(int nums[], int n)
{
    int k;
    if(n==1)
    {
        k =  nums[0];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(nums[j]<nums[i])
            {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    for(int i =0; i<n; i++)
    {
        cout << nums[i] << " ";
    }
    if(nums[0]!= nums[1])
    {
        k = nums[0];
    }
    else if(nums[n-1]!= nums[n-2])
    {
        k = nums[n-1];
    }
    for(int i=1; i<n-1; i++)
    {
        if(nums[i]!=nums[i-1] && nums[i]!=nums[i+1])
        {
            cout<<  nums[i];
        }
    }
    cout << endl;
    cout << k;
}
int main()
{
    int n;
    cin >> n;
    int nums[n];
    for(int i=0; i<n; i++)
    {
        cin >> nums[i];
    }
    singleNumber(nums,n);
    return 0;
}