#include<stdio.h>

int main()
{
    int a,i,s=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    if(a%i==0)
    {
    s++;
    }
    if(s==2)
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }
    return 0;
}