#include<stdio.h>
#include"helloworld.h"

int main()

{
    int first, second, cond, result;
    float pro;

    printf("Hellow Gaurav this side\n");
   
    printf("Enter the first number=\n");
    scanf("%d", &first);
    printf("Enter the second number=\n");
    scanf("%d", &second);
   
    printf("For addition of two number press 1 \n For subtraction of two number press 2 \n");
    printf("For multiplication of two number press 3 \n For Division of two number press 4\n");
    scanf("%d", &cond);

    if(cond == 1)
    {
        result=sum(first, second);
    }
    else if(cond == 2)
    {
        result=sub(first, second);
    }
    else if(cond == 3)
    {
        result=mul(first, second);
    }
    else if(cond == 4)
    {
        pro=div(first, second);     
    }
    else
    {
        printf("Enter a valid number\n");
    }

    if(cond == 1|| cond == 2|| cond == 3)
    {
        printf("Your result is = %d\n", result);
    }
    else
    {
        if(second == 0)
        {
            printf("Cannot be divided by zero\n");
        }
        else
        {
            printf("Your result is = %f\n", pro);
        }
   }

   return 0;
}
