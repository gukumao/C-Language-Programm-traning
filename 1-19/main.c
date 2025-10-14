#include <stdio.h>
#include <string.h>

#define MAXLINE 1000

int my_getline(char line[], int maxline);
void reserve(char s[]);
int main(void) {
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = my_getline(line, MAXLINE)) > 0) {
        reserve(line);
        printf("[%d]->%s", len, line);
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

void reserve(char s[]) {
    int i, len;
    char c;

    len = i = 0;

    while (s[len] != '\n') {
        len++;
    }
    len--;

    while (i < len) {
        c = s[len];
        s[len--] = s[i];
        s[i++] = c;
    }
}


