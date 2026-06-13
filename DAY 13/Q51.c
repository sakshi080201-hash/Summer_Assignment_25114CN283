#include<stdio.h>
int main()
{
    int n,i,a[10],min,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
        else if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("max=%d",max);
    printf("min=%d",min);
    return 0;
}