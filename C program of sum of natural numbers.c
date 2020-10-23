#include<stdio.h>
int main()
{
    int num,i,sum = 0;
    printf("Please enter your number to find sum to that number: ");
    scanf("%d",&num);
    for(i = 0;i<=num;i++)
    {
        sum = sum + i;
    }
      printf("%d\n",sum);

    return 0;
}


