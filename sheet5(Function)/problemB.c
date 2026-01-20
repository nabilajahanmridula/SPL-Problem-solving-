#include<stdio.h>
 void num(int m)
{
 
   for(int i=1; i<=m; i++)
    {
    if(i>1)
    printf(" ");
    printf("%d", i);
 
   }
}
int main (){
int n;
scanf("%d", &n);
   num(n);
}
