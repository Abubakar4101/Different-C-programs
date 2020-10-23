#include<stdio.h>
int main()
{
    int gender,exp,qual;
    printf("If you are male press 1 and female press 2: ");
    scanf("%d",&gender);
    switch (gender)
    {
    case 1:
        printf("Please enter your year of experience: ");
        scanf("%d",&exp);
        if(exp>=10)
        {
            printf("Please enter your qualification press 1 if you are post-graduate and 2 for graduate: ");
            scanf("%d",&qual);
            switch(qual)
            {
                case 1:
                    printf("Your salary is Rs.15000");
                    break;
                case 2:
                    printf("Your salary is Rs.10000");
                    break;
                default:
                    printf("Invalid Input");
                    break;
            }
        }
        else if(exp<10)
        {
            printf("Please enter your qualification press 1 if you are post-graduate and 2 for graduate: ");
            scanf("%d",&qual);
            switch(qual)
            {
                case 1:
                    printf("Your salary is Rs.10000");
                    break;
                case 2:
                    printf("Your salary is Rs.7000");
                    break;
                default:
                    printf("Invalid Input");
                    break;
            }
        }
        break;
    case 2:
        printf("Please enter your year of experience: ");
        scanf("%d",&exp);
        if(exp>=10)
        {
            printf("Please enter your qualification press 1 if you are post-graduate and 2 for graduate: ");
            scanf("%d",&qual);
            switch(qual)
            {
                case 1:
                    printf("Your salary is Rs.15000");
                    break;
                case 2:
                    printf("Your salary is Rs.9000");
                    break;
                default:
                    printf("Invalid Input");
                    break;
            }
        }
        else if(exp<10)
        {
            printf("Please enter your qualification press 1 if you are post-graduate and 2 for graduate: ");
            scanf("%d",&qual);
            switch(qual)
            {
                case 1:
                    printf("Your salary is Rs.10000");
                    break;
                case 2:
                    printf("Your salary is Rs.6000");
                    break;
                default:
                    printf("Invalid Input");
                    break;
            }
        }
        break;
    default:
        printf("Invalid gender Input");
        break;
    }
    return 0;
}

























