#include <stdio.h>
#include <string.h>

#define MAXLINE 1000

int my_getline(char line[], int maxline);
void my_remove(char string[]);

int main(void) {
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = my_getline(line, MAXLINE)) > 0) {
        strcpy(longest, line);
        my_remove(longest);
        printf("[%d]->%s", len, longest);
    }

    return 0;
}

int my_getline(char line[], int maxline) {
    int c, i;

    for (i = 0; (c = getchar()) != EOF && c != '\n'; i++) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i++] = '\n';
        line[i++] = '\0';
    }
    return i;
}

void my_remove(char string[]) {
    int i, j;
    i = j = 0;

    while (string[i] != '\n') {
        if ((string[i] != ' ') && (string[i] != '\t')) {
            j = i;
        }

        i++;
    } 

    if (string[i] == '\n') {
        string[++j] = '\n';
        string[++j] = '\0';
    }
}



