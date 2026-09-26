#include<stdio.h>
int main()
{
    int a[10][10],transpose[10][10];
    int rows,cols;
    int i,j;
    printf("Enter no. of rows and Cols:");
    scanf("%d%d",&rows,&cols);
    printf("\nEnter elements of the matrix:");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //Finding transpose
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            transpose[j][i]=a[i][j];
        }
    }
    //Printing values
    printf("\nHere is your transpose matrix:\n\n");
    for(i=0;i<cols;i++)
    {
    for(j=0;j<rows;j++)
      {
        printf("%4d",transpose[i][j]);
      }
      printf("\n");
    }
    return 0;
}