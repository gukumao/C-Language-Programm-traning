#include <stdio.h>
#include <string.h>

#define TAB_WIDTH 8

void space_handle(int space_count, int *column);

int main(void) {
    
    char c;
    int column = 1;
    int space_count = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            space_count++;
        }
        else {
            if (space_count > 0) {
                space_handle(space_count, &column);;
            }
            space_count = 0;
        

            putchar(c);

            if (c == '\t') {
                column += TAB_WIDTH - (column - 1) % TAB_WIDTH;
            }
            else if (c == '\n') {
                column = 1;
            }
            else {
                column++;
            }
        }
        
    }
    return 0;
}

void space_handle(int space_count, int *column) {


    while (space_count > 0) {
        int next_to_tab = TAB_WIDTH - ((*column - 1) % TAB_WIDTH);
        if (space_count >= next_to_tab) {
            putchar('\t');
            space_count -= next_to_tab;
            *column += next_to_tab;
        }
        else {
            putchar(' ');
            space_count--;
            (*column)++;
        }
    }
}