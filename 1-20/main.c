#include <stdio.h>
#include <string.h>

#define N 8


int my_getline(char str[]);

int main(void) {
    char str[30];
    int len, offset;
    while((len = my_getline(str)) > 0) {
        for (int i = 0; i < len; i++) {
            if (str[i] == '\t') {
                offset = N - (i % N);
                int newlen = len + offset -1;
                
                for (int k = (len - 1); k > i; k--) {
                    str[k + offset -1] = str[k];
                }

                while (offset > 0) {
                    str[i + offset - 1] = ' ';
                    offset--; 
                }

                len = newlen;

                i = i + (N - (i % N)) -1;
            }
        }

        str[len] = '\0';
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

