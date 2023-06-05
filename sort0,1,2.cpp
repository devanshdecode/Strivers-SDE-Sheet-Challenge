//code by- Devansh Lohiya
#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   int sum0=0;
   int sum1=0;
   int sum2=0;
   for(int i=0;i<n;i++){
      if(arr[i]==0){
         sum0+=1;
      }
      else if(arr[i]==1){
         sum1+=1;
      }
      else 
      sum2+=1;
   }
   for(int i=0;i<sum0;i++)
   arr[i]=0;
   for(int i=sum0;i<sum0+sum1;i++)
   arr[i]=1;
   for(int i=sum0+sum1;i<sum0+sum1+sum2;i++)
   arr[i]=2;
}
