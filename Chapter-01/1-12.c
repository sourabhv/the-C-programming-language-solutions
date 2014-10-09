#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    int c, state = OUT;

    while((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n')
            state = OUT;
        else if (state == OUT){
            state = IN;
            printf("\n%c", c);
        }
        else
            printf("%c", c);
    }

    return 0;
}
