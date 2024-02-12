
#include<iostream>
#include<vector>
#include<map>
#include<bits/stdc++.h>
using namespace std;

    void mz(vector<int>&nums) 
    {
    int i = 0;
    for (int j = 0; j < nums.size(); j++)
    {
     if (nums[j] != 0)
     nums[i++] = nums[j];
    }
     while (i < nums.size())
     {
            nums[i++] = 0;
    
    }
    for(auto p:nums)
    cout<<p<<"\t";
    }
int main()
{
 vector<int>v{0,2,5,0,4,0,8};
 mz(v);
}

