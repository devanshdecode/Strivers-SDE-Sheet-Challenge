//Code by - Devansh Lohiya
#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	vector<int> merged;
   for(int i=0; i<arr1.size();i++){
        if(arr1[i]==0){
            continue;
        }
       merged.push_back(arr1[i]);
   }

    for(int i=0; i<arr2.size();i++){
        if(arr2[i]==0){
            continue;
        }
       merged.push_back(arr2[i]);
   }

   sort(merged.begin(), merged.end());
   return merged;
}
