//M.Abubakar Siddique
//FA20-BSE-084(B(G2)
#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5;
    float per;
    printf("Please enter your Physics subject marks out of 100: ");
    scanf("%d",&m1);
    printf("Please enter your Chemistry subject marks out of 100: ");
    scanf("%d",&m2);
    printf("Please enter your Biology subject marks out of 100: ");
    scanf("%d",&m3);
    printf("Please enter your Mathematics subject marks out of 100: ");
    scanf("%d",&m4);
    printf("Please enter your Computer subject marks out of 100: ");
    scanf("%d",&m5);
    per = (m1 + m2 + m3 + m4 + m5) * 0.2;
    printf("Percentage is %0.2f\n",per);
    if(per >= 90)
    {
        printf("Grade A");
    }
    else if(per >= 80)
    {
        printf("Grade B");
    }
    else if(per >= 70)
    {
        printf("Grade C");
    }
    else if(per >= 60)
    {
        printf("Grade D");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}



