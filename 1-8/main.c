#include "stdio.h"


int main(void) { 
   int c, nl, nb, nt;

   nl = 0;
   nb = 0;
   nt = 0;
   while ((c = getchar()) != EOF) {
      if (c == '\n') {
         ++nl;
      }
      if (c == ' ') {
         ++nb;
      }
      if (c == '\t') {
         ++nt;
      }
   }
   printf("line:%d empty:%d \t:%d\n", nl, nb, nt);
}