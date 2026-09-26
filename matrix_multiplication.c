#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],result[10][10];
    int r1,r2,c1,c2,i,j,k;
    printf("Enter order of the first matrix:");
    scanf("%d%d", &r1, &c1);
    printf("\nEnter elements of 1st matrix:");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
          scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter order of second matrix:");
    scanf("%d%d",&r2,&c2);
    printf("\nEnter elements of 2nd matrix:");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(c1!=r2)
    {
        printf("Not possible");
        return 0;
    }
    //Calculation
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
       {
            result[i][j]=0;
            for(k=0;k<c1;k++)
          {
            result[i][j]+= a[i][j]* b[j][k];
          }
       }
    }
    //show
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%4d\n\n",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
