//M.Abubakar Siddique
//FA20-BSE-084(B(G2)
#include<stdio.h>
int main()
{
    float num1,num2,sum = 0,sub = 0,prod = 0,divi = 0;
    char oper;
    printf("Please enter the 1st number, Arithmetic operation and then second number: ");
    scanf("%f %c %f",&num1,&oper,&num2);
    switch(oper)
    {
    case '+':
        sum = num1 + num2;
        printf("The sum is %0.2f\n",sum);
        break;
    case '-':
        sub = num1 - num2;
        printf("The subtraction is %0.2f\n",sub);
        break;
    case '*':
        prod = num1 * num2;
        printf("The product is %0.2f\n",prod);
        break;
    case '/':
        divi = num1 / num2;
        printf("The division is %0.2f\n",divi);
        break;
    default:
        printf("Please enter valid arithmetic operation");
    }
    return 0;
}



