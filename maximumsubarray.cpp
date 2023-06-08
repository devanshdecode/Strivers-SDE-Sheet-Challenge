//code by-devansh lohiya
#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long sum=0;
    long long maxx=LONG_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>maxx){
            maxx=sum;
        }
        if(sum<0){
            sum=0;
        }
        if(maxx<0){
            maxx=0;
        }
    }
    return maxx;
}
