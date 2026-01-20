#include <stdio.h>
void num (int n)
{
    if(n>= 1)
    {
        if(n == 1)
            printf("%d", n);
        else
        printf("%d ", n);
        num(n-1);
    }
}
int main(){
int M;
scanf("%d", &M);
num(M);
 
 
 
}
