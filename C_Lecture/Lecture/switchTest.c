#include <stdio.h>
#include <stdlib.h>

int cards()
{
    int val = 0;
    char card_name[3];
    puts("카드값을 입력하세요 :");
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
        printf("하나씩 감소하세요!\n");

    else if(val==10)
        printf(" 하나씩 증가하세요!\n");

    return 0;
}
