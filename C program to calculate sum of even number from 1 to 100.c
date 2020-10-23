#include<stdio.h>
int main()
{
    int num;
    printf("The even numbers from 1 to 100 are\n");
    for(num = 0;num<=100;num+=2)
    {
        printf("%d\n",num);
    }

    return 0;
}

