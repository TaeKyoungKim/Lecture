#include <stdio.h>
#include <stdlib.h>

int cards()
{
    int val = 0;
    char card_name[3];
    puts("ī�尪�� �Է��ϼ��� :");
    scanf("%2s", card_name);
    switch(card_name[0])
    {
        case'K':
        case 'Q':
        case 'J':
            val = 10;
            break;

        case 'A':
            val = 11;
            break;

        default:
            val = atoi(card_name);

    }

    if ((val>3)&&(val<7))
        printf("�ϳ��� �����ϼ���!\n");

    else if(val==10)
        printf(" �ϳ��� �����ϼ���!\n");

    return 0;
}
