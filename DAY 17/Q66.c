#include<stdio.h>
int main()
{
    int a1[100],a2[100],uniona[200];
    int n1,n2,i,j,k=0,found;
    printf("enter size of first array:");
    scanf("%d",&n1);
    printf("enter elements of first array:");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a1[i]);
        uniona[k++]=a1[i];
    }
    printf("enter size of second array:");
    scanf("%d",&n2);
    printf("enter elements of second array:");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&a2[i]);
        found=0;
        for(j=0;j<k;j++){
            if(a2[i]==uniona[j])
            {
                found=1;
                break;
            }
        }
        if(found==0){
            uniona[k++]=a2[i];
        }
    }
    printf("union of arrays:");
    for(i=0;i<k;i++){
        printf("%d",uniona[i]);
    }
    return 0;
}