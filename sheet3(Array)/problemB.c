#include<stdio.h>
int main()
{
    int n;
    long long mri[100005];
    long long x;
    scanf("%d" , &n);
    for(int i=0; i<n; i++)
    {
        scanf("%lld", &mri[i]);
    }
    scanf("%lld" ,&x);
    for(int i=0; i<n; i++)
    {
        if(x== mri[i])
        {
            printf("%d\n", i);
            return 0;
        }
    }
    printf("-1\n");
 
 
 
}
