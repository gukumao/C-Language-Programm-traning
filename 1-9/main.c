#include "stdio.h"


int main(void) { 
   int c, block_cnt;
   while ((c = (getchar())) != EOF) {
      if (c == ' ' && block_cnt > 0) {
         continue;
      }
      if (c == ' ') {
         block_cnt++;
      }
      if (c != ' ') {
         block_cnt = 0;
      }
      putchar(c);
   }
}