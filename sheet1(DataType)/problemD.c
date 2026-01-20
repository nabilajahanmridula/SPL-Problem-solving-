#include <stdio.h>
 
int main(){
    long long int n,m,j,f;
    scanf("%lld %lld %lld %lld",&n, &m, &j, &f);
    printf("Difference = %lld", (n*m)-(j*f));
}
