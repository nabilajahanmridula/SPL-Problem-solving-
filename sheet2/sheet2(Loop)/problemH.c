#include<stdio.h>
int main()
{
    int cnt =0;
    int n;
    scanf("%d ", &n);
 
    for(int i=1; i<=n; i++)
    {
        if(n % i ==0)
        {
            cnt=cnt+1;
        }
 
 
    }
    if(cnt == 2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
 
}
