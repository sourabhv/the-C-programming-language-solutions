#include <stdio.h>

int main() {
    int c, prevChar = EOF;

    while((c = getchar()) != EOF) {
        if (!(c == ' ' && prevChar == ' ')) {
            prevChar = c;
            printf("%c", c);
        }
    }


    return 0;
}
