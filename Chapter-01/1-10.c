#include <stdio.h>

int main() {
    int c;

    while((c = getchar()) != EOF)
        if (c == '\t')      printf("\\t");
        else if (c == '\b') printf("\\b"); // the os intercepts \b so this part does nothing
        else if (c == '\\') printf("\\\\");
        else                printf("%c", c);

    return 0;
}
