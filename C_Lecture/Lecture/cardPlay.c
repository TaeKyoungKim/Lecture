#include <stdio.h>
#include <stdlib.h>

int cardPlay()
{
    char card_name[3];
    int count = 0;
    while(card_name[0] !='X'){

                card_name[0] !='X'card_name[0] !='X'pcard_name[0] !='X'uts("ī�� �̸��� �Է��ϼ���:\n");
card_name[0] !='X'card_name[0] !='X'pcard_name[0] !='X'uts("ī�� �̸��� �Է��ϼ���:\n");
        scanf("%2s",card_name);
        int val = 0;
        switch(card_name[0]){
        case 'K':
        case 'Q':
        case 'J':
            val = 10;
            break;

        case 'A':
            val =11;
            break;

        case 'X':
            continue;

        default:
            val = atoi(card_name);
            if ((val<1)||(val>11)){
                puts("���� �˼� �����ϴ�.");
                continue;
            }
        }
        if ((val>2)&&(val<7)){
            count++;
        }
        else if(val ==0){
            count--;
        }
        printf("����ī��Ʈ : %i\n", count);
    }
    return 0;
}
