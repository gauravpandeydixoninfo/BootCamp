#include<stdio.h>
int main()
{   int row1, row2, col1, col2;
    printf("\nenter the no of rows in first matrix=");
    scanf("%d", &row1); 
    printf("\nenter the no of colums in first matrix=");
    scanf("%d", &col1);
    printf("\n enter the no of rows in second matrix=");
    scanf("%d", &row2);
    printf("\nenter the no of colums in second matrix=");
    scanf("%d", &col2);
    if(row1 == row2 && col1== col2 && row1>0 && row2>0 && col1>0 && col2>0)
    {
        int arr1[row1][col1], arr2[row2][col2], sum[row1][col2];    
        printf("\nElement of first matrix=\n");
        for(int i=0; i<row1; i++)
        {
            for(int j=0; j<col1; j++)
            {
                printf("arr1[%d][%d]=", i, j);
                scanf("%d", &arr1[i][j]);
                printf("\t");
            }
            printf("\n");
        }
        
        printf("\nEnter the element of second array=\n");
        for(int i=0; i<row2; i++)
        {
            for(int j=0; j<col2; j++)
            {
                printf("arr1[%d][%d]=", i, j);
                scanf("%d", &arr2[i][j]);
                printf("\t");
            }
            printf("\n");
        }    
        for(int i=0;i<4;i++)
        {
            for(int j=0; j<4; j++)
            {
                sum[i][j]=arr1[i][j]+arr2[i][j];
            }
         }
    printf("\nsum matrix=\n");
    for(int i=0;i<row1;i++)
    {
        for(int j=0; j<col1; j++)
        {
            printf("sum[%d][%d]=%d\t", i, j, sum[i][j]);
        }
        printf("\n");
    }
    }
    else
    {
        printf("\nmatrix can not be added");
    }
    return 0;
}
