// Code by - Devansh Lohiya
#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   int n=arr.size();
   vector<vector<int>>ans;

   for(int i=0;i<n;i++){
      //int summ=0;
      for(int j=i+1;j<n;j++){
         if(arr[i]+arr[j]==s){
            vector<int>temp;
            temp.push_back(min(arr[j],arr[i]));
            temp.push_back(max(arr[i],arr[j]));
            ans.push_back(temp);
         }
      }
   }
   sort(ans.begin(),ans.end());
   return ans;
   
}