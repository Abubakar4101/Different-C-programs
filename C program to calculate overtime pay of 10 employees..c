/*C program to calculate overtime pay of 10 employees.
Overtime is paid at the rate of Rs 12 per hour for every hour worked above 40 hours.
Assume that employees do not work for fractional part of an hour.*/
#include <stdio.h>
int main()
{
    int hours,i=1;
    char ch;
    while (i<=10)
    {
        printf("Please enter your weekly overtime hours: ");
        scanf("%d",&hours);
        if(hours>=40)
        {
            printf("Employee %d you have got Rs.%d overtime paid\n",i,hours*12);
        }
        else
        {
            printf("You have not overtime working hours");
        }
        i++;
    }

    return 0;
}


