#include<stdio.h>
int main()
{
    int a[100],n,i,even=0,odd=0;
    printf("enter no of elements:");
    scanf("%d",&n);
    for(i=0;i<=n-1;n++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("no of even array elements:%d",even);
    printf("no of odd array elements:%d",odd);
    return 0;
}