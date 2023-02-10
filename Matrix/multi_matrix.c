#include<stdio.h>
int main()
{   int row1, col1, row2, col2;
    printf("\n Enter the no of rows in matrix1=");
    scanf(" %d ", &row1);
    printf("\n Enter the no of rows in matrix1=");
    scanf(" %d ", &col1);
    printf("\n Enter the no of rows in matrix2=");
    scanf(" %d ", &row2);
    printf("\n Enter the no of rows in matrix2=");
    scanf(" %d ", &col2);
    if(col1==row2)
    {
        int arr1[row1][col1], arr2[row2][col2], multi[row1][col2], t=0, sum=0;
        printf("\nEnter the element of first array=\n");
        for(int i=0;i<row1;i++)
        {
            for(int j=0; j<col1; j++)
            {
                scanf("%d", &arr1[row1][col1]);
            }
        }
        printf("\nElement of first matrix=\n");
        for(int i=0;i<row1;i++)
        {
            for(int j=0; j<col1; j++)
            {
            printf("%d\t", arr1[i][j]);
            }
            printf("\n");
        }
        printf("\nEnter the element of second array=\n");
        for(int i=0;i<row2;i++)
        {
            for(int j=0; j<col2; j++)
            {
                scanf("%d", &arr2[i][j]);
            }
        }    
        printf("\nElement of Second matrix=\n");
        for(int i=0;i<row2;i++)
        {
            for(int j=0; j<col2; j++)
            {
                printf("%d\t", arr2[i][j]);
            }
            printf("\n");
        }
        for(int i=0;i<row1;i++)
        {
            for(int j=0; j<col2; j++)
            {
                for( t=0; t<col1; t++)
                {    
                    sum=sum +arr1[i][t]*arr2[t][j];
                }
                multi[i][j]=sum;
                sum=0;
                t=0;
            }
        }
        printf("\nmultiplication of matrix=\n");
        for(int i=0;i<row1;i++)
        {
            for(int j=0; j<col2; j++)
            {
                printf("%d\t", multi[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\n Matrix cannot be multiplied\n");
    }
    return 0;
}

