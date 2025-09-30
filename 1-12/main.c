#include "stdio.h"

#define IN 1
#define OUT 0

int main(void) { 
   int c, nl, nw, nc, state;
   nl = nw = nc = 0; 
   while ((c = (getchar())) != EOF) {
      ++nc;
      if (c == '\n') {
         ++nl;
      }
      if (c == ' ' || c == '\n' || c == '\t') {
         state = OUT;
         putchar('\n');

      }
      else if (state == OUT) {
         state = IN;
         ++nw;
      }
      if (state == IN) {
         putchar(c);
      }
   }
}