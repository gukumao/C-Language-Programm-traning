#include <stdio.h>
#include <string.h>

#define N 8


int my_getline(char str[]);

int main(void) {
    char str[30];
    int len, offset, position;
    while((len = my_getline(str)) > 0) {
        for (int i = 0; i < len; i++) {
            if (str[i] == '\t') {
                offset = N - (i % N);
                len = len + offset -1;
                position = len - 1;
                
                while ((position - offset) != (i - 1)) {
                    str[position] = str[position - offset + 1];
                    position--;
                }

                while (offset > 0) {
                    str[i + offset - 1] = ' ';
                    offset--; 
                }

            }
        }
        str[len] = '\n';
        str[len + 1] = '\0';
        printf("%s", str);
    }

    return 0;
}


int my_getline(char str[]) {
    int c, i;
    for (i = 0; (c = getchar()) != EOF && c != '\n'; i++) {
        str[i] = c;
    }

    if (c == '\n') {
        str[i] = '\n';
        i++;
    }

    str[i] = '\0';

    return i;
}

