//M.Abubakar Siddique
//FA20-BSE-084(B(G2)
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Please enter the first number: ");
    scanf("%d",&num1);
    printf("Please enter the second number: ");
    scanf("%d",&num2);
    printf("Please enter the third number: ");
    scanf("%d",&num3);
    if(num1 > num2 && num1 > num3)
    {
        printf("The biggest number is %d\n",num1);
    }
    else if(num2 > num1 && num2 > num3)
    {
        printf("The biggest number is %d\n",num2);
    }
    else if(num3 > num1 && num3 > num2)
    {
        printf("The biggest number is %d\n",num3);
    }
    else
    {
        printf("All numbers are equal");

    }
    return 0;
}



