/*A company insures its drivers in the following
cases:

− If the driver is married.

− If the driver is unmarried, male & above 30 years
of age.

− If the driver is unmarried, female & above 25
years of age.

In all other cases the driver is not insured. If the
marital status, gender and age of the driver are the
inputs, write a program to determine whether the
driver is to be insured or not.*/
#include<stdio.h>
int main()
{
    int mar_sta,gender,age;
    printf("Please select your martial status.Press 1 for married and 2 for unmarried: ");
    scanf("%d",&mar_sta);
    if(mar_sta==1)
    {
        printf("Congrats,You are insured as a driver");
    }
    else if(mar_sta==2)
    {
        printf("If you are male press 1 and female press 2: ");
        scanf("%d",&gender);
        if(gender==1)
        {
            printf("Please enter your age: ");
            scanf("%d",&age);
            if (age >= 30)
            {
                printf("Congrats,You are insured as a driver");
            }
            else
            {
                printf("Sorry you are not eligible");
            }
        }
        else if(gender==2)
        {
            printf("Please enter your age: ");
            scanf("%d",&age);
            if (age >= 25)
            {
                printf("Congrats,You are insured as a driver");
            }
            else
            {
                printf("Sorry you are not eligible");
            }
        }
        else
        {
            printf("Please enter invalid input");
        }
    }
    else
    {
        printf("Please enter invalid input");
    }
    return 0;
}
