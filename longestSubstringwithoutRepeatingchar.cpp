// Code by - Devansh Lohiya
#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    vector<int>dict(256,-1);
    int maxlen=0,start=-1;
    for(int i=0;i<input.size();i++){
        if(dict[input[i]]>start){
            start=dict[input[i]];

        }
        dict[input[i]]=i;
        maxlen=max(maxlen,i-start);
    }
    return maxlen;
}
