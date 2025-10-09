#include "stdio.h"



int main(void) { 
   int c, i, nwhite, nother;
   int ndigit[10];

   nwhite = nother = 0;
   for (i = 0; i < 10; ++i) {
      ndigit[i] = 0;
   }

   while ((c = getchar()) != EOF) {
      if (c >= '0' && c <= '9') {
         ++ndigit[c-'0'];
      }
      else if (c == ' ' || c == '\n' || c == '\t') {
            ++nwhite;
       }
      else {
            ++nother;
       }
   }

   char temp[10] = {0};

   for (int i = 0; i < 10; i++)
   {
      for (int j = 0; j < ndigit[i]; j++)
      {
         putchar('*');
      }
      printf(":%d\n", i);
   }
   

}