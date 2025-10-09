#include "stdio.h"



int main(void) { 
   int wordlengthnum[21] = {0};
   int num;
   int wordlength = 0;
   int printchart = 1;
   int word;

   while ((word = getchar()) != EOF) {
      if (word == '\t' || word == '\n' || word == ' ') {
         ++wordlengthnum[wordlength];
         wordlength = 0;
      }
      else {
         ++wordlength;
      }
   }
   
   for (num = 1; num <= 20; ++num) {
      printf("%d |", num);
      for (printchart = 1; printchart <= wordlengthnum[num]; printchart++) {
         printf("*");
      }
      printf("[%d]\n", wordlengthnum[num]);
   }
   return 0;
}