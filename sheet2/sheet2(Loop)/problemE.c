#include<stdio.h>
int main()
{
    int N;
    scanf("%d ",&N);
    int mridula = -99999;
    for(int i=1; i<=N; i++)
    {
        int x;
        scanf("%d ", &x);
        if(mridula<x)
            mridula = x;
 
    }
    printf("%d\n", mridula);
}
