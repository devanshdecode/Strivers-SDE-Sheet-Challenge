// Code by - Devansh Lohiya
#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    int n=arr.size();
    int xorr=0;
    map<int,int>mp;
    mp[xorr]++;
    int cnt=0;
    for(int i=0;i<n;i++){
        xorr=xorr^arr[i];
        int k=xorr^x;
        cnt+=mp[k];
        mp[xorr]++;
    }
    return cnt;
}
