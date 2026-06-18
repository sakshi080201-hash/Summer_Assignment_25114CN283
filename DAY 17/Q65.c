#include<stdio.h>
int main()
{
    int a1[100],a2[100],merged[200];
    int n1,n2,i;
    printf("enter size of first array:");
    scanf("%d",&n1);
    printf("enter elements of first array:");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("enter size of second array:");
    scanf("%d",&n2);
    printf("enter elements of second array:");
    for(i=0;i<n2;i++){
        scanf("%d",&a2[i]);
    }
    for(i=0;i<n1;i++)
    {
        merged[i]=a1[i];
    }
    for(i=0;i<n2;i++)
    {
        merged[n1+i]=a2[i];
    }
    printf("merged array:");
    for(i=0;i<n1+n2;i++)
    {
        printf("%d",merged[i]);
    }
    return 0;
}