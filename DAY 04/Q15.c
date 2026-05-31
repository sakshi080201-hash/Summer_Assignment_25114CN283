#include<stdio.h>
int main()
{
    int n,temp,d,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        d=temp%10;
        sum=sum+d*d*d;
        temp=temp/10;
    }
    if(sum==n)
    printf("Armstrong number");
    else
    printf("Not Armstrong number");
    return 0;
}