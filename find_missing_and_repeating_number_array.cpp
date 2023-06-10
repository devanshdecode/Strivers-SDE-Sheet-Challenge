//code by - Devansh Lohiya
#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	int missing=-1;
	int rep=-1;
	int hash[n+1]={0};
	for(int i=0;i<n;i++){
		hash[arr[i]]++;
	}
	for(int i=1;i<=n;i++){
		if(hash[i]>1){
			rep=i;
		}
		else if(hash[i]==0){
			missing=i;
		}
		else if(missing!=-1 && rep!=-1)
		break;

	}
	return {missing,rep};
	
}
