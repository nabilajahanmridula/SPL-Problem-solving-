#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int mri[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &mri[i]);
    }
    for(int i=n-1; i>=0; i--)
    {
        printf("%d " , mri[i]);
    }
}
