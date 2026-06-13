#include<stdio.h>
int main()
{
    int a[10],i,sum=0,n;
    float avg =0.0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
        avg=(float)sum/n;
    }
    printf("avg of all elements=%.2f",avg);
}