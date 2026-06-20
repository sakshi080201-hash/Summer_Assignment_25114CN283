#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,m,n;
    printf("enter dimensions of matrices");
    scanf("%d%d",&m,&n);
    printf("enter first matrix");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("enter second matrix");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
        }
    }
    printf("the resultant subtraction matrix is:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",c[i][j]);
        }
    }
    printf("\n");
    return 0;
}