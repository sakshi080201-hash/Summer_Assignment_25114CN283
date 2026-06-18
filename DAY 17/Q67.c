#include<stdio.h>
int main()
{
    int a1[100],a2[100];
    int n1,n2,i,j;
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
    for(i=0;i<n2;i++)
    {
        scanf("%d",&a2[i]);
    }
    printf("intersection of arrays:");
    for(i=0;i<n1;i++){
    for(j=0;j<n2;j++){
        if(a1[i]==a2[j]){
            printf("%d",a1[i]);
            break;
        }
    }
}
return 0;
}