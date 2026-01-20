#include<stdio.h>
int mri(int m[],int n)
{
 
    if(n==0){
        printf("%d ",m[n]);
        return 0;
    }
   printf("%d ",m[n]);
    mri(m,n-2);
 
}
 
int main(){
 
    int n;
    scanf("%d",&n);
    int m[n+2];
    for(int i=0;i<n;i++)
        {
        scanf("%d",&m[i]);
    }
    if((n%2)==0)
    {
        mri(m,n-2);
    }
    else{
        mri(m,n-1);
    }
 
}
