#include <stdio.h>
#include <stdlib.h>

int whileTest()
{
   int counter1 = 1;
   while(counter1<11)
   {
       printf("%i번 실행하고 있습니다.\n",counter1);
       counter1++;
   }

   return 0;
}
