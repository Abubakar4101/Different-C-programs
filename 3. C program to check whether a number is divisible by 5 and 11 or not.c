//M.Abubakar Siddique
//FA20-BSE-084(B(G2)
#include<stdio.h>
int main()
{
    int num;
    printf("Please enter the number: ");
    scanf("%d",&num);
    if(num%5==0 && num%11==0)
    {
        printf("%d is divisible by both 5 and 11\n",num);
    }
    else
    {
        printf("%d is not divisible by 5 and 11\n",num);
    }
    return 0;
}




