#include<stdio.h>

int main()
{
    int a,i=2,sum[100];
    sum[0]=0;
    sum[1]=1;
    scanf("%d",&a);
    printf("0 1 ");
    do
    {
        sum[i] = sum[i-1]+sum[i-2];
        printf("%d ",sum[i]);
        i++;
    }
    while(i<a);
    return 0;
}