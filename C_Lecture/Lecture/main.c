#include <stdio.h>
#include <stdlib.h>

int main()
{

   char card_name[3];
   puts("카드값을 입력하세요 :");
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

 /* 카드값이 3에서 6사인지 검사합니다*/
   if ((val>2)&& (val<7){
     puts("카운트를 하나 올립니다.");

/* 아니면 카드가 10 , J, K,Q, K 인지 검사*/
   else if (val == 10 )
     puts("카운트를 하나 내립니다.");}
printf("당신의 카드는 :" , val ,"그러므로 아래와 같이 해야 합니다");
    return 0;
}
