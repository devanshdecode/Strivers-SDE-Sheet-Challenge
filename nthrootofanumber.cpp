//code by - Devansh Lohiya
#include <bits/stdc++.h>
double multi(int num,int n){
  double ans=1;
  for(int i=1;i<=n;i++){
    ans*=num;
  }
  return ans;
}
int NthRoot(int n, int m) {
  double low=0;
  double high=m;
  double eps=1e-6;
  while((high-low)>eps){
    double mid=((high+low)/2.0);
    double res=multi(mid,n);
    if(res==m){
      return mid;
    }
    else if(res<m){
      low=mid;
    }
    else
    high=mid;
  }
  return -1;
}
