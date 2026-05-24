#include<iostream>
using namespace std;
int maxProfit(int nums[],int n)
{
    int b=0,s=0,r=0,m;
    for(int i=0; i<1; i++)
    {
        for(int j=b+1; j<n; j++)
        {
            if(nums[j]<nums[b])
            {
                b = j;
            }
            s=b;
            for(int k=s+1; k<n; k++)
            {
                if(nums[k]>nums[s])
                {
                    s = k;
                }
            }
            m = nums[s] - nums[b];
            if(m>r)
            {
                r=m;
            }
        }
    }
    return r;
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
    cout << maxProfit(nums,n);
    return 0;
}