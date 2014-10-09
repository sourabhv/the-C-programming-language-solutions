#include <stdio.h>

int main() {
    int i, j, c, len = 0, max, histdata[11] = { 0 };

    while((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (len > 0 && len < 11)
                histdata[len - 1]++;
            else if (len >= 11)
                histdata[10]++;
            len = 0;
        }
        else
            len++;
    }

    /**** Histogram Plot :: Horizontal ****/

    printf("\n\n");
    max = histdata[0];
    for (i = 0; i < 11; i++) {
        printf("%2d | ", i + 1);
        for (j = 0; j < histdata[i]; j++)
            printf("* ");
        printf("\n");
        // find max
        if (histdata[i] > max)
            max = histdata[i];
    }

    /**** Histogram Plot :: Vertical ****/

    printf("\n\n");

    for (i = max; i > 0; i--) {
        printf("%2d |", i);
        for (j = 0; j < 11; j++)
            printf("  %c", histdata[j] >= i ? '*' : ' ');
        printf("\n");
    }
    printf("   +-----------------------------------\n"); // Yes it's hardcoded
    printf("      1  2  3  4  5  6  7  8  9  10 +10\n"); // get over it!!

    return 0;
}
