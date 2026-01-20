#include<stdio.h>
int main()
{
    long long int n,m,j,f,k;
    scanf("%lld %lld",&n,&m);
    j=n+m;
    f=n*m;
    k=n-m;
    printf("%lld + %lld = %lld\n",n,m,j);
    printf("%lld * %lld = %lld\n",n,m,f);
    printf("%lld - %lld = %lld\n",n,m,k);
}
