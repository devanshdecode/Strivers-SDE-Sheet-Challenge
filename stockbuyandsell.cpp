//code by- Devansh Lohiya
#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int max_price=0;
    int min_price=INT_MAX;
    int n=prices.size();
    for(int i=0;i<prices.size();i++){
        min_price=min(min_price,prices[i]);
        max_price=max(max_price,prices[i]-min_price);
    }
    return max_price;
}
