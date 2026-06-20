#include<stdio.h>
int main()
{
    int a[10][10],transpose[10][10],i,j,rows,columns;
    printf("enter number of rows and columns:");
    scanf("%d%d",&rows,&columns);
    printf("enter elements of matrix");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            transpose [j][i]=a[i][j];
        }
    }
    printf("transpose of the matrix:\n")
     for(i=0;i<columns;i++)
    {
        for(j=0;j<rows;j++)
        {
            printf("%d\t",transpose[i][j]);
        }
    printf("\n");
    }
    return 0;
}