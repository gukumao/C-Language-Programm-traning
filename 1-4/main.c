#include "stdio.h"

int main(void) {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("<<Temperature>>\r\n");
    while (celsius <= upper) {
        fahr = 9.0 * celsius / 5 + 32;
        printf("%6.1f\t%3f\n", celsius, fahr);
        celsius = celsius + step;
    }

}