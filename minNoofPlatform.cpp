// Code by - Devansh Lohiya
int calculateMinPatforms(int at[], int dt[], int n) {

    sort(at,at+n);

    sort(dt,dt+n);

    int i=0,j=0,ans=0,res=0;

    while(i<n and j<n){

        if(at[i]<=dt[j]){

            ans++;

            i++;

        }

        else{

            ans--;

            j++;

        }

        res=max(res,ans);

    }

    return res;

 

    // Write your code here.

}

