//M.Abubakar Siddique
//FA20-BSE-084(B(G2)
#include<stdio.h>
int main()
{
    char chara;
    printf("Please enter the Character: ");
    scanf("%c",&chara);
    if((chara >= 'a' && chara <= 'z')||(chara >= 'A' && chara <= 'Z'))
    {
        printf("%c is a alphabet\n",chara);
    }
    else if(chara >= '0' && chara <= '9')
    {
        printf("%c is a digit\n",chara);
    }
    else
    {
        printf("%c is a special character\n",chara);
    }
    return 0;
}




