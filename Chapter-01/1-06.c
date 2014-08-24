#include <stdio.h>

main() {
    int c;
    while ((c = getchar() != EOF) == 1) {
        printf("c is 1\n");
    }

    if (c == 0)
        printf("c is 0\n");
}
