//M.Abubakar Siddique
//FA20-BSE-084(B(G2)
#include<stdio.h>
int main()
{
    int num;
    printf("Please enter the number: ");
    scanf("%d",&num);
    if(num>0)
    {
        printf("%d is a positive number\n",num);
    }
    else if(num<0)
    {
        printf("%d is a negative number\n",num);
    }
    else
    {
        printf("%d is Zero (neutral number)\n",num);
    }
    return 0;
}




