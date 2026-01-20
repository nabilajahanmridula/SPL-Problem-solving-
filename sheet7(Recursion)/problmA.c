#include<stdio.h>
void num(int i, int n)
{
    if(i<=n){
        printf("I love Recursion\n");
    num(i+1, n);
}
}
int main ()
{
    int n;
     scanf("%d", &n);
     num(1, n);
}
