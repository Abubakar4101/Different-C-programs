//M.Abubakar Siddique
//FA20-BSE-084(B(G2)
#include<stdio.h>
int main()
{
    int num;
    printf("Please enter the Week number (from 1 to 7): ");
    scanf("%d",&num);
    switch(num)
    {
    case 1:
        printf("The day is Monday\n");
        break;
    case 2:
        printf("The day is Tuesday\n");
        break;
    case 3:
        printf("The day is Wednesday\n");
        break;
    case 4:
        printf("The day is Thursday\n");
        break;
    case 5:
       printf("The day is Friday\n");
        break;
     case 6:
       printf("The day is Saturday\n");
        break;
     case 7:
       printf("The day is Sunday\n");
        break;
    default:
        printf("Please enter valid Week number");
    }
    return 0;
}


