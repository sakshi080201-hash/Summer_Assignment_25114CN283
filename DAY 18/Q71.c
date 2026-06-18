#include<stdio.h>
int main()
{
    int a[10],beg,end,mid,n,i,ele;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    beg=0;
    end=n-1;
    mid=(beg+end)/2;
    while(beg<=end&&a[mid]!=ele)
    {
        if(a[mid]<ele)
        beg=mid+1;
        elseif(a[mid]>ele)
        end=mid-1;
        mid=(beg+mid)/2;
    }
    if(a[mid]==ele)
    {
        printf("element found at middle is %d",mid);
    }
    else{
        printf("element not found");
    }
    return 0;
}