#include<stdio.h>
int main()
{
    int n,product=1,d;
    printf("enter a number:");
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        product=product*d;
        n=n/10;
    }
    printf("product of digits:%d",product);
    return 0;
}