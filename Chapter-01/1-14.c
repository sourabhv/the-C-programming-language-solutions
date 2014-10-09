#include <stdio.h>

int main() {
    int i, j, c, max = 0, histdata[94] = { 0 };

    while((c = getchar()) != EOF)
        if (c >= 33 && c <= 126 && ++histdata[c-33] > max)
            max = histdata[c-33];

    printf("\n\nPLOT\n\n");

    for (i = max; i > 0; i--) {
        printf("%3d |", i);
        for (j = 0; j < 94; j++)
            printf("%c", histdata[j] >= i ? '*' : ' ');
        printf("\n");
    }
    printf("    +");
    for (i = 0; i < 94; i++) printf("-");
    printf("\n     ");
    for (i = 33; i < 127; i++) printf("%c", i);


    return 0;
}
