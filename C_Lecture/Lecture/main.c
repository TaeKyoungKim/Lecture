#include <stdio.h>
#include <stdlib.h>

int main()
{

   char card_name[3];
   puts("ī�尪�� �Է��ϼ��� :");
   scanf("%2s", card_name);
   int val = 0 ;
   if(card_name[0] =='K')
 {
      val = 10;
 }
   else if(card_name[0] =='Q')
 {
   val = 10;
 }

   else if(card_name[0] =='J')
 {
   val = 10;
 }
   else if(card_name[0] =='A')
 {
   val = 11;
 }

   else{
	val = atoi(card_name);
   }

 /* ī�尪�� 3���� 6������ �˻��մϴ�*/
   if ((val>2)&& (val<7){
     puts("ī��Ʈ�� �ϳ� �ø��ϴ�.");

/* �ƴϸ� ī�尡 10 , J, K,Q, K ���� �˻�*/
   else if (val == 10 )
     puts("ī��Ʈ�� �ϳ� �����ϴ�.");}
printf("����� ī��� :" , val ,"�׷��Ƿ� �Ʒ��� ���� �ؾ� �մϴ�");
    return 0;
}
