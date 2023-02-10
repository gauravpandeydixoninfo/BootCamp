#include<stdio.h>

int sum(int, int);
int mul(int, int);
int sub(int, int);
float div(int, int);

enum calc
{
    ADD=1,
    SUB,
    MUL,
    DIV
};

int main()
{
    int first, second, cond, result;
    
    printf("Hellow Gaurav this side\n");
   
    printf("Enter the first number=\n");
    scanf("%d", &first);
    printf("Enter the second number=\n");
    scanf("%d", &second);
   
    printf("For addition of two number press 1 \n For subtraction of two number press 2 \n");
    printf("For multiplication of two number press 3 \n For Division of two number press 4\n");
    scanf("%d", &cond);
    
    switch(cond)
    {    
        case ADD:
        {
            result = sum(first, second);
            printf("Your result is = %d\n", result);
            break;
        }
        case SUB:
        {
            result = sub(first, second);
            printf("Your result is = %d\n", result);
            break;
        }
        case MUL:
        {
            result = mul(first, second);
            printf("Your result is = %d\n", result);
            break;
        }
        case DIV: 
        {
            float pro = div(first, second);     
            if(second == 0)
            {
                printf("Cannot be divided by zero\n");
            }
            else
            {
                printf("Your result is = %f\n", pro);
            }
            break;
        }
        default :
        {
            printf("Enter a valid number\n");
        }
    }

    return 0;
}
