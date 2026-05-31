#include<stdio.h>
int main()
{
    int n,a=0,b=0,c,i;
    printf("enter n:");
    scanf("%d",&n);
    if(n==1)
    printf("Nth term =%d",a);
    else if(n==2)
    {
        printf("Nth term =%d",b);
    }
    else{
        for(i=3;i<=n;i++)
        c=a+b;
        a=b;
        b=c;
    }
    printf("Nth term = %d",b);
return 0;
}